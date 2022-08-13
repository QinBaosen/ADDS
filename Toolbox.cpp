#include "Player.h"
#include "Toolbox.h"
#include <string>
#include <iostream>
using namespace std;

Toolbox::Toolbox() : Player("Toolbox") {}

string Toolbox::performMove()
{
    //Toolbox always chooses Scissors.
    m = "Scissors";
    return m;
}

Toolbox::~Toolbox() {

}