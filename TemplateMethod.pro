QT += core
QT -= gui

TARGET = TemplateMethod
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    report.cpp \
    reportprofessor.cpp \
    reportaluno.cpp

HEADERS += \
    report.h \
    reportprofessor.h \
    reportaluno.h

