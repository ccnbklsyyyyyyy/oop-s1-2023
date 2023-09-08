#include "AirVehicle.h"

AirVehicle::AirVehicle() : weight(0), fuel(100.0), numberOfFlights(0) {}

AirVehicle::AirVehicle(int w) : weight(w), fuel(100.0), numberOfFlights(0) {}

void AirVehicle::refuel() {
    fuel = 100.0;
}

void AirVehicle::fly(int headwind, int minutes) {
    numberOfFlights++;
    // Calculate fuel consumption based on headwind, weight, and time
    // Update fuel and other attributes accordingly
}

int AirVehicle::get_weight() const {
    return weight;
}

float AirVehicle::get_fuel() const {
    return fuel;
}

int AirVehicle::get_numberOfFlights() const {
    return numberOfFlights;
}

void AirVehicle::set_weight(int w) {
    weight = w;
}
