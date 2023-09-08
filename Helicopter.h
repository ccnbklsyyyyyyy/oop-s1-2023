#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <string>
#include "AirVehicle.h"

class Helicopter : public AirVehicle {
public:
    Helicopter(int w, std::string n);
    std::string get_name();
    void fly(int headwind, int minutes) override;

private:
    std::string name;
};

#endif
