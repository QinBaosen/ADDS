#include "RandomComputer.h"
#include <iostream>
#include "Player.h"
#include <cstdlib>
using namespace std;

RandomComputer::RandomComputer() : Player("RandomComputer"){

}

void RandomComputer::addAnswer(string c)
{
    userAnswers.push_back(c);
}

string RandomComputer::performMove()
{
    // random number between 1 and 3
    int number = rand() % 3 + 1;
    if (number == 1) {
        return "Rock";
    } else if (number == 2) {
        return "Paper";
    } else if (number == 3){
        return "Scissors";
    }
}

RandomComputer::~RandomComputer(){

}
