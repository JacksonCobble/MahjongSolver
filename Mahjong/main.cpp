#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <string>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w(nullptr, ":/rs/resources/tilelist.txt");
    w.show();
    return a.exec();
}
