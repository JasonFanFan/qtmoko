TEMPLATE=plugin
TARGET=fsovendor

PLUGIN_FOR=qtopia
PLUGIN_TYPE=phonevendors

CONFIG+=qtopia singleexec
QTOPIA+=phonemodem
MODULES*=qfso

pkg [
    name=fso-phonevendor
    desc="Freesmartphone.org phonevendor plugin for Qt Extended."
    version=$$QTOPIA_VERSION
    license=$$QTOPIA_LICENSE
    maintainer=$$QTOPIA_MAINTAINER
]

HEADERS=\
    fsoplugin.h\
    fsomodemservice.h\
    fsonetworkregistration.h\
    fsosupplementaryservices.h\
    fsoservicechecker.h\
    fsorffunctionality.h\
    fsocallprovider.h\
    fsophonecall.h\
    fsoutil.h

SOURCES=\
    fsoplugin.cpp\
    fsomodemservice.cpp\
    fsonetworkregistration.cpp\
    fsosupplementaryservices.cpp\
    fsoservicechecker.cpp\
    fsorffunctionality.cpp\
    fsocallprovider.cpp \
    fsophonecall.cpp
