#ifndef GRADE_H
#define GRADE_H

#include <string>

class Grade {
private:
    int studentId;
    int courseId;
    std::string assignment;
    int value;

public:
    Grade(int studentId, int courseId, std::string assignment, int value);
};

#endif 

