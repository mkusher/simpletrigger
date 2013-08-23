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
    characters/human.cpp \
    characters/droid.cpp

HEADERS += \
    app.h \
    characters/human.h \
    characters/droid.h \
    states/state.h \
    fsm.h \
    states/conditions/condition.h
