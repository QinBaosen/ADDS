#include "Player.h"
#include "Crescendo.h"
#include <string>
#include <iostream>
using namespace std;

Crescendo::Crescendo() : Player("Crescendo") {
    ctrl = 0; //default
}

void Crescendo::controll(int newCtrl)
{
    ctrl = newCtrl;
}

string Crescendo::performMove()
{
    // Crescendo moves in the following order: Paper, Scissors, Rock.
    if (ctrl == 0)
    {
        return "Paper";
    }
    else if (ctrl == 1)
    {
        return "Scissors";
    }
    else if (ctrl == 2)
    {
        return "Rock";
    }
    return 0;
}

Crescendo::~Crescendo() {

}