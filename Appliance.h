#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
protected:
    int powerRating;
    bool isOn;

public:
    Appliance();
    Appliance(int powerRating);
    bool getIsOn() const;
    void turnOn();
    void turnOff();
    int getPowerRating() const;
    void setPowerRating(int powerRating);
    virtual double getPowerConsumption();
};

#endif
