#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "Person.h"

class Course {
private:
    int id;
    std::string name;
    std::vector<Person*> persons;

public:
    Course(int id, std::string name);
    int getId() const;
    void addPerson(Person* person);
};

#endif 

