#ifndef PERSONA_H
#define PERSONA_H

#include "Spot.h"

class Persona : public Spot {
public:
    Persona(int x, int y);
    void shift(int dx, int dy);
};

Persona::Persona(int x, int y) : Spot(x, y, 'P') {}

void Persona::shift(int dx, int dy) {
    std::tuple<int, int> loc = getLoc();
    int x = std::get<0>(loc) + dx;
    int y = std::get<1>(loc) + dy;
    setLoc(x, y);
}

#endif

