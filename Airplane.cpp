#include "Airplane.h"

Airplane::Airplane() : AirVehicle(), numPassengers(0) {}

Airplane::Airplane(int w, int p) : AirVehicle(w), numPassengers(p) {}

void Airplane::fly(int headwind, int minutes) {
    float fuelConsumptionRate = 0.25;

    if (headwind >= 60) {
        fuelConsumptionRate = 0.5;
    }

    float passengerFuelConsumption = 0.001 * numPassengers * minutes;
    float totalFuelConsumed = fuelConsumptionRate * minutes + passengerFuelConsumption;

    if (fuel - totalFuelConsumed >= 20.0) {
        fuel -= totalFuelConsumed;
        numberOfFlights++;
    } else {
        std::cout << "Insufficient fuel to complete the flight." << std::endl;
    }

    AirVehicle::fly(headwind, minutes);
}

int Airplane::get_numPassengers() const {
    return numPassengers;
}

void Airplane::reducePassengers(int x) {
    if (x >= 0) {
        numPassengers -= x;
        if (numPassengers < 0) {
            numPassengers = 0;
        }
    }
}
