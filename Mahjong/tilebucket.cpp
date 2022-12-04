#include "tilebucket.h"
#include "ui_tilebucket.h"

TileBucket::TileBucket(QWidget *parent, QString name) :
    QWidget(parent)
{
    //create and place the label of our bucket's name
    this->bucketNameLabel = new QLabel(name);
    this->mainLayout = new QVBoxLayout();
    this->mainLayout->addWidget(this->bucketNameLabel);

    //create empty tile list for our bucket to hold
    this->dataBucket = new TileList(this, QVector<InteractTile*>());
    this->mainLayout->addWidget(this->dataBucket);

    //set main layout
    this->setLayout(this->mainLayout);

    //set widget to accept drops
    this->setAcceptDrops(true);
}

void TileBucket::addTile(InteractTile* tile)
{
    this->dataBucket->addNewTile(tile);
}

TileBucket::~TileBucket()
{
    delete this->bucketNameLabel;
    delete this->mainLayout;
}

void TileBucket::dragEnterEvent(QDragEnterEvent *event)
{
    //std::cout << "drag enter event!" << std::endl;
    event->acceptProposedAction();
}

void TileBucket::dropEvent(QDropEvent *event)
{
    //std::cout << "i got a drop!" << std::endl;
    emit emitGetTile(this);
    event->acceptProposedAction();
}
