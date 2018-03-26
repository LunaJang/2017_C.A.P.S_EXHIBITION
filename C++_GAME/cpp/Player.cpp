#pragma once
#include "headers.h"

using namespace std;

Player::Player()
{
	name = "DEFAULT_NAME";
	currentState.setPopularity(DEFAULT_POPULARITY);
	currentState.setGrade(DEFAULT_GRADE);
	currentState.setStress(DEFAULT_STRESS);
	currentState.setLiver(DEFAULT_LIVER);
	currentState.setLove(DEFAULT_LOVE);
	currentState.setTr(DEFAULT_TR);
	currentState.setScore(DEFAULT_SCORE) ;
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

void State::setGrade(double grade)
{
	this->grade = grade;
}

void State::setStress(int stress)
{
	this->stress = stress;
}

void State::setPopularity(int popularity)
{
	this->popularity = popularity;
}

void State::changeLiver(int amount)
{
	if (amount >= 0 && (this->liver + amount) > MAX_LIVER)
	{
		this->liver = MAX_LIVER;
	}
	else if (amount < 0 && (this->liver - amount) < MIN_LIVER)
	{
		this->liver = MIN_LIVER;
	}
	else
	{
		this->liver = this->liver + amount;
	}
}

int State::getLiver()
{
	return liver;
}

void State::setLiver(int liver)
{
	this->liver = liver;
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

int State::getScore()
{
	return score;
}

void State::setScore(int score)
{
	this->score = score;
}


