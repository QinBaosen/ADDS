#include <string>
#include <vector>
#include <iostream>
#include "Player.h"
#include "Tournament.h"
#include "Referee.h"
using namespace std;

Tournament::Tournament() {
    this->judgement = new referee();
}

Player *Tournament::compete(Player* player1,Player* player2){
    int player1_winnums =0, player2_winnums =0;
    for(int i=0;i<5;i++){
        char p = this->judgement->refGame(player,player2);
        if(p = 'W'){
            player1_winnums++;
        }
        if(p = 'L'){
            player2_winnums++;
        }
        if(p = 'T'){

        }
    }
    // return winner
    return ;
}

Player * run(array<Player *, 8>  competitors){
    Player* player1 = this->fight(competitors[0],competitors[1]);
    Player* player2 = this->fight(competitors[2],competitors[3]);
    Player* player3 = this->fight(competitors[4],competitors[5]);
    Player* player4 = this->fight(competitors[6],competitors[7]);
    Player* p1 =this->fight(player1, player2);
    Player* p2 =this->fight(player3, player4);
    Player* p3 =this->fight(p1, p2);
    return p3;
}

Tournament::~Tournament() {
}