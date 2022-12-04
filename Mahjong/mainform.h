#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <string>
#include <QVBoxLayout>
#include <QScrollArea>

#include "tilelist.h"
#include "tiledatareader.h"
#include "tilebucket.h"

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

    TileBucket* handBucket;

private slots:
    void giveTileToBucket(TileBucket* bucket);
};

#endif // MAINFORM_H
