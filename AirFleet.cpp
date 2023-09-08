#include "AirFleet.h"

AirFleet::AirFleet() {
    fleet = new AirVehicle*[5];
    // Create and add Airplane, Helicopter, and AirVehicle objects to the fleet array
    fleet[0] = new Airplane(20, 10);
    fleet[1] = new Helicopter(10000, "BlackHawk");
    fleet[2] = new AirVehicle(5000);
    fleet[3] = new Helicopter(100, "WhiteHawk");
    fleet[4] = new Airplane(15, 20);
}

AirFleet::~AirFleet() {
    for (int i = 0; i < 5; i++) {
        delete fleet[i];
    }
    delete[] fleet;
}

AirVehicle** AirFleet::get_fleet() const {
    return fleet;
}
