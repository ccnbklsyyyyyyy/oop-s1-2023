#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
public:
    Appliance();
    Appliance(int powerRating);
    bool isOn;
    void turnOn();
    void turnOff();
    double getPowerConsumption() const;

private:
    int powerRating;
};

#endif