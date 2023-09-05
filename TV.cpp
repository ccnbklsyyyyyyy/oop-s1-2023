#include "TV.h"

TV::TV() : Appliance(), screenInches(0.0) {}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenInches(screenSize) {}

double TV::getPowerConsumption() {
    return getPowerRating() * (screenInches / 10);
}

double TV::getScreenSize() const {
    return screenInches;
}

void TV::setScreenSize(double screenSize) {
    screenInches = screenSize;
}
