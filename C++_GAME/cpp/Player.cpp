#include "Player.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Player::Player()
{
	name = "DEFAULT_NAME";
	gender = MALE;
	currentState.popularity = DEFAULT_POPULARITY;
	currentState.grade = DEFAULT_GRADE;
	currentState.stress = DEFAULT_STRESS;
}

string Player::getName()
{
	return name;
}

void Player::setName(string name)
{
	this->name = name;
}

bool Player::getGender()
{
	return gender;
}

void Player::setGender(bool gender)
{
	this->gender = gender;
}

State & Player::getCurrentState()
{
	return currentState;
}

void Player::setCurrentState(double grade, int stress, int popularity)
{
	currentState.grade = grade;
	currentState.popularity = popularity;
	currentState.stress = stress;

}

int main(void)
{

}