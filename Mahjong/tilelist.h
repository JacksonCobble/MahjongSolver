#ifndef TILELIST_H
#define TILELIST_H

#include <QWidget>
#include <QVector>
#include <QHBoxLayout>

#include "interacttile.h"

class TileList : public QWidget
{
    Q_OBJECT

public:
    explicit TileList(QWidget *parent = nullptr,
                      QVector<InteractTile*> tileList = QVector<InteractTile*>());

    InteractTile* getSelectedTile();
    void addNewTile(InteractTile* t);

    ~TileList();

private:
    QHBoxLayout* mainLayout;
    InteractTile* selectedTile;

private slots:
    void setSelectedTile(InteractTile* info);
};

#endif // TILELIST_H
