#include "Player.h"
#include "Avalanche.h"
#include <string>
#include <iostream>
using namespace std;

Avalanche::Avalanche() : Player("Avalanche") {
    
}

string Avalanche::performMove()
{
    // Avalanche always chooses Rock.
    m = "Rock"; 
    return m;
}

Avalanche::~Avalanche() {
    
}