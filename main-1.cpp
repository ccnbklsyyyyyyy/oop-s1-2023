#include <iostream>
#include "Spot.h"
#include "Influence.h"
#include "Assists.h"

int main() {
    Spot spot(1, 1, 'A');
    std::tuple<int, int> loc = spot.getLoc();
    char category = spot.getCategory();
    std::cout << "Location: (" << std::get<0>(loc) << ", " << std::get<1>(loc) << "), Category: " << category << std::endl;

    std::tuple<int, int> randomLoc = Assists::createRandomLoc(5, 5);
    std::cout << "Random Location: (" << std::get<0>(randomLoc) << ", " << std::get<1>(randomLoc) << ")" << std::endl;

    double distance = Assists::evaluateDistance(std::make_tuple(1, 1), std::make_tuple(3, 4));
    std::cout << "Distance: " << distance << std::endl;

    return 0;
}
