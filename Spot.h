#ifndef SPOT_H
#define SPOT_H

#include <tuple>

class Spot {
public:
    Spot(int x, int y, char category);
    std::tuple<int, int> getLoc();
    char getCategory();
    void setLoc(int x, int y);
    void setCategory(char category);

private:
    std::tuple<int, int> location;
    char category;
};

#endif
