#include <iostream>
#include "Snare.h"
#include "Persona.h"

int main() {
    Snare snare(1, 1);
    std::cout << "Snare Category: " << snare.getCategory() << ", Operative: " << snare.isOperative() << std::endl;

    Persona persona(2, 2);
    std::cout << "Persona Category: " << persona.getCategory() << std::endl;
    persona.shift(1, 1);
    std::tuple<int, int> loc = persona.getLoc();
    std::cout << "Persona New Location: (" << std::get<0>(loc) << ", " << std::get<1>(loc) << ")" << std::endl;

    return 0;
}
