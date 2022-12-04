#ifndef TILEDATAREADER_H
#define TILEDATAREADER_H

#include <QVector>
#include <QFile>
#include <QString>
#include <QTextStream>

#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

#include "interacttile.h"

class TileDataReader
{
public:
    TileDataReader();
    void setFilestream(std::string f);
    QVector<InteractTile*> getTiles();

private:
    QString filename;

    InteractTile* makeTile(std::string s);
    std::pair<std::string, std::string> parseDataPoint(std::string s);

};

#endif // TILEDATAREADER_H
