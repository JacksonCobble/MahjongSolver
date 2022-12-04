#include "tiledatareader.h"

TileDataReader::TileDataReader()
{
    this->filename = QString("no file");

}

void TileDataReader::setFilestream(std::string f)
{
    this->filename = QString::fromStdString(f);
}

QVector<InteractTile*> TileDataReader::getTiles()
{
    //instantiate vector of all tiles
    QVector<InteractTile*> mytiles;

    //open up file stream
    QFile myfile(this->filename);
    myfile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&myfile);
    QString myline;

    //loop
    while(!in.atEnd())
    {
        //pull data, parse values, add to our vector
        myline = in.readLine();
        mytiles.push_back(this->makeTile(myline.toStdString()));
    }

    return mytiles;
}

InteractTile* TileDataReader::makeTile(std::string s)
{
    //tokenize our value and pull it from our map
    std::pair<std::string, std::string> token = this->parseDataPoint(s);
    Value v = valuemap.find(token.first)->second;

    //tokenize our suit and pull it from our map
    token = this->parseDataPoint(token.second);
    Suit su = suitmap.find(token.first)->second;

    //tokenize image file directory and save it
    token = this->parseDataPoint(token.second);
    std::string image = token.second;

    //create new tile object and return
    return new InteractTile("", nullptr, std::pair<Value, Suit>(v,su), image, true);
}

std::pair<std::string, std::string> TileDataReader::parseDataPoint(std::string s)
{
    //txt file delimator
    std::string delim = "-";

    //position of next delimator
    size_t pos = s.find(delim);

    //save next value
    std::string val = s.substr(0,pos);

    //erase value
    s.erase(0, pos + delim.length());

    return std::pair<std::string, std::string>(val,s);
}
