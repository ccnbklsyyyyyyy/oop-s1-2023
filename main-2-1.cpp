#include "Helicopter.h"

int main() {
    // Test the Helicopter class
    Helicopter helicopter(5000, "RedHawk");

    helicopter.refuel();
    helicopter.fly(40, 45);

    std::string name = helicopter.get_name();
    int flights = helicopter.get_numberOfFlights();
    float fuel = helicopter.get_fuel();

    // Output and test results
    // Ensure that the output matches your expectations
    return 0;
}
