#include "Helicopter.h"

Helicopter::Helicopter(int w, std::string n) : AirVehicle(w), name(n) {}

void Helicopter::fly(int headwind, int minutes) {
    // Calculate fuel consumption based on helicopter-specific logic
    // Update fuel and other attributes accordingly
    // Don't forget to call the base class's fly method
}

std::string Helicopter::get_name() const {
    return name;
}

void Helicopter::set_name(std::string n) {
    name = n;
}
