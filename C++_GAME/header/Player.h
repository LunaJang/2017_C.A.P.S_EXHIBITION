#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define MAX_GRADE 4.5
#define MIN_GRADE 0.0
#define DEFAULT_GRADE 3.0

#define MAX_STRESS 5
#define MIN_STRESS 0
#define DEFAULT_STRESS 1

#define MAX_POPULARITY 100
#define MIN_POPULARITY 0
#define DEFAULT_POPULARITY 50

#define MALE true
#define FEMALE false

#define DEFAULT_NAME seong

class State {

	double grade;
	int stress;
	int popularity;
	bool love;
public:
	void changeGrade(double amount);
	void changeStress(int amount);
	void changePopularity(int amount);
	double getGrade();
	int getStress();
	int getPopularity();

};

class Player {
	string name;
	State currentState;

public:

	// ������, Player�� ������ �ʱ�ȭ
	Player();

	string getName();
	void setName(string name);

	State& getCurrentState();
	// �Ű������� ���� �� ��ŭ currentState�� �� ��ȭ
	void setCurrentState(double grade, int stress, int popularity);

};

