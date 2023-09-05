#include "House.h"

House::House() : numAppliances(0), currentApplianceCount(0), appliances(nullptr) {}

House::House(int numAppliances) : numAppliances(numAppliances), currentApplianceCount(0) {
    appliances = new Appliance*[numAppliances];
}

House::~House() {
    for (int i = 0; i < currentApplianceCount; ++i) {
        delete appliances[i];
    }
    delete[] appliances;
}

bool House::addAppliance(Appliance* appliance) {
    if (currentApplianceCount < numAppliances) {
        appliances[currentApplianceCount++] = appliance;
        return true;
    }
    return false;
}

double House::getTotalPowerConsumption() const {
    double totalConsumption = 0.0;
    for (int i = 0; i < currentApplianceCount; ++i) {
        totalConsumption += appliances[i]->getPowerConsumption();
    }
    return totalConsumption;
}