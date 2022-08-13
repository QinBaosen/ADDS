#include "RandomComputer.h"
#include <iostream>
#include "Player.h"
#include <cstdlib>
using namespace std;

RandomComputer::RandomComputer() : Player("RandomComputer"){

}

void RandomComputer::addAnswer(char c)
{
    userAnswers.push_back(c);
}

char RandomComputer::performMove()
{
    // random number between 1 and 3
    int number = rand() % 3 + 1;
    if (number == 1) {
        return 'R';
    } else if (number == 2) {
        return 'P';
    } else if (number == 3){
        return 'S';
    }
}

RandomComputer::~RandomComputer(){

}
