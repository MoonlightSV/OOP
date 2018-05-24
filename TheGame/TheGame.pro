#-------------------------------------------------
#
# Project created by QtCreator 2018-05-22T12:00:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TheGame
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    apple.cpp \
    spider.cpp \
    character.cpp

HEADERS  += widget.h \
    apple.h \
    spider.h \
    character.h

FORMS    += widget.ui
