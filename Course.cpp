#include "Course.h"

Course::Course(){}
Course::~Course(){}

// getters
int Course::getLevel()
{
  return level;
}
int Course::getCredits()
{
  return credits;
}
string Course::getTeacher()
{
  return teacher;
}
string Course::getName()
{
  return name;
}

// setters
void Course::setLevel(int l)
{
  level = l;
}
void Course::setCredits(int c)
{
  credits = c;
}
void Course::setTeacher(string t)
{
  teacher = t;
}
void Course::setName(string n)
{
  name = n;
}
