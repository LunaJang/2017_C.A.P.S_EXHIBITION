#include "Player.h"

using namespace std;

Player::Player()
{
	name = "DEFAULT_NAME";
	currentState.changePopularity(DEFAULT_POPULARITY);
	currentState.changeGrade(DEFAULT_GRADE);
	currentState.changeStress(DEFAULT_STRESS);
}

string Player::getName()
{
	return name;
}

void Player::setName(string name)
{
	this->name = name;
}

State & Player::getCurrentState()
{
	return currentState;
}

void Player::setCurrentState(double grade, int stress, int popularity)
{
	currentState.changeGrade(grade);
	currentState.changePopularity(popularity);
	currentState.changeStress(stress);

}


void State::changeGrade(double amount)
{
	if (amount >= 0 && (this->grade + amount) > MAX_GRADE)
	{
		this->grade = MAX_GRADE;
	}
	else if (amount < 0 && (this->grade - amount) < MIN_GRADE)
	{
		this->grade = MIN_GRADE;
	}
	else
	{
		this->grade = this->grade + amount;
	}
}

void State::changePopularity(int amount)
{
	if (amount >= 0 && (this->popularity + amount) > MAX_POPULARITY)
	{
		this->popularity = MAX_POPULARITY;
	}
	else if (amount < 0 && (this->popularity - amount) < MIN_POPULARITY)
	{
		this->popularity = MIN_POPULARITY;
	}
	else
	{
		this->popularity = this->popularity + amount;
	}

}

void State::changeStress(int amount)
{
	if (amount >= 0 && (this->stress + amount) > MAX_STRESS)
	{
		this->stress = MAX_STRESS;
	}
	else if (amount < 0 && (this->stress - amount) < MIN_STRESS)
	{
		this->stress = MIN_STRESS;
	}
	else
	{
		this->stress = this->stress + amount;
	}
}

double State::getGrade()
{
	return grade;
}

int State::getStress()
{
	return stress;
}

int State::getPopularity()
{
	return popularity;
}

bool State::getLove()
{
	return love;
}

void State::setLove(bool love)
{
	this->love = love;
}

bool State::getTr()
{
	return tr;
}

void State::setTr(bool tr)
{
	this->tr = tr;
}

int State::getLiver()
{
	return liver;
}

void State::setLiver(int liver)
{
	this->liver = liver;
}