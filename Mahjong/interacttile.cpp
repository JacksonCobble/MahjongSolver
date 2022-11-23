#include "interacttile.h"

InteractTile::InteractTile(const QString& text, QWidget* parent,
                           std::pair<Value, Suit> p, std::string image) : QLabel(text, parent)
{
    this->dragStartPosition = new QPoint();
    this->info = p;
    this->setFixedWidth(100);
    this->setFixedHeight(175);
    this->img = QPixmap(QString::fromStdString(image)).scaled(100,175, Qt::KeepAspectRatio);
    this->setPixmap(this->img);
}

std::pair<Value, Suit> InteractTile::getVal()
{
    return this->info;
}



