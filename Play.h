#ifndef PLAY_H
#define PLAY_H

#include <vector>
#include <iostream>
#include "Spot.h"
#include "Snare.h"
#include "Persona.h"
#include "Assists.h"

class Play {
private:
    std::vector<Spot*> matrix;

public:
    Play() {}
    std::vector<Spot*>& getMatrix() {
        return matrix;
    }
    void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight) {
        matrix.clear();

        for (int i = 0; i < numPersonas; i++) {
            std::tuple<int, int> loc = Assists::createRandomLoc(matrixWidth, matrixHeight);
            matrix.push_back(new Persona(std::get<0>(loc), std::get<1>(loc)));
        }

        for (int i = 0; i < numSnares; i++) {
            std::tuple<int, int> loc = Assists::createRandomLoc(matrixWidth, matrixHeight);
            matrix.push_back(new Snare(std::get<0>(loc), std::get<1>(loc)));
        }
    }
    void playCycle(int maxCycles, double snareTriggerDistance) {
        int matrixWidth = Assists::getMatrixWidth(matrix);
        int matrixHeight = Assists::getMatrixHeight(matrix);

        for (int cycle = 1; cycle <= maxCycles; cycle++) {
            for (Spot* spot : matrix) {
                if (dynamic_cast<Persona*>(spot) != nullptr) {
                    Persona* persona = dynamic_cast<Persona*>(spot);
                    persona->shift(1, 0);
                } else if (dynamic_cast<Snare*>(spot) != nullptr) {
                    Snare* snare = dynamic_cast<Snare*>(spot);
                    if (snare->isOperative()) {
                        std::tuple<int, int> snareLoc = snare->getLoc();

                        for (Spot* otherSpot : matrix) {
                            if (otherSpot != spot) {
                                std::tuple<int, int> otherLoc = otherSpot->getLoc();
                                double distance = Assists::evaluateDistance(snareLoc, otherLoc);

                                if (distance <= snareTriggerDistance) {
                                    snare->implement(*otherSpot);
                                }
                            }
                        }
                    }
                }

                std::tuple<int, int> loc = spot->getLoc();
                int x = std::get<0>(loc);
                int y = std::get<1>(loc);

                if (x < 0 || x >= matrixWidth || y < 0 || y >= matrixHeight) {
                    std::cout << "Persona has won the game!" << std::endl;
                    return;
                }
            }
        }

        std::cout << "Maximum number of cycles reached. Game over." << std::endl;
    }
};

#endif

