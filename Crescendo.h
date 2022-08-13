#ifndef Crescendo_H
#define Crescendo_H
#include "Player.h"

class Crescendo : public Player {
    public:
        Crescendo();

        char performMove();
        void controll(int);
        ~Crescendo();

    private:
        
        int ctrl;
};
#endif
