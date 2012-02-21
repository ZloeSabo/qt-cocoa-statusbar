# -------------------------------------------------
# Project created by QtCreator 2009-07-13T23:03:22
# -------------------------------------------------
TARGET = statusbar
TEMPLATE = app
SOURCES += src/main.cpp \
    src/mainwindow.cpp
HEADERS += headers/mainwindow.h \
    headers/menubar.h \
    headers/MenuWrapperPrivate.h \
    headers/menuwrapperobj.h
FORMS += ui/mainwindow.ui
UI_DIR = ui
INCLUDEPATH += ./headers \
    ./src \
    ./obj-src .
OBJECTIVE_SOURCES += obj-src/menuwrapperobj.mm obj-src/menubar.m
QMAKE_CXXFLAGS = -ObjC++
QMAKE_CFLAGS = -ObjC++
RESOURCES += res.qrc
DESTDIR = .
#include "ui_mainwindow.h"
