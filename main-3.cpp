#include <iostream>
#include "Play.h"

int main() {
    Play game;
    game.initPlay(2, 2, 5, 5);
    game.playCycle(10, 2.0);
    return 0;
}
