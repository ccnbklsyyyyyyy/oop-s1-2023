#include "Helicopter.h"

Helicopter::Helicopter(int w, std::string n) : AirVehicle(w), name(n) {}

void Helicopter::fly(int headwind, int minutes) {

}

std::string Helicopter::get_name() const {
    return name;
}

void Helicopter::set_name(std::string n) {
    name = n;
}
