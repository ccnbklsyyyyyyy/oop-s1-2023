#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>

class Gradebook {
public:
    void addGrade(int studentId, int courseId, std::string assignment, int value);
};

#endif 

