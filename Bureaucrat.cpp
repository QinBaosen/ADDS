#include "Player.h"
#include "Bureaucrat.h"
#include <string>
#include <iostream>
using namespace std;

Bureaucrat::Bureaucrat() : Player("Bureaucrat") {

}

char Bureaucrat::performMove()
{
    //Bureaucrat always chooses Paper.

    return 'P';
}

Bureaucrat::~Bureaucrat() {

}