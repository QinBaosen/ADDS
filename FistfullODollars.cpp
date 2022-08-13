#include "Player.h"
#include "FistfullODollars.h"
#include <iostream>
using namespace std;

FistfullODollars::FistfullODollars() : Player("FistfullODollars") {
    ctrl = 0;
}

void FistfullODollars::controll(int newCtrl)
{
    ctrl = newCtrl;
}

char FistfullODollars::performMove()
{
    if (ctrl == 0)
    {
    return 'R';
    }
    else if (ctrl == 1)
    {
    return 'P';
    }
    else if (ctrl == 2)
    {
    return 'P';
    }
    return 0;
}

FistfullODollars::~FistfullODollars() {

}
