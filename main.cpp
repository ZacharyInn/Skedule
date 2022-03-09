#include "Course.h"

int main(int argc, char **argv)
{
    Course *course = new Course();
    course->setTeacher("Zach");
    course->setName("Math");
    course->setLevel(210);
    course->setCredits(3);

    cout << "Teacher: " << course->getTeacher() << endl;
    cout << "Class: " << course->getName() << " " << course->getLevel() << endl;
    cout << "Credits: " << course->getCredits() << endl;

    delete course;
    return 0;
}
