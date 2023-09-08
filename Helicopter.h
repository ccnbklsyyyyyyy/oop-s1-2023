#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirVehicle.h"
#include <string>

class Helicopter : public AirVehicle {
public:
    Helicopter(int w, std::string n);
    void fly(int headwind, int minutes) override;
    std::string get_name() const;
    void set_name(std::string n);

private:
    std::string name;
};

#endif // HELICOPTER_H
