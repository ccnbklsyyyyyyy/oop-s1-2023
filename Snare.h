#ifndef SNARE_H
#define SNARE_H

#include "Spot.h"

class Snare : public Spot, public Influence {
public:
    Snare(int x, int y);
    void implement(Spot& spot);
    bool isOperative() const;
    void deactivate();

private:
    bool operative;
};

#endif
