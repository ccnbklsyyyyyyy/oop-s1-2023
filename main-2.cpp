#include <iostream>
#include "Snare.h"
#include "Persona.h"

int main() {
    Snare snare(2, 3);
    std::cout << "Snare Location: (" << std::get<0>(snare.getLoc()) << ", " << std::get<1>(snare.getLoc()) << ")" << std::endl;
    std::cout << "Snare Operative: " << snare.isOperative() << std::endl;

    Persona persona(1, 1);
    persona.shift(2, 2);
    std::cout << "Persona Location after shift: (" << std::get<0>(persona.getLoc()) << ", " << std::get<1>(persona.getLoc()) << ")" << std::endl;

    return 0;
}
