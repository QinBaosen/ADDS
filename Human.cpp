#include "Player.h"
#include "Human.h"
#include <string>
#include <iostream>
using namespace std;

Human::Human() : Player("Avalanche") {

}

string Human::performMove()
{
    string option
    cout<<"Enter move (R, P, and S) need to capitalize the letters: ";
    cin >> option;
    return option;
}

Human::~Human() {

}