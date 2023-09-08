#include "Helicopter.h"

Helicopter::Helicopter(int w, std::string n) : AirVehicle(w) {
    name = n;
}

std::string Helicopter::get_name() {
    return name;
}

void Helicopter::fly(int headwind, int minutes) {
    if (fuel < 20.0) {
        return;  // Helicopter won't take off with less than 20% fuel
    }

    float fuelUsage = 0.18 * minutes;

    if (headwind >= 40) {
        fuelUsage += 0.4 * minutes;
    }

    int weightDifference = get_weight() - 5670;
    if (weightDifference > 0) {
        fuelUsage += 0.01 * weightDifference * minutes;
    }

    fuel -= fuelUsage;
    if (fuel < 0.0) {
        fuel = 0.0;
    }

    AirVehicle::fly(headwind, minutes);  // Call the base class fly method
}
