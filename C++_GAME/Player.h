#pragma once
#include <string>
using namespace std;

#define MAX_grade 4.5
#define MIN_grade 0.0
#define DEFAULT_grade 3.0

#define MAX_STRESS 5
#define MIN_STRESS 1
#define DEFAULT_STRESS 1

#define MAX_POPULARITY 100
#define MIN_POPULARITY 0
#define DEFAULT_POPULARITY 50

#define MALE true
#define FEMALE false

class State {
public:
	double grade;
	int stress;
	int popularity;


};

class Player {
	string name;
	bool gender;
	State currentState;

public:

	// ������, Player�� ������ �ʱ�ȭ
	Player();

	string getName();
	void setName(string name);

	bool getGender();
	void setGender(bool gender);

	State& getCurrentState();
	// �Ű������� ���� �� ��ŭ currentState�� �� ��ȭ
	void setCurrentState(double grade, int stress, int popularity);

	int getTurn();
	void setTurn(int turn);
};

