#include <iostream>
using namespace std;

class Course
{
  public:
    Course();
    ~Course();
    int getLevel();
    int getCredits();
    string getName();
    string getTeacher();
    void setLevel(int l);
    void setCredits(int c);
    void setName(string n);
    void setTeacher(string t);
  private:
    int level;
    int credits;
    string name;
    string teacher;
};
