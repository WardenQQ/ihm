#-------------------------------------------------
#
# Project created by QtCreator 2015-05-01T14:37:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ihm
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    surveyform.cpp \
    survey.cpp

HEADERS  += mainwindow.h \
    surveyform.h \
    survey.h

FORMS    += mainwindow.ui \
    surveyform.ui
