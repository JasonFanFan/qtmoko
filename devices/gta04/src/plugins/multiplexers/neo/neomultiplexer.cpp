/****************************************************************************
**
** This file is part of the Qt Extended Opensource Package.
**
** Copyright (C) 2009 Trolltech ASA.
**
** Contact: Qt Extended Information (info@qtextended.org)
**
** This file may be used under the terms of the GNU General Public License
** version 2.0 as published by the Free Software Foundation and appearing
** in the file LICENSE.GPL included in the packaging of this file.
**
** Please review the following information to ensure GNU General Public
** Licensing requirements will be met:
**     http://www.fsf.org/licensing/licenses/info/GPLv2.html.
**
**
****************************************************************************/

#include "neomultiplexer.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QSettings>
#include <qtopialog.h>
#include <QValueSpaceItem>

#include <qgsm0710multiplexer.h>
#include <qserialport.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <termios.h>

QTOPIA_EXPORT_PLUGIN( NeoMultiplexerPlugin )

// Define this to disable GSM 07.10 multiplexing, but still do wakeup handling.
//#define NEO_NO_MUX

// Size of GSM 07.10 frames to use with the multiplexer.
#ifndef NEO_FRAME_SIZE
#define NEO_FRAME_SIZE 64
#endif

#define N_TIHTC 17

NeoMultiplexerPlugin::NeoMultiplexerPlugin( QObject* parent )
    : QSerialIODeviceMultiplexerPlugin( parent )
{
}

NeoMultiplexerPlugin::~NeoMultiplexerPlugin()
{
}

bool NeoMultiplexerPlugin::detect( QSerialIODevice *device )
{
    qLog(Hardware) << __PRETTY_FUNCTION__;
    
    QSerialPort *port = qobject_cast<QSerialPort *>( device );
    device->discard();
    int rc;

    struct termios t;
    rc = tcgetattr(port->fd(), &t);
    t.c_cflag |= CRTSCTS;
    rc = tcsetattr(port->fd(), TCSANOW, &t);

    QSettings cfg("Trolltech", "Modem");
    QString multiplexing = cfg.value("Multiplexing/Active", "yes").toString();
    muxEnabled &= (multiplexing != "no");
    qLog(Mux) << "Neo multiplexing " << (muxEnabled ? "enabled" : "disabled")
              << multiplexing;

    // disable echoing of commands
    QSerialIODeviceMultiplexer::chat(device, "ATE0");
    device->readAll();

    if (muxEnabled) {
        // Issue the AT+CMUX command to determine if this device
        // uses GSM 07.10-style multiplexing.
        return QGsm0710Multiplexer::cmuxChat( device, NEO_FRAME_SIZE, true );
    }
    return true;
}

QSerialIODeviceMultiplexer *NeoMultiplexerPlugin::create( QSerialIODevice *device )
{
    qLog(Hardware) << __PRETTY_FUNCTION__;

    if (muxEnabled)
        return new QGsm0710Multiplexer( device, NEO_FRAME_SIZE, true );
    return new QNullSerialIODeviceMultiplexer( device );
}
