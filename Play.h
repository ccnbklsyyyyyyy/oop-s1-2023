#ifndef PLAY_H
#define PLAY_H

#include "Spot.h"
#include <vector>

class Play {
public:
    Play();
    void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight);
    void playCycle(int maxCycles, double snareTriggerDistance);

private:
    std::vector<Spot*> matrix;
    std::vector<Spot*>& getMatrix();
};

#endif // PLAY_H
