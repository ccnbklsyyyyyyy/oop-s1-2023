#include "Airplane.h"

int main() {
    // Test the Airplane class
    Airplane plane(10000, 50);

    plane.refuel();
    plane.fly(60, 120);

    int passengers = plane.get_numPassengers();
    int flights = plane.get_numberOfFlights();
    float fuel = plane.get_fuel();

    return 0;
}
