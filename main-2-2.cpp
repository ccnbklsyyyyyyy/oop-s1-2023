#include "TV.h"
#include <iostream>

int main() {
    TV tv1;
    TV tv2(150, 42);

    tv1.turnOn();
    tv1.setScreenSize(32);
    std::cout << "TV 1 is on: " << tv1.isOn << std::endl;
    std::cout << "TV 1 screen size: " << tv1.getScreenSize() << " inches" << std::endl;
    std::cout << "TV 1 power consumption: " << tv1.getPowerConsumption() << " watts" << std::endl;

    tv2.turnOff();
    tv2.setScreenSize(55);
    std::cout << "TV 2 is on: " << tv2.isOn << std::endl;
    std::cout << "TV 2 screen size: " << tv2.getScreenSize() << " inches" << std::endl;
    std::cout << "TV 2 power consumption: " << tv2.getPowerConsumption() << " watts" << std::endl;

    return 0;
}