CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(class5plugin)
TEMPLATE    = lib

HEADERS     = class5plugin.h \
    top.h
SOURCES     = class5plugin.cpp \
    top.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(class5.pri)

FORMS += \
    top.ui

CONFIG += staticlib
