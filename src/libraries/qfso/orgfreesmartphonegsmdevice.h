/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -p orgfreesmartphonegsmdevice specs/xml/org.freesmartphone.GSM.Device.xml
 *
 * qdbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef ORGFREESMARTPHONEGSMDEVICE_H_1305990597
#define ORGFREESMARTPHONEGSMDEVICE_H_1305990597

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.freesmartphone.GSM.Device
 */
class OrgFreesmartphoneGSMDeviceInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.GSM.Device"; }

public:
    OrgFreesmartphoneGSMDeviceInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreesmartphoneGSMDeviceInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString> GetDeviceStatus()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetDeviceStatus"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> GetFeatures()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetFeatures"), argumentList);
    }

    inline QDBusPendingReply<QString, bool, QString> GetFunctionality()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetFunctionality"), argumentList);
    }
    inline QDBusReply<QString> GetFunctionality(bool &autoregister, QString &pin)
    {
        QList<QVariant> argumentList;
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QLatin1String("GetFunctionality"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 3) {
            autoregister = qdbus_cast<bool>(reply.arguments().at(1));
            pin = qdbus_cast<QString>(reply.arguments().at(2));
        }
        return reply;
    }

    inline QDBusPendingReply<bool> GetMicrophoneMuted()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetMicrophoneMuted"), argumentList);
    }

    inline QDBusPendingReply<int> GetSpeakerVolume()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetSpeakerVolume"), argumentList);
    }

    inline QDBusPendingReply<> SetFunctionality(const QString &level, bool autoregister, const QString &pin)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(level) << qVariantFromValue(autoregister) << qVariantFromValue(pin);
        return asyncCallWithArgumentList(QLatin1String("SetFunctionality"), argumentList);
    }

    inline QDBusPendingReply<> SetMicrophoneMuted(bool muted)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(muted);
        return asyncCallWithArgumentList(QLatin1String("SetMicrophoneMuted"), argumentList);
    }

    inline QDBusPendingReply<> SetSpeakerVolume(int volume)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(volume);
        return asyncCallWithArgumentList(QLatin1String("SetSpeakerVolume"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void DeviceStatus(const QString &status);
    void KeypadEvent(const QString &name, bool pressed);
};

namespace org {
  namespace freesmartphone {
    namespace GSM {
      typedef ::OrgFreesmartphoneGSMDeviceInterface Device;
    }
  }
}
#endif
