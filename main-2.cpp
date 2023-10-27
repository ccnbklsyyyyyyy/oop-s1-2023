#include <iostream>
#include "Snare.h"
#include "Persona.h"

int main() {
    Snare snare(1, 1);
    std::cout << "Snare Category: " << snare.getCategory() << ", Operative: " << snare.isOperative() << std::endl;

    Persona persona(2, 2);
    std::cout << "Persona Category: " << persona.getCategory() << std::endl;
    persona.shift(1, 1);
    std::cout << "Persona New Location: (" << persona.getLoc().first << ", " << persona.getLoc().second << ")" << std::endl;

    return 0;
}
