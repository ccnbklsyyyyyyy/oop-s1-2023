#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirVehicle.h"
#include "Helicopter.h"
#include "Airplane.h"

class AirFleet {
public:
    AirFleet();
    AirVehicle** get_fleet();

private:
    AirVehicle* fleet[5];
};

#endif
