TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp
INCLUDEPATH+=formats

HEADERS += \
    vlcplayer.h \
    audioadaptervlc.h \
    mp3decoder.h \
    vlccontrolinterface.h \
    oggdecoder.h \
    formats/mp3decoder.h \
    formats/oggdecoder.h \
    formats/vocdecoder.h

