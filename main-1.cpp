#include "Spot.h"
#include "Influence.h"
#include <iostream>
#include <vector>
#include <tuple>
#include "Assists.h"

int main() {
    // Test Spot class
    Spot s1(1, 2, 'P');
    std::cout << "Spot location: " << std::get<0>(s1.getLoc()) << ", " << std::get<1>(s1.getLoc()) << std::endl;
    s1.setCategory('S');
    std::cout << "Spot category after setCategory: " << s1.getCategory() << std::endl;

    // Test Influence class
    class DummyInfluence : public Influence {
    public:
        void implement(Spot& spot) {
            std::cout << "Implementing influence on spot at (" << std::get<0>(spot.getLoc()) << ", " << std::get<1>(spot.getLoc()) << ")" << std::endl;
        }
    };
    DummyInfluence dummyInfluence;

    // Test Assists functions
    std::tuple<int, int> randomLoc = assists::createRandomLoc(10, 10);
    std::cout << "Random location: (" << std::get<0>(randomLoc) << ", " << std::get<1>(randomLoc) << ")" << std::endl;
    double distance = assists::evaluateDistance(randomLoc, randomLoc);
    std::cout << "Distance to self: " << distance << std::endl;

    return 0;
}
