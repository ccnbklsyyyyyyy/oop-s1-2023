#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle {
public:
    AirVehicle();
    AirVehicle(int w);
    int get_weight();
    float get_fuel();
    int get_numberOfFlights();
    void refuel();
    virtual void fly(int headwind, int minutes);

private:
    int weight;
    float fuel;
    int numberOfFlights;
};

#endif
