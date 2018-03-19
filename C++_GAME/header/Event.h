#pragma once
#include "Script.h"
#include "Player.h"
#include <time.h>
using namespace std;

#define start turn == 0
#define semester1 turn >= 1 && turn <= 4
#define semester2 turn >= 7 && turn <= 10
#define vacation turn >= 5 && turn <= 6 // 시점

#define lover love == 1
#define freedom currentState.getStress() <= 2
#define first currentState.getGrade() >= 4.3 && currentState.getGrade() < 4.5 && currentState.getStress() == 3 && currentState.getStress() == 4
#define celeb currentState.getPopularity() >= 80 && currentState.getGrade() >= 3.5
#define outsider currentState.getPopularity() <= 30 // 상태(끝날때 이 상태이면 엔딩) >> 10턴까지 존버
	
#define monk currentState.getStress() == 0
#define president currentState.getPopularity() == 100
#define nobelprize currentState.getGrade() == 4.5
#define manyF currentState.getGrade() <= 1.7
#define breaklove currentState.getLove() == 1 && currentState.getPopularity() <= 20 // 엔딩(한번이라도 충족되면 엔딩)
	
#define die currentState.getStress() + currentState.getLiver() >= 8// 충족 되어도 랜덤값 충족해야 엔딩
	
#define donghwan special == true // 동환이벤트
	
void readScript()
{
	addEndscript();
	addEvtscript();
	addActscript();
}

class Event {
public:
	bool evtact; // 실행여부
	vector <string> evtScript;
	string evtName;
	bool makeEvt(State& currentState, int turn, int selection, vector<string>& evtScript, string& evtName);
	// 이벤트 실행여부 및 스크립트 바꾸기
};

class Ending
{
	bool endact;
	vector <string> specialScript;
	vector <string> normalScript;
	string endName;
	bool makeEnding(State&  currentState, int selection, vector<string>& specialScript, vector<string>& normalScript, string& endName,int turn);
};

class Action {
public:
	void makeAction(vector<string>& script, int selection, State& currentState, int turn);

};