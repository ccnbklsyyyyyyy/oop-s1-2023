#include "University.h"

University::University(std::string name, std::string location) : name(name), location(location) {}

void University::addCourse(int id, std::string name) {
    courses.emplace_back(id, name);
}

Course* University::getCourseById(int id) {
    for (auto& course : courses) {
        if (course.getId() == id) {
            return &course;
        }
    }
    return nullptr;
}
