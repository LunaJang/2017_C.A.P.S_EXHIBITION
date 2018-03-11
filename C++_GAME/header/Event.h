#pragma once
#include <Vector>
#include <cstdio>
#include <cstdlib>
#include <string>
#include "Script.h"

using namespace std;

#define start turn == 0
#define semester1 turn >= 1 && turn <= 4
#define semester2 turn >= 7 && turn <= 10
#define vacation turn >= 5 && turn <= 6 // 시점

#define lover love == 1
#define freedom stress <= 2
#define first grade >= 4.3 && grade < 4.5 && stress == 3 && stress == 4
#define celeb popularity >= 80 && grade >= 3.5
#define outsider popularity <= 30 // 상태(끝날때 이 상태이면 엔딩) >> 10턴까지 존버
	
#define monk stress == 0
#define president popularity == 100
#define nobelpirze grade == 4.5
#define manyF grade <= 1.7
#define breaklove love == 1 && popularity <= 20 // 엔딩(한번이라도 충족되면 엔딩)
	
#define sick stress == 5 // 충족 되어도 랜덤값 충족해야 엔딩
	
#define donghwan special == true // 동환이벤트
	

class Event {
public:
	bool evtact;
	vector <string> evtScript;
	vector <string> evtName;
	bool makeEvt(State& currnetState, int trun, int selection, vector<string>& evtScript, string& evtName);
	
};

class Ending
{
	bool endact;
	vector <string> specialScript;
	vector <string> normalScript;
	bool makeEnding(State& currnetState, int selection, vector<string>& specialScript, vector<string>& normalScript, string& evtName);
};

class Action {
public:
	void makeAction(vector<string>& script, int selection, State& currentState);

};