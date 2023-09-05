#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"
#include <iostream>

int main() {
    House house(3);

    Appliance* appliance1 = new Appliance(100);
    Fridge* fridge1 = new Fridge(200, 300);
    TV* tv1 = new TV(150, 42);

    house.addAppliance(appliance1);
    house.addAppliance(fridge1);
    house.addAppliance(tv1);

    double totalConsumption = house.getTotalPowerConsumption();

    std::cout << "Total power consumption of the house: " << totalConsumption << " watts" << std::endl;

    delete appliance1;
    delete fridge1;
    delete tv1;

    return 0;
}