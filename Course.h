#include <iostream>
using namespace std;

class Course
{
  public:
    Course();                         // constructor
    ~Course();                        // destructor
    int getLevel();                   // getters
    int getCredits();
    string getName();
    string getTeacher();
    void setLevel(int l);             // setters
    void setCredits(int c);
    void setName(string n);
    void setTeacher(string t);
  private:
    int level;
    int credits;
    string name;
    string teacher;
};
