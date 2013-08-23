#-------------------------------------------------
#
# Project created by QtCreator 2013-08-23T13:41:15
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = src
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    app.cpp \
    human.cpp \
    droid.cpp

HEADERS += \
    app.h \
    human.h \
    droid.h \
    state.h \
    fsm.h
