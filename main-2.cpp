#include "GameEntity.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

int main() {
    Ship ship(1, 2);
    Mine mine(5, 6);
    Explosion explosion(7, 8);

    ship.move(2, 3);
    mine.explode();
    explosion.apply(ship);

    return 0;
}
