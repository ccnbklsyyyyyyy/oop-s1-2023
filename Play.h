#ifndef PLAY_H
#define PLAY_H

#include <vector>
#include "Spot.h"

class Play {
public:
    Play();
    void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight);
    void playCycle(int maxCycles, double snareTriggerDistance);
    const std::vector<Spot*>& getMatrix() const;

private:
    std::vector<Spot*> matrix;
};

#endif
