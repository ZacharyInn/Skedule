#include<iostream>
using namespace std;

class Algorithm{
    public:
        Algorithm();
        ~Algorithm();
        int updateScore();
        string getInput();
    private:
        int score;
}