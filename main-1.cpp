#include "Utils.h"
#include <iostream>

int main() {
    std::tuple<int, int> pos1 = Utils::generateRandomPos(10, 10);
    std::tuple<int, int> pos2 = Utils::generateRandomPos(10, 10);
    double distance = Utils::calculateDistance(pos1, pos2);

    std::cout << "Random Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Random Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";
    std::cout << "Distance between positions: " << distance << std::endl;

    return 0;
}
