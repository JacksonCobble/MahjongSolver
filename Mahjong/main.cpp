#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w(nullptr, "tilelist.txt");
    w.show();
    return a.exec();
}
