#include "Fridge.h"

Fridge::Fridge() : Appliance(), fridgeVolume(0.0) {}

Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), fridgeVolume(volume) {}

double Fridge::getPowerConsumption() {
    return getPowerRating() * 24 * (fridgeVolume / 100);
}

double Fridge::getVolume() const {
    return fridgeVolume;
}

void Fridge::setVolume(double volume) {
    fridgeVolume = volume;
}
