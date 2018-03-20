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
	int liver;
	bool love;
	bool tr;	//찍힘인데 변수이름을 뭘로 할지 모르겠어요...
public:
	void changeGrade(double amount);
	double getGrade();
	
	void changeStress(int amount);
	int getStress();

	void changePopularity(int amount);
	int getPopularity();

	bool getLove();
	void setLove(bool love);
	
	bool getTr();
	void setTr(bool tr);
	
	int getLiver();
	void setLiver(int liver);

};

class Player {
	string name;
	State currentState;

public:

	// 생성자, Player의 변수들 초기화
	Player();

	string getName();
	void setName(string name);

	State& getCurrentState();
	// 매개변수로 받은 값 만큼 currentState의 값 변화
	void setCurrentState(double grade, int stress, int popularity);

};

