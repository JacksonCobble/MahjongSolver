#include "tilelist.h"

TileList::TileList(QWidget *parent, QVector<InteractTile*> tileList) :
    QWidget(parent)
{
    //loop over every tile in tile list
    this->mainLayout = new QHBoxLayout(this);
    for(auto t : tileList)
    {
        //add widget to layout
        this->mainLayout->addWidget(t);
        //connect the selected signal from each tile and make it call setselected tile
        connect(t, SIGNAL(selectedSignal(InteractTile*)), this,
                SLOT(setSelectedTile(InteractTile*)));
    }

    this->setLayout(this->mainLayout);
}

InteractTile* TileList::getSelectedTile()
{
    return this->selectedTile;
}

void TileList::addNewTile(InteractTile *t)
{

    this->mainLayout->addWidget(t);
}

TileList::~TileList()
{
    delete this->mainLayout;
    delete this->selectedTile;
}

void TileList::setSelectedTile(InteractTile *info)
{
    //std::cout << "tile put up for selection!" << std::endl;
    //save pointer to tile last selected
    this->selectedTile = info;
}
