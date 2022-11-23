#ifndef TILEDATAREADER_H
#define TILEDATAREADER_H
#include <string>
#include <vector>
#include <fstream>
#include <unordered_map>
#include <QVector>
#include "interacttile.h"
#include <iostream>


class TileDataReader
{
public:
    TileDataReader();
    void setFilestream(std::string f);
    QVector<InteractTile*> getTiles();

private:
    std::string filename;

    InteractTile* makeTile(std::string s);
    std::pair<std::string, std::string> parseDataPoint(std::string s);

};

#endif // TILEDATAREADER_H
