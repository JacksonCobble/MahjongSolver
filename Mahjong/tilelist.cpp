#include "tilelist.h"

TileList::TileList(QWidget *parent, QVector<InteractTile*> tileList) :
    QWidget(parent)
{
    this->mainLayout = new QHBoxLayout(this);
    for(auto t : tileList)
    {
        this->mainLayout->addWidget(t);
    }

    this->setLayout(this->mainLayout);
}

TileList::~TileList()
{
    delete this->mainLayout;
}
