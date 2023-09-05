#include "Fridge.h"

Fridge::Fridge() : fridgeVolume(0.0) {}

Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), fridgeVolume(volume) {}

void Fridge::setVolume(double volume) {
    fridgeVolume = volume;
}

double Fridge::getVolume() const {
    return fridgeVolume;
}

double Fridge::getPowerConsumption() const {
    return powerRating * 24 * (fridgeVolume / 100);
}