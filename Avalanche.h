#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "Player.h"
#include <string>


class Avalanche: public Player{
    public:
        Avalanche();
        std::string performMove();
        ~Avalanche();


};
#endif