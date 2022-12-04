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
    //add to layout
    this->mainLayout->addWidget(this->allTilesScroll);

    //create buckets and add them to layout
    this->handBucket = new TileBucket(this, QString("Hand Bucket"));
    this->handBucket->setMinimumHeight(300);
    this->mainLayout->addWidget(this->handBucket);

    //set main layout
    this->setLayout(this->mainLayout);

    //connect statements
    connect(this->handBucket, SIGNAL(emitGetTile(TileBucket*)), this,
            SLOT(giveTileToBucket(TileBucket*)));
}

void MainForm::giveTileToBucket(TileBucket* bucket)
{
    //std::cout << "give tile to bucket entered!" << std::endl;
    InteractTile* tmp = this->allTiles->getSelectedTile();
    bucket->addTile(tmp);
}

MainForm::~MainForm()
{
    delete this->mainLayout;
    delete this->allTiles;
    delete this->allTilesScroll;
    delete this->handBucket;
}
