#include "Player.h"
#include "Bureaucrat.h"
#include <string>
#include <iostream>
using namespace std;

Bureaucrat::Bureaucrat() : Player("Bureaucrat") {

}

string Bureaucrat::performMove()
{
    //Bureaucrat always chooses Paper.

    return "Paper";
}

Bureaucrat::~Bureaucrat() {

}