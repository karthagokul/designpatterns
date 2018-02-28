TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    imageeditor.cpp \
    commandmanager.cpp

HEADERS += \
    imageeditor.h \
    sepiaplugin.h \
    command.h \
    cropimage.h \
    resizeimage.h \
    commandmanager.h \
    blackandwhite.h \
    image.h

