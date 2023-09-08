#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirVehicle.h"

class Airplane : public AirVehicle {
public:
    Airplane();
    Airplane(int w, int p);
    int get_numPassengers();
    void reducePassengers(int x);
    void fly(int headwind, int minutes) override;

private:
    int numPassengers;
};

#endif
