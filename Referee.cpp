#include "Player.h"
#include "Referee.h"
#include "RandomComputer.h"
#include <string>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

Referee::Referee() {
}

char Referee::refGame(Human player1, Player player2){
    char playerChoice = player1.makeMove();
    char compChoice = player2.makeMove();

    // Decide which of the two players wins
    // L = human loses; W = human wins; T = tie
    if(playerChoice == compChoice){
        return 'T';
    }else if(playerChoice == 'P' && compChoice == 'R'){
        return 'W';
    }else if(playerChoice == 'S' && compChoice == 'P'){
        return 'W';
    }else if(playerChoice == 'R' && compChoice == 'S'){
        return 'W';
    }else{
        return 'L';
    }
}

Referee::~Referee() {
}
