#include "Player.h"

#include <iostream>
using namespace std;

Player::Player(){

}
Player::Player(char n1)
{
    name = n1;
}

char Player::getName()
{
    return name;
}

void Player::controll(int ctrl)
{

}

void Player::addAnswer(char ans)
{

}

string Player::performMove()
{
    return ' ';
}

Player::~Player(){
}
