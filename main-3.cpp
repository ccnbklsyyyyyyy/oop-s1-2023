#include "Game.h"
#include <iostream>

int main() {
    Game game;
    std::vector<GameEntity*> entities = game.initGame(2, 3, 10, 10);
    game.set_entities(entities);

    game.gameLoop(10, 2.0);

    std::vector<GameEntity*> remainingEntities = game.get_entities();
    std::cout << "Remaining Entities:\n";
    for (const auto& entity : remainingEntities) {
        std::cout << "Type: " << entity->getType() << ", Position: (" << std::get<0>(entity->getPos()) << ", " << std::get<1>(entity->getPos()) << ")\n";
    }

    // Clean up allocated memory
    for (const auto& entity : remainingEntities) {
        delete entity;
    }

    return 0;
}
