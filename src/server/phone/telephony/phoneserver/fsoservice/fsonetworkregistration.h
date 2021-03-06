/****************************************************************************
**
** This file is part of the Qt Extended Opensource Package.
**
** Copyright (C) 2011 Radek Polak.
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

#ifndef FSONETWORKREGISTRATION_H
#define FSONETWORKREGISTRATION_H

#include <QTimer>
#include <qnetworkregistration.h>
#include <qfsogsmnetwork.h>

class FsoTelephonyService;

class FsoNetworkRegistration : public QNetworkRegistrationServer
{
    Q_OBJECT
public:
    FsoNetworkRegistration( FsoTelephonyService * service );
    ~FsoNetworkRegistration();

    FsoTelephonyService * service;

    void deviceStatus(QString status);  // called by fso telephony service to report device status
    void networkStatusChange(const QVariantMap &);

public slots:
    void setCurrentOperator( QTelephony::OperatorMode mode,
                             const QString& id, const QString& technology );
    void requestAvailableOperators();

private slots:
    void registerFinished(QFsoDBusPendingCall &);
    void getStatusFinished(QFsoDBusPendingCall &);
};

#endif

