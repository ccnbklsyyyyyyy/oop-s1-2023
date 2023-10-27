#ifndef SNARE_H
#define SNARE_H

#include "Spot.h"
#include "Influence.h"

class Snare : public Spot, public Influence {
public:
    Snare(int x, int y);
    bool isOperative();
    void implement(Spot& spot) override;

private:
    bool operative;
};

#endif
