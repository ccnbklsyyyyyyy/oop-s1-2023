#include "Gradebook.h"
#include "Grade.h"

void Gradebook::addGrade(int studentId, int courseId, std::string assignment, int value) {
    Grade grade(studentId, courseId, assignment, value);
    
}
