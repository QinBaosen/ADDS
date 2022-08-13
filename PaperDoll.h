#ifndef PaperDoll_H
#define PaperDoll_H
#include <string>
#include "Player.h"

class PaperDoll : public Player {
    public:
        PaperDoll();
        std::string performMove();
        void controll(int);
        ~PaperDoll();
    
    private:
        std::string m;
        int ctrl;
};
#endif
