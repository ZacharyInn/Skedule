#include "algorithm.h"

Algorithm::Algorithm(){
    int score;
}

~Algorithm::Algorithm(){}

int Algorithm::updateScore(){
    string userInput = getInput();
    // decrement score by 2 if too long
    if(userInput.compare("long")){
        score -= 2;
    }
    // decrement score if too short of a break
    else if(userInput.compare("short")){
        score += 2;
    }
    // if perfect keep score same
}

string Algorithm::getInput(){
    string input;
    cout << "How was this study break for you?" << endl;
    cout << "Too long, too short, perfect?" << endl;
    cin >> input;
    return input;
}