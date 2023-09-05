#include "TV.h"

TV::TV() : screenInches(0.0) {}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenInches(screenSize) {}

void TV::setScreenSize(double screenSize) {
    screenInches = screenSize;
}

double TV::getScreenSize() const {
    return screenInches;
}

double TV::getPowerConsumption() const {
    return powerRating * (screenInches / 10);
}