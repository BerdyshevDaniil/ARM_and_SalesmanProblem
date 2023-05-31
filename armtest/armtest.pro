QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addclient.cpp \
    insurencecompany.cpp \
    main.cpp \
    arm.cpp \
    qcustomplot.cpp

HEADERS += \
    addclient.h \
    arm.h \
    insurencecompany.h \
    qcustomplot.h

FORMS += \
    addclient.ui \
    arm.ui \
    insurencecompany.ui

win32:RC_FILE = icon.rc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
