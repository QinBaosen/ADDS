#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main(){
    //create player
    Human p1;
    
    //create computer
    Computer c1;
    //creater a referee
    Referee r1;
    char result = r1.refGame(p1, c1);
    std::cout<< "the output is " << result <<endl;
    return 0;
}