#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
    public:
        Player();
        Player(std::string);
        std::string getName();
        virtual std::string performMove();
        virtual void controll(int); 
        virtual void addAnswer(std::string); 
        ~Player();

    private:
    std::string name;

};
#endif