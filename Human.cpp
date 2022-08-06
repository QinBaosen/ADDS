#include "Human.h"


char Human::makeMove(){
    // ask player select a move
    // rock, paper, scissor
    std::cout<< "Enter move (R, P, and S) need to capitalize the letters: ";
    std::cin>> option;
    return option;

}