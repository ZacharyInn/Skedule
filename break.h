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
    void setLength(int l);
    void setTime(int t);
    void setNumBreaks(int n);
  private:
    int length;
    int time;
    int numBreaks;
};
