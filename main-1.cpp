#include <iostream>
#include "Spot.h"
#include "Influence.h"
#include "Assists.h"

int main() {
    Spot spot(0, 0, 'A');
    
    std::tuple<int, int> loc = spot.getLoc();
    std::cout << "Location: (" << std::get<0>(loc) << ", " << std::get<1>(loc) << ")" << std::endl;
    
    char category = spot.getCategory();
    std::cout << "Category: " << category << std::endl;
    
    spot.setLoc(1, 2);
    loc = spot.getLoc();
    std::cout << "New location: (" << std::get<0>(loc) << ", " << std::get<1>(loc) << ")" << std::endl;
    
    spot.setCategory('B');
    category = spot.getCategory();
    std::cout << "New category: " << category << std::endl;
    
    Influence* influence = nullptr; // Cannot create an instance of abstract class
    return 0;
}

