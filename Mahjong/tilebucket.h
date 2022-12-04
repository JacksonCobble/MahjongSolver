#ifndef TILEBUCKET_H
#define TILEBUCKET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QString>
#include <QDropEvent>
#include <QDragEnterEvent>

#include <iostream>

#include "tilelist.h"

class TileBucket : public QWidget
{
    Q_OBJECT

public:
    explicit TileBucket(QWidget *parent = nullptr, QString name = "");
    ~TileBucket();
    void addTile(InteractTile* tile);

private:
    QLabel* bucketNameLabel;
    QVBoxLayout* mainLayout;

    TileList* dataBucket;

protected:
    void dropEvent(QDropEvent* event) override;
    void dragEnterEvent(QDragEnterEvent* event) override;

signals:
    void emitGetTile(TileBucket* bucket);
};

#endif // TILEBUCKET_H
