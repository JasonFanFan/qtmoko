/****************************************************************************
 **
 ** Copyright (C) 2000-2007 TROLLTECH ASA. All rights reserved.
 **
 ** This file is part of the Opensource Edition of the Qtopia Toolkit.
 **
 ** This software is licensed under the terms of the GNU General Public
 ** License (GPL) version 2.
 **
 ** See http://www.trolltech.com/gpl/ for GPL licensing information.
 **
 ** Contact info@trolltech.com if any conditions of this licensing are
 ** not clear to you.
 **
 **
 **
 ** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 ** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 **
 ****************************************************************************/

#ifndef HTCUNIVERSALPLUGIN_H
#define HTCUNIVERSALPLUGIN_H

#include <qmodemserviceplugin.h>

class HtcuniversalPluginImpl : public QModemServicePlugin
{
  Q_OBJECT
    public:
  HtcuniversalPluginImpl();
  virtual ~HtcuniversalPluginImpl();

  bool supports( const QString& manufacturer );
  QModemService *create( const QString& service,
			 QSerialIODeviceMultiplexer *mux,
			 QObject *parent );
};

#endif /* HTCUNIVERSALPLUGIN_H */
