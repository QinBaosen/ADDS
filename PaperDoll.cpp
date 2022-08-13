#include "Player.h"
#include "PaperDoll.h"
#include <string>
#include <iostream>
using namespace std;

PaperDoll::PaperDoll() : Player("PaperDoll") {
    ctrl = 0;
}

void PaperDoll::controll(int newCtr)
{
    ctrl = newCtrl;
}

string PaperDoll::performMove()
{
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
    return "Scissors";
    }
    
    return 0; 
}

PaperDoll::~PaperDoll() {
    
}