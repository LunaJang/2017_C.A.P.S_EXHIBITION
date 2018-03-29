#pragma once
#include "headers.h"

using namespace std;

#define start turn == 0
#define semester1 turn >= 1 && turn <= 4
#define semester2 turn >= 7 && turn <= 10
#define vacation turn >= 5 && turn <= 6 // 시점

#define Gradeup 0.3
#define Gradedown -0.3
#define Stressup 1
#define Stressdown -1
#define Popularityup 8
#define Popularitydown -5
#define Liverup 1
#define Liverdown -1

#define sum  currentState.getPopularity() >= 90 && currentState.getStress() <= 2
#define lover love == 1
#define freedom currentState.getStress() <= 2
#define first currentState.getGrade() >= 4.3 && currentState.getGrade() < 4.5 && currentState.getStress() == 3 && currentState.getStress() == 4
#define celeb currentState.getPopularity() >= 80 && currentState.getGrade() >= 3.5
#define outsider currentState.getPopularity() <= 30 // 상태(끝날때 이 상태이면 엔딩) >> 10턴까지 존버

#define monk currentState.getStress() == 0
#define president currentState.getPopularity() == 100
#define nobelprize currentState.getGrade() == 4.5 && currentState.getStress() <= 2
#define manyF currentState.getGrade() <= 1.7
#define breaklove currentState.getLove() == 1 && currentState.getPopularity() <= 40 // 엔딩(한번이라도 충족되면 엔딩)

#define die currentState.getStress() + currentState.getLiver() >= 8// 충족 되어도 랜덤값 충족해야 엔딩

#define donghwan special == true // 동환이벤트

#define END_CNT_MAX 3

class Event {
	//bool evtact; // 실행여부
	//vector <string> evtScript;
	//vector <vector <string> > EvtScript; // 이벤트용
	vector <string> Fixed3;
	vector <string> Fixed4;
	vector <string> Fixed5;
	vector <string> Fixed61; // 6-공부
	vector <string> Fixed62; // 6-쉬기
	vector <string> Fixed63; // 6-나가기
	vector <string> Fixed7;
	vector <string> Fixed8;
	vector <string> Fixed9;
	vector <string> Fixed10;
	vector <string> Fixed11;
	vector <string> Fixed121; // 12-커플
	vector <string> Fixed122; // 12-솔로
	vector <string> Ran1;
	vector <string> Ran2;
	vector <string> Ran3;

public:
	void setEvtScript(string userName);
	bool makeEvt(State& currentState, int turn, int selection, vector<string>& evtScript);
	// 이벤트 실행여부 및 스크립트 바꾸기
};

class Ending
{
	//bool endact;
	//string endName;
	vector <string> Monk;				//EndScript[0]
	vector <string> Breaklove;			//EndScript[1]
	vector <string> ManyF;				//EndScript[2]
	vector <string> Nobelprize;			//EndScript[3]
	vector <string> Celeb;				//EndScript[4]
	vector <string> Die;				//EndScript[5]
	vector <string> Outside;
	vector <string> Leader;
	vector <string> Top;
	vector <string> Love;
	vector <string> Sole;
	vector <string> Leave;
	vector <string> Peace;
	vector <string> Tr;
	vector <string> Nomal;

	int nobelCnt;
	int celebCnt;
	int monkCnt;
	int breakCnt;
	int manyFCnt;

public:
	void setEndScript(string userName);
	bool makeEnding(State&  currentState, int selection, vector<string>& endScript, int turn);
};

class Action {
	vector <string> act1;
	vector <string> act2;
	vector <string> act3;

public:
	void setActScript();
	void makeAction(vector<string>& actScript, int selection, State& currentState);
};


