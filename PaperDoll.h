#ifndef PaperDoll_H
#define PaperDoll_H
#include "Player.h"

class PaperDoll : public Player {
    public:
        PaperDoll();
        char performMove();
        void controll(int);
        ~PaperDoll();
    
    private:
        
        int ctrl;
};
#endif
