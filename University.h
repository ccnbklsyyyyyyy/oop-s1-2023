#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include <vector>
#include "Course.h"

class University {
private:
    std::string name;
    std::string location;
    std::vector<Course> courses;

public:
    University(std::string name, std::string location);
    void addCourse(int id, std::string name);
    Course* getCourseById(int id);
};

#endif // UNIVERSITY_H
