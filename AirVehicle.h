#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle {
public:
    AirVehicle();
    AirVehicle(int w);
    void refuel();
    virtual void fly(int headwind, int minutes);
    int get_weight() const;
    float get_fuel() const;
    int get_numberOfFlights() const;
    void set_weight(int w);

private:
    int weight;
    float fuel;
    int numberOfFlights;
};

#endif // AIRVEHICLE_H
