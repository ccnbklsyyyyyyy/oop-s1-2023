#ifndef GAME_H
#define GAME_H

#include "GameEntity.h"
#include "Effect.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include <vector>

class Game {
public:
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight);
    void gameLoop(int maxIterations, double mineDistanceThreshold);
    std::vector<GameEntity*> get_entities();
    void set_entities(std::vector<GameEntity*> newEntities);

private:
    std::vector<GameEntity*> entities;
};

#endif
