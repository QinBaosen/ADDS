#include "Player.h"
#include "PaperDoll.h"
#include <iostream>
using namespace std;

PaperDoll::PaperDoll() : Player("PaperDoll") {
    ctrl = 0;
}

void PaperDoll::controll(int newCtrl)
{
    ctrl = newCtrl;
}

char PaperDoll::performMove()
{
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
    return 'S';
    }
    
    return 0; 
}

PaperDoll::~PaperDoll() {
    
}