#-------------------------------------------------
#
# Project created by QtCreator 2013-08-23T13:41:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SimpleTrigger

TEMPLATE = app


SOURCES += main.cpp \
    characters/human.cpp \
    characters/droid.cpp \
    world/map.cpp \
    world/sector.cpp \
    views/mainwindow.cpp \
    views/map.cpp

HEADERS += \
    characters/human.h \
    characters/droid.h \
    states/state.h \
    fsm.h \
    states/conditions/condition.h \
    characters/character.h \
    world/map.h \
    world/sector.h \
    views/mainwindow.h \
    views/map.h

FORMS += \
    views/mainwindow.ui \
    views/map.ui
