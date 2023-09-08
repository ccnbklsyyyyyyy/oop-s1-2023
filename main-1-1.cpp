#include "AirVehicle.h"

int main() {
    // Test the AirVehicle class
    AirVehicle vehicle1;
    AirVehicle vehicle2(2000);

    vehicle1.refuel();
    vehicle2.fly(20, 30);

    int weight1 = vehicle1.get_weight();
    float fuel2 = vehicle2.get_fuel();
    int flights1 = vehicle1.get_numberOfFlights();
    return 0;
}
