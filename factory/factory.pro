TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    socketfactory.cpp

HEADERS += \
    socket.h \
    winsocket.h \
    linuxsocket.h \
    socketfactory.h

