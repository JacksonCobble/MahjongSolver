#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent, std::string datafile)
    : QMainWindow(parent)
{
    //create main widget, set it to window
    this->centralWidget = new MainForm(this, datafile);
    this->setCentralWidget(this->centralWidget);
}

MainWindow::~MainWindow()
{
    delete this->centralWidget;
}

