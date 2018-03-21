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

#define MAX_LIVER 7
#define MIN_LIVER 0
#define DEFAULT_LIVER 2

#define DEFAULT_LOVE false

#define DEFAULT_TR false

#define DEFAULT_NAME seong

#define DEFAULT_SCORE 0

class State {
	double grade;
	int stress;
	int popularity;
	int liver;
	bool love;
	bool tr;	//�����ε� �����̸��� ���� ���� �𸣰ھ��...
	int score;
public:
	void changeGrade(double amount);
	double getGrade();
	void setGrade(double grade);

	void changeStress(int amount);
	int getStress();
	void setStress(int stress);

	void changePopularity(int amount);
	int getPopularity();
	void setPopularity(int popularity);
	
	void changeLiver(int amount);
	int getLiver();
	void setLiver(int liver);

	bool getLove();
	void setLove(bool love);

	bool getTr();
	void setTr(bool tr);

	int getScore();
	void setScore(int score);


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

