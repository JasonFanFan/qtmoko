/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsoaudiomanager -c QFsoAudioManager specs/xml/org.freesmartphone.Audio.Manager.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSOAUDIOMANAGER_H
#define QFSOAUDIOMANAGER_H

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
 * Proxy class for interface org.freesmartphone.Audio.Manager
 */
class QFSO_EXPORT QFsoAudioManager: public QFsoDbusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.Audio.Manager"; }

public:
    QFsoAudioManager(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoAudioManager();

public Q_SLOTS: // METHODS
    inline QFsoDBusPendingReply<QStringList> GetAvailableDevices(const QString &mode)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(mode);
        return fsoAsyncCall(QLatin1String("GetAvailableDevices"), argumentList);
    }

    inline QFsoDBusPendingReply<QString> GetDevice()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("GetDevice"), argumentList);
    }

    inline QFsoDBusPendingReply<QString> GetMode()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("GetMode"), argumentList);
    }

    inline QFsoDBusPendingReply<bool> GetMute(const QString &control)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(control);
        return fsoAsyncCall(QLatin1String("GetMute"), argumentList);
    }

    inline QFsoDBusPendingReply<int> GetVolume(const QString &control)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(control);
        return fsoAsyncCall(QLatin1String("GetVolume"), argumentList);
    }

    inline QFsoDBusPendingReply<QString> PullDevice()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("PullDevice"), argumentList);
    }

    inline QFsoDBusPendingReply<> PushDevice(const QString &device)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(device);
        return fsoAsyncCall(QLatin1String("PushDevice"), argumentList);
    }

    inline QFsoDBusPendingReply<QString> RegisterSession(const QString &stream)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(stream);
        return fsoAsyncCall(QLatin1String("RegisterSession"), argumentList);
    }

    inline QFsoDBusPendingReply<> ReleaseSession(const QString &token)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(token);
        return fsoAsyncCall(QLatin1String("ReleaseSession"), argumentList);
    }

    inline QFsoDBusPendingReply<> SetDevice(const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(name);
        return fsoAsyncCall(QLatin1String("SetDevice"), argumentList);
    }

    inline QFsoDBusPendingReply<> SetMode(const QString &mode)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(mode);
        return fsoAsyncCall(QLatin1String("SetMode"), argumentList);
    }

    inline QFsoDBusPendingReply<> SetMute(const QString &control, bool mute)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(control) << qVariantFromValue(mute);
        return fsoAsyncCall(QLatin1String("SetMute"), argumentList);
    }

    inline QFsoDBusPendingReply<> SetVolume(const QString &control, int volume)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(control) << qVariantFromValue(volume);
        return fsoAsyncCall(QLatin1String("SetVolume"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void DeviceChanged(const QString &device);
    void ModeChanged(const QString &mode);
    void MuteChanged(const QString &control, bool mute);
    void VolumeChanged(const QString &control, int volume);
};

namespace org {
  namespace freesmartphone {
    namespace Audio {
      typedef ::QFsoAudioManager Manager;
    }
  }
}
#endif
