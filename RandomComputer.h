#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Player.h"
#include <vector>

class RandoComputer:public Player{
    public:
        RandomComputer();
        char performMove();

        ~RandomComputer();



};
#endif