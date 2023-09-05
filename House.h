#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House {
public:
    House();
    House(int numAppliances);
    ~House(); // Destructor to deallocate appliance objects
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption() const;

private:
    Appliance** appliances;
    int numAppliances;
    int currentApplianceCount;
};

#endif