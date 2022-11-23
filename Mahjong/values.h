#ifndef VALUES_H
#define VALUES_H
#include <unordered_map>
#include <string>

enum Value {
    ONE = 1,
    TWO = 2,
    THREE = 3,
    FOUR = 4,
    FIVE = 5,
    SIX = 6,
    SEVEN = 7,
    EIGHT = 8,
    NINE = 9,
    NORTH = 11,
    SOUTH = 12,
    EAST = 13,
    WEST = 14,
    GREEN = 15,
    RED = 16,
    WHITE = 17,
    NOVAL = 20
};

enum Suit {
    PIN = 1,
    SOU = 2,
    MAN = 3,
    WIND = 4,
    DRAGON = 5,
    NOSUIT = 6
};

static std::unordered_map<std::string, Value> const valuemap = {
    {"ONE",Value::ONE},
    {"TWO",Value::TWO},
    {"THREE",Value::THREE},
    {"FOUR",Value::FOUR},
    {"FIVE",Value::FIVE},
    {"SIX",Value::SIX},
    {"SEVEN",Value::SEVEN},
    {"EIGHT",Value::EIGHT},
    {"NINE",Value::NINE},
    {"NORTH",Value::NORTH},
    {"SOUTH",Value::SOUTH},
    {"EAST",Value::EAST},
    {"WEST",Value::WEST},
    {"GREEN",Value::GREEN},
    {"RED",Value::RED},
    {"WHITE",Value::WHITE}
};

static std::unordered_map<std::string, Suit> const suitmap = {
    {"PIN",Suit::PIN},
    {"SOU",Suit::SOU},
    {"MAN",Suit::MAN},
    {"WIND",Suit::WIND},
    {"DRAGON",Suit::DRAGON},
};

#endif // VALUES_H
