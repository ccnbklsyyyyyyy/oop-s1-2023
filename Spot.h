#ifndef SPOT_H
#define SPOT_H

#include <tuple>

class Spot {
private:
    std::tuple<int, int> location;
    char category;

public:
    Spot(int x, int y, char category);
    std::tuple<int, int> getLoc();
    char getCategory();
    void setLoc(int x, int y);
    void setCategory(char category);
};

Spot::Spot(int x, int y, char category) {
    location = std::make_tuple(x, y);
    this->category = category;
}

std::tuple<int, int> Spot::getLoc() {
    return location;
}

char Spot::getCategory() {
    return category;
}

void Spot::setLoc(int x, int y) {
    location = std::make_tuple(x, y);
}

void Spot::setCategory(char category) {
    this->category = category;
}
#endif
