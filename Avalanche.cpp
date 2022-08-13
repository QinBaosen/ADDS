#include "Player.h"
#include "Avalanche.h"
#include <string>
#include <iostream>
using namespace std;

Avalanche::Avalanche() : Player("Avalanche") {

}

char Avalanche::performMove()
{
    // Avalanche always chooses Rock.

    return 'R';
}

Avalanche::~Avalanche() {

}