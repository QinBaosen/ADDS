#ifndef FIRSTFULLODOLLARS_H
#define FIRSTFULLODOLLARS_H
#include <string>
#include "Player.h"


class FistfullODollars : public Player {
    public:
        FistfullODollars();
        std::string performMove();
        void controll(int);
        ~FistfullODollars();
    
    private:
        std::string m;
        int ctrl;
};
#endif


