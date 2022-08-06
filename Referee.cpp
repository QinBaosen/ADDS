#include "Referee.h"

char Referee::refGame(Human player1, Computer player2){
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