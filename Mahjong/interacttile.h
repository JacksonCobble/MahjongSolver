#ifndef INTERACTTILE_H
#define INTERACTTILE_H
#include <QLabel>
#include <QString>
#include <QPixmap>
#include <QDrag>
#include <QMouseEvent>
#include <QMimeData>
#include <QPoint>
#include <QApplication>

#include <utility>
#include <iostream>

#include "values.h"

class InteractTile : public QLabel
{
    Q_OBJECT

public:
    explicit InteractTile(const QString& text = "", QWidget* parent = nullptr,
                          std::pair<Value, Suit> p = std::pair<Value,Suit>(Value::NOVAL, Suit::NOSUIT),
                          std::string image = "", bool sel = false);

    InteractTile(QWidget* parent = nullptr, InteractTile* t = nullptr);

    std::pair<Value, Suit> getVal();
    void setSelectable(bool val);
private:
    std::pair<Value, Suit> info;
    QPoint dragStartPosition;
    QPixmap img;
    bool isSelectable;

protected:
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;

signals:
    void selectedSignal(InteractTile* info);
};

#endif // INTERACTTILE_H
