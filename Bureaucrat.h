#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <string>
#include "Player.h"


class Bureaucrat:public Player{
    public:
        Bureaucrat();
        std::string performMove();
        ~Bureaucrat();
    private:
        std::string m;
};
#endif 