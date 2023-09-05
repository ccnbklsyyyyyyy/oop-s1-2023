#include "House.h"

House::House() : numAppliances(0), currentApplianceCount(0), appliances(nullptr) {}

House::House(int numAppliances) : numAppliances(numAppliances), currentApplianceCount(0), appliances(nullptr) {}

bool House::addAppliance(Appliance* appliance) {
    if (currentApplianceCount < numAppliances) {
        appliances[currentApplianceCount++] = appliance;
        return true;
    }
    return false;
}

double House::getTotalPowerConsumption() {
    double totalPower = 0.0;
    for (int i = 0; i < currentApplianceCount; ++i) {
        totalPower += appliances[i]->getPowerConsumption();
    }
    return totalPower;
}
