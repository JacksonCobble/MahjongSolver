#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent, std::string datafile)
    : QMainWindow(parent)
{

    this->centralWidget = new MainForm(this, datafile);
    this->setCentralWidget(this->centralWidget);
}

MainWindow::~MainWindow()
{

}

