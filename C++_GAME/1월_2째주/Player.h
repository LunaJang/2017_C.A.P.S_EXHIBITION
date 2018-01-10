#pragma once

#define MAX_SCORE 4.5
#define MIN_SCORE 0.0
#define DEFAULT_SCORE 3.0

#define MAX_STRESS 5
#define MIN_STRESS 1
#define DEFAULT_STRESS 1

#define MAX_POPULARITY 100
#define MIN_POPULARITY 0
#define DEFAULT_POPULARITY 50

#define MALE true
#define FEMALE false

class State {
	double score;
	int stress;
	int popularity;

public:
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
	void setCurrentState(double score, int stress, int popularity);

	int getTurn();
	void setTurn(int turn);
};