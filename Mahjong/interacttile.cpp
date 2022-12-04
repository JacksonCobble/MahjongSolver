#include "interacttile.h"

InteractTile::InteractTile(const QString& text, QWidget* parent,
                           std::pair<Value, Suit> p, std::string image,
                           bool sel) : QLabel(text, parent)
{
    this->dragStartPosition = QPoint();

    //set suit and value info
    this->info = p;

    //tile size - 100x175 pixels
    this->setFixedWidth(100);
    this->setFixedHeight(175);

    //set image on label
    this->img = QPixmap(QString::fromStdString(image)).scaled(100,175, Qt::KeepAspectRatio);
    this->setPixmap(this->img);

    //set if its selectable
    this->isSelectable = sel;
}

InteractTile::InteractTile(QWidget* parent, InteractTile* t) : QLabel(parent)
{
    this->info = t->getVal();
    this->img = *(t->pixmap());
}

void InteractTile::setSelectable(bool val)
{
    this->isSelectable = val;
}

std::pair<Value, Suit> InteractTile::getVal()
{
    return this->info;
}

void InteractTile::mousePressEvent(QMouseEvent* event)
{
    //std::cout << "clicked!" << std::endl;
}

void InteractTile::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() == Qt::LeftButton) {
            //std::cout << "mouse move event!!!" << std::endl;
            //emit info about this object being selected for a drag
            emit selectedSignal(this);

            //create drag object
            QDrag *drag = new QDrag(this);

            //mime data is empty we dont need to transfer anything,
            //but just display the image
            QMimeData *mimeData = new QMimeData;

            //set mime data, pixmap, and pixmap location
            drag->setMimeData(mimeData);
            drag->setPixmap(this->img);
            drag->setHotSpot(event->pos());

            //execute drag
            Qt::DropAction dropAction = drag->exec();

        }
}
