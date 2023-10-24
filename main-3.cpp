#include "Game.h"

int main() {
    Game game;
    std::vector<GameEntity*> entities = game.initGame(5, 3, 10, 10);
    game.set_entities(entities);
    game.gameLoop(100, 2.0);

    // Don't forget to clean up memory by deleting entities when done.

    return 0;
}
