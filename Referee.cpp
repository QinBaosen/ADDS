#include "Referee.h"

char Referee::refGame(Human player1, Computer player2){
    char player1Choice = player1.makeMove();
    char player2Choice = player2.makeMove();
    
    // Decide which of the two players wins
    // L = human loses; W = human wins; T = tie
    if(player1Choice == player2Choice){
        return 'T';
    }else if(player1Choice == 'P' && player2Choice == 'R'){
        return 'W';
    }else if(player1Choice == 'S' && player2Choice == 'P'){
        return 'W';
    }else if(player1Choice == 'R' && player2Choice == 'S'){
        return 'W';
    }else{
        return 'L';
    }
}