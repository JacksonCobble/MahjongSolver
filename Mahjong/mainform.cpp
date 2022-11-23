#include "mainform.h"

MainForm::MainForm(QWidget *parent, std::string datafile) :
    QWidget(parent)
{
    this->mainLayout = new QVBoxLayout();

    //create data reader
    TileDataReader R = TileDataReader();
    R.setFilestream(datafile);

    //get list of tiles
    QVector<InteractTile*> mytileList = R.getTiles();

    //create tile list widget
    this->allTiles = new TileList(this, mytileList);

    //create scroll area for all tiles, add it to area
    this->allTilesScroll = new QScrollArea(this);
    this->allTilesScroll->setWidget(this->allTiles);
    this->allTilesScroll->setWidgetResizable(true);

    //add to layout
    this->mainLayout->addWidget(this->allTilesScroll);

    //set main layout
    this->setLayout(this->mainLayout);
}

MainForm::~MainForm()
{

}
