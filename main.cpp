#include "University.h"
#include "Course.h"
#include "Student.h"
#include "Instructor.h"
#include "Gradebook.h"

int main() {
    University myUniversity("My University", "Somewhere");

    myUniversity.addCourse(1, "Computer Science");

    Course* computerScienceCourse = myUniversity.getCourseById(1);
    if (computerScienceCourse) {
        Student student("John Doe");
        computerScienceCourse->addPerson(&student);

        Gradebook gradebook;
        gradebook.addGrade(student.getId(), computerScienceCourse->getId(), "Assignment 1", 90);
    }

    return 0;
}
