#include <iostream>
#include "Play.h"

int main() {
    Play play;
    play.initPlay(5, 3, 10, 10);
    play.playCycle(100, 2.0);
    
    return 0;
}

