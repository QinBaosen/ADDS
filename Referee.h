#ifndef REFEREE_H
#define REFEREE_H
#include <string>
#include "Player.h"

class Referee {
    public:
        Referee();
        ~Referee();
       char refGame(Human player1, Computer player2);
    

};
#endif
