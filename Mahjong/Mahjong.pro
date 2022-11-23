QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    interacttile.cpp \
    main.cpp \
    mainform.cpp \
    mainwindow.cpp \
    tiledatareader.cpp \
    tilelist.cpp

HEADERS += \
    interacttile.h \
    mainform.h \
    mainwindow.h \
    tiledatareader.h \
    tilelist.h \
    values.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    MahjongTilesImages/Dragon/GreenDragon.png \
    MahjongTilesImages/Dragon/RedDragon.png \
    MahjongTilesImages/Dragon/WhiteDragon.png \
    MahjongTilesImages/Man/1Man.png \
    MahjongTilesImages/Man/2Man.png \
    MahjongTilesImages/Man/3Man.png \
    MahjongTilesImages/Man/4Man.png \
    MahjongTilesImages/Man/5Man.png \
    MahjongTilesImages/Man/6Man.png \
    MahjongTilesImages/Man/7Man.png \
    MahjongTilesImages/Man/8Man.png \
    MahjongTilesImages/Man/9Man.png \
    MahjongTilesImages/Pin/1Pin.png \
    MahjongTilesImages/Pin/2Pin.png \
    MahjongTilesImages/Pin/3Pin.png \
    MahjongTilesImages/Pin/4Pin.png \
    MahjongTilesImages/Pin/5Pin.png \
    MahjongTilesImages/Pin/6Pin.png \
    MahjongTilesImages/Pin/7Pin.png \
    MahjongTilesImages/Pin/8Pin.png \
    MahjongTilesImages/Pin/9Pin.png \
    MahjongTilesImages/Sou/1Sou.png \
    MahjongTilesImages/Sou/2Sou.png \
    MahjongTilesImages/Sou/3Sou.png \
    MahjongTilesImages/Sou/4Sou.png \
    MahjongTilesImages/Sou/5Sou.png \
    MahjongTilesImages/Sou/6Sou.png \
    MahjongTilesImages/Sou/7Sou.png \
    MahjongTilesImages/Sou/8Sou.png \
    MahjongTilesImages/Sou/9Sou.png \
    MahjongTilesImages/Wind/EastWind.png \
    MahjongTilesImages/Wind/NorthWind.png \
    MahjongTilesImages/Wind/SouthWind.png \
    MahjongTilesImages/Wind/WestWind.png \
    tilelist.txt
