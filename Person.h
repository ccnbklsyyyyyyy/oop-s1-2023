#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    static int nextId;
    int id;
    std::string name;

public:
    Person(std::string name);
    int getId() const;
};

#endif 

