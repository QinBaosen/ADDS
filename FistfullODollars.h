#ifndef FIRSTFULLODOLLARS_H
#define FIRSTFULLODOLLARS_H
#include "Player.h"


class FistfullODollars : public Player {
    public:
        FistfullODollars();
        char performMove();
        void controll(int);
        ~FistfullODollars();
    
    private:
        
        int ctrl;
};
#endif


