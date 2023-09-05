#include "Fridge.h"
#include <iostream>

int main() {
    Fridge fridge1;
    Fridge fridge2(200, 300);

    fridge1.turnOn();
    fridge1.setVolume(150);
    std::cout << "Fridge 1 is on: " << fridge1.isOn << std::endl;
    std::cout << "Fridge 1 volume: " << fridge1.getVolume() << " liters" << std::endl;
    std::cout << "Fridge 1 power consumption: " << fridge1.getPowerConsumption() << " watts" << std::endl;

    fridge2.turnOff();
    fridge2.setVolume(250);
    std::cout << "Fridge 2 is on: " << fridge2.isOn << std::endl;
    std::cout << "Fridge 2 volume: " << fridge2.getVolume() << " liters" << std::endl;
    std::cout << "Fridge 2 power consumption: " << fridge2.getPowerConsumption() << " watts" << std::endl;

    return 0;
}