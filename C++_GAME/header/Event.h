#pragma once
#include "Script.h"
#include "Player.h"
using namespace std;

#define start turn == 0
#define semester1 turn >= 1 && turn <= 4
#define semester2 turn >= 7 && turn <= 10
#define vacation turn >= 5 && turn <= 6 // 시점

#define lover love == 1
#define freedom currnetState.getStress() <= 2
#define first currnetState.getGrade() >= 4.3 && currnetState.getGrade() < 4.5 && currnetState.getStress() == 3 && currnetState.getStress() == 4
#define celeb currnetState.getPopularity() >= 80 && currnetState.getGrade() >= 3.5
#define outsider currnetState.getPopularity() <= 30 // 상태(끝날때 이 상태이면 엔딩) >> 10턴까지 존버
	
#define monk currnetState.getStress() == 0
#define president currnetState.getPopularity() == 100
#define nobelprize currnetState.getGrade() == 4.5
#define manyF currnetState.getGrade() <= 1.7
#define breaklove love == 1 && getPopularity() <= 20 // 엔딩(한번이라도 충족되면 엔딩)
	
#define die getStress() == 5 // 충족 되어도 랜덤값 충족해야 엔딩
	
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
	bool makeEvt(State& currnetState, int turn, int selection, vector<string>& evtScript, string& evtName);
	// 이벤트 실행여부 및 스크립트 바꾸기
};

class Ending
{
	bool endact;
	vector <string> specialScript;
	vector <string> normalScript;
	string endName;
	bool makeEnding(State& currnetState, int selection, vector<string>& specialScript, vector<string>& normalScript, string& endName);
};

class Action {
public:
	void makeAction(vector<string>& script, int selection, State& currentState, int turn);

};