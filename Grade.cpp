#include "Grade.h"

Grade::Grade(int studentId, int courseId, std::string assignment, int value)
    : studentId(studentId), courseId(courseId), assignment(assignment), value(value) {}
