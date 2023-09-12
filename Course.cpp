#include "Course.h"

Course::Course(int id, std::string name) : id(id), name(name) {}

int Course::getId() const {
    return id;
}

void Course::addPerson(Person* person) {
    persons.push_back(person);
}
