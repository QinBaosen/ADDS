#include "Player.h"
#include "Human.h"
#include <iostream>
using namespace std;

Human::Human() : Player( {

}

char Human::performMove()
{
    char option;
    cout<<"Enter move (R, P, and S) need to capitalize the letters: ";
    cin >> option;
    return option;
}

Human::~Human() {

}