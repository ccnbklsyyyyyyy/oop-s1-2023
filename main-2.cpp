#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include <iostream>

int main() {
    Ship ship(1, 1);
    Mine mine(2, 2);

    std::cout << "Initial Ship Position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";
    ship.move(1, 1);
    std::cout << "New Ship Position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";

    std::cout << "Mine Position: (" << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << ")\n";
    Explosion explosion = mine.explode();
    std::cout << "Mine Exploded. New Mine Position: (" << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << ")\n";

    std::cout << "Applying Explosion Effect on Ship...\n";
    explosion.apply(ship);
    std::cout << "Ship Position after Explosion: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";

    return 0;
}
