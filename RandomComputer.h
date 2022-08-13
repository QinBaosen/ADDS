#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include <string>
#include "Player.h"
#include <vector>

class RandoComputer:public Player{
    public:
        RandomComputer();
        std::string performMove();
        void addAnswer(std::string c);
        ~RandomComputer();
    private:
        int handInt;
        std::vector<std::string> userAnswers;

};
#endif