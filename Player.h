#ifndef PLAYER_H
#define PLAYER_H


class Player {
    public:
        Player();
        Player(std::char);
        std::char getName();
        virtual std::char performMove();
        virtual void controll(int);
        virtual void addAnswer(std::char);
        ~Player();

    private:
        std::char name;

};
#endif