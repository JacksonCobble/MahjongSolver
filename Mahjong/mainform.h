#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <string>
#include <QVBoxLayout>
#include <QScrollArea>

#include "tilelist.h"
#include "tiledatareader.h"

class MainForm : public QWidget
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = nullptr, std::string datafile = "");
    ~MainForm();

private:
    QVBoxLayout* mainLayout;
    TileList* allTiles;
    QScrollArea* allTilesScroll;
};

#endif // MAINFORM_H
