/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsodeviceinfo -c QFsoDeviceInfo specs/xml/org.freesmartphone.Device.Info.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSODEVICEINFO_H
#define QFSODEVICEINFO_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include <qfsodbusabstractinterface.h>

#if defined(QFSO_LIBRARY)
    #define QFSO_EXPORT Q_DECL_EXPORT
#else
    #define QFSO_EXPORT Q_DECL_IMPORT
#endif

/*
 * Proxy class for interface org.freesmartphone.Device.Info
 */
class QFSO_EXPORT QFsoDeviceInfo: public QFsoDbusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.Device.Info"; }

public:
    QFsoDeviceInfo(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoDeviceInfo();

public Q_SLOTS: // METHODS
    inline QFsoDBusPendingReply<QVariantMap> GetCpuInfo()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("GetCpuInfo"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace freesmartphone {
    namespace Device {
      typedef ::QFsoDeviceInfo Info;
    }
  }
}
#endif
