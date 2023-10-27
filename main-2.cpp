#include <iostream>
#include "Snare.h"
#include "Persona.h"

int main() {
    Snare snare(0, 0);
    
    bool operative = snare.isOperative();
    std::cout << "Operative: " << operative << std::endl;
    
    snare.implement(snare);
    operative = snare.isOperative();
    std::cout << "Operative after implementation: " << operative << std::endl;
    
    Persona persona(1, 1);
    
    persona.shift(1, 0);
    std::tuple<int, int> loc = persona.getLoc();
    std::cout << "New location: (" << std::get<0>(loc) << ", " << std::get<1>(loc) << ")" << std::endl;
    
    return 0;
}

