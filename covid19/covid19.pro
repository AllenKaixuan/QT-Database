QT       += core gui
QT +=sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dlg_addstudent.cpp \
    log_in.cpp \
    main.cpp \
    mainwindow.cpp \
    stusql.cpp

HEADERS += \
    dlg_addstudent.h \
    log_in.h \
    mainwindow.h \
    stusql.h

FORMS += \
    dlg_addstudent.ui \
    log_in.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
