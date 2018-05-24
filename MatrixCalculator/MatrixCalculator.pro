#-------------------------------------------------
#
# Project created by QtCreator 2018-05-21T14:07:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MatrixCalculator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    matrix.cpp \
    functions.cpp

HEADERS  += mainwindow.h \
    matrix.h \
    functions.h

FORMS    += mainwindow.ui
