#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirVehicle.h"

class Airplane : public AirVehicle {
public:
    Airplane();
    Airplane(int w, int p);
    void fly(int headwind, int minutes) override;
    int get_numPassengers() const;
    void reducePassengers(int x);

private:
    int numPassengers;
};

#endif // AIRPLANE_H
