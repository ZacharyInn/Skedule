#include <iostream>
using namespace std;

class Break
{
  public:
    Break();
    ~Break();
    int getLength();
    int getTime();
    int getNumBreaks();
  private:
    int length;
    int time;
    int numBreaks;
};
