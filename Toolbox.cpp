#include "Player.h"
#include "Toolbox.h"
#include <iostream>
using namespace std;

Toolbox::Toolbox() : Player("Toolbox") {}

char Toolbox::performMove()
{
    //Toolbox always chooses Scissors.

    return 'S';
}

Toolbox::~Toolbox() {

}