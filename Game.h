#ifndef GAME_H
#define GAME_H

#include "GameEntity.h"
#include <vector>

class Game {
public:
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight);
    void gameLoop(int maxIterations, double mineDistanceThreshold);
    std::vector<GameEntity*> get_entities();
    void set_entities(std::vector<GameEntity*> entities);

private:
    std::vector<GameEntity*> entities;
};

#endif // GAME_H
