#include "Player.h"
#include <string>
#include <iostream>
using namespace std;

Player::Player(){

}
Player::Player(string n1)
{
    name = n1;
}

string Player::getName()
{
    return name;
}

void Player::controll(int ctrl)
{

}

void Player::addAnswer(string ans)
{

}

string Player::performMove()
{
    return " ";
}

Player::~Player(){
}
