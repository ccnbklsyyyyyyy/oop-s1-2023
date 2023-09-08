#include "Airplane.h"

Airplane::Airplane() : numPassengers(0) {
    // Default constructor does nothing
}

Airplane::Airplane(int w, int p) : AirVehicle(w), numPassengers(p) {
    // Constructor with weight and passengers
}

int Airplane::get_numPassengers() {
    return numPassengers;
}

void Airplane::reducePassengers(int x) {
    if (numPassengers - x < 0) {
        numPassengers = 0;
    } else {
        numPassengers -= x;
    }
}

void Airplane::fly(int headwind, int minutes) {
    if (fuel < 20.0) {
        return;  // Airplane won't take off with less than 20% fuel
    }

    float fuelUsage = 0.25 * minutes;

    if (headwind >= 60) {
        fuelUsage += 0.5 * minutes;
    }

    fuelUsage += 0.001 * numPassengers * minutes;

    fuel -= fuelUsage;
    if (fuel < 0.0) {
        fuel = 0.0;
    }

    AirVehicle::fly(headwind, minutes);  // Call the base class fly method
}


