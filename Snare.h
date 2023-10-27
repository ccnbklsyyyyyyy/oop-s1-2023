#ifndef SNARE_H
#define SNARE_H

#include "Spot.h"
#include "Influence.h"

class Snare : public Spot, public Influence {
private:
    bool operative;

public:
    Snare(int x, int y);
    bool isOperative();
    void implement(Spot& spot);
};

Snare::Snare(int x, int y) : Spot(x, y, 'S'), operative(true) {}

bool Snare::isOperative() {
    return operative;
}

void Snare::implement(Spot& spot) {
    setCategory('S');
    operative = false;
}

#endif

