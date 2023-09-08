#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirVehicle.h"
#include "Helicopter.h"
#include "Airplane.h"

class AirFleet {
public:
    AirFleet();
    ~AirFleet(); // Destructor to clean up memory
    AirVehicle** get_fleet() const;

private:
    AirVehicle** fleet;
};

#endif // AIRFLEET_H
