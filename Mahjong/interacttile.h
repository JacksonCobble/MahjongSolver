#ifndef INTERACTTILE_H
#define INTERACTTILE_H
#include <utility>
#include <QLabel>
#include <QString>
#include <QPixmap>
#include <QDrag>
#include <QMouseEvent>
#include <QMimeData>
#include <QPoint>
#include <QApplication>

#include "values.h"

class InteractTile : public QLabel
{
    Q_OBJECT

public:
    explicit InteractTile(const QString& text = "", QWidget* parent = nullptr,
                          std::pair<Value, Suit> p = std::pair<Value,Suit>(Value::NOVAL, Suit::NOSUIT),
                          std::string image = "");

    std::pair<Value, Suit> getVal();

private:

    std::pair<Value, Suit> info;
    QPoint* dragStartPosition;
    QPixmap img;

};

#endif // INTERACTTILE_H
