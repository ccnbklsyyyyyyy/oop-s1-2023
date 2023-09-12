#include "Person.h"

int Person::nextId = 1;

Person::Person(std::string name) : id(nextId++), name(name) {}

int Person::getId() const {
    return id;
}
