#ifndef INFLUENCE_H
#define INFLUENCE_H

#include <tuple>

class Influence {
public:
    virtual void implement(Spot& spot) = 0;
};

#endif
