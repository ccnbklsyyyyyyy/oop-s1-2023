#include "AirVehicle.h"

AirVehicle::AirVehicle() {
    // Default constructor does nothing
}

AirVehicle::AirVehicle(int w) {
    weight = w;
    fuel = 100.0;
    numberOfFlights = 0;
}

int AirVehicle::get_weight() {
    return weight;
}

float AirVehicle::get_fuel() {
    return fuel;
}

int AirVehicle::get_numberOfFlights() {
    return numberOfFlights;
}

void AirVehicle::refuel() {
    fuel = 100.0;
}

void AirVehicle::fly(int headwind, int minutes) {
    numberOfFlights++;
}

