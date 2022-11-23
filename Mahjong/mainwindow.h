#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <string>

#include "mainform.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr, std::string datafile = "");
    ~MainWindow();

private:
    MainForm* centralWidget;
};
#endif // MAINWINDOW_H
