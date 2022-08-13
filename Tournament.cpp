#include <string>
#include <vector>
#include <iostream>
#include "Player.h"
#include "Tournament.h"
#include "Referee.h"
using namespace std;

Tournament::Tournament() {
}

Player * Tournament::run(array<Player *, 8>  competitors){
    Referee referee;
    Player * player1 = competitors[0];
    Player * player2 = competitors[1];
    char match = referee.Fight(player1,player2);
    cout<<match << endl;

}
Tournament::~Tournament() {
}