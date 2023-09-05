#include "Appliance.h"
#include <iostream>

int main() {
    Appliance appliance1;
    Appliance appliance2(100);

    appliance1.turnOn();
    std::cout << "Appliance 1 is on: " << appliance1.isOn << std::endl;
    std::cout << "Appliance 1 power consumption: " << appliance1.getPowerConsumption() << std::endl;

    appliance2.turnOff();
    std::cout << "Appliance 2 is on: " << appliance2.isOn << std::endl;
    std::cout << "Appliance 2 power consumption: " << appliance2.getPowerConsumption() << std::endl;

    return 0;
}