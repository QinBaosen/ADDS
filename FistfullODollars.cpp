#include "Player.h"
#include "FistfullODollars.h"
#include <string>
#include <iostream>
using namespace std;

FistfullODollars::FistfullODollars() : Player("FistfullODollars") {
    ctrl = 0;
}

void FistfullODollars::controll(int newCtrl)
{
    ctrl = newCtrl;
}

string FistfullODollars::performMove()
{
    if (ctrl == 0)
    {
    return "Rock";
    }
    else if (ctrl == 1)
    {
    return "Paper";
    }
    else if (ctrl == 2)
    {
    return "Paper";
    }
    return 0;
}

FistfullODollars::~FistfullODollars() {
    
}
