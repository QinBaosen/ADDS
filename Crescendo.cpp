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

char Crescendo::performMove()
{
    // Crescendo moves in the following order: Paper, Scissors, Rock.
    if (ctrl == 0)
    {
        return 'P';
    }
    else if (ctrl == 1)
    {
        return 'S';
    }
    else if (ctrl == 2)
    {
        return 'R';
    }
    return 0;
}

Crescendo::~Crescendo() {

}