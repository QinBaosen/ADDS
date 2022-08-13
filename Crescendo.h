#ifndef Crescendo_H
#define Crescendo_H
#include <string>
#include "Player.h"

class Crescendo : public Player {
    public:
        Crescendo();

        std::string performMove();
        void controll(int);
        ~Crescendo();

    private:
        std::string m,;
        int ctrl;
};
#endif
