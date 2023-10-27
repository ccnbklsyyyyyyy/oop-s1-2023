#include "Play.h"
#include "Snare.h"
#include "Persona.h"
#include <iostream>
#include <vector>
#include <tuple>
#include "Assists.h"

int main() {
    // Create a Play object and initialize it
    Play play;
    play.initPlay(2, 1, 10, 10);

    // Add Persona and Snare objects to the matrix
    for (auto& spot : play.getMatrix()) {
        if (std::get<0>(spot->getLoc()) == 0 && std::get<1>(spot->getLoc()) == 0) {
            Snare* snare = new Snare(0, 0);
            spot = snare;
        } else if (std::get<0>(spot->getLoc()) == 0 && std::get<1>(spot->getLoc()) == 1) {
            Persona* persona = new Persona(0, 1);
            spot = persona;
        }
    }

    // Run the game for 10 cycles
    play.playCycle(10, 2);

    return 0;
}
