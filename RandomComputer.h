#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Player.h"
#include <vector>

class RandoComputer:public Player{
    public:
        RandomComputer();
        std::char performMove();
        void addAnswer(std::char c);
        ~RandomComputer();
    private:
        int handInt;
        std::vector<std::char> userAnswers;

};
#endif