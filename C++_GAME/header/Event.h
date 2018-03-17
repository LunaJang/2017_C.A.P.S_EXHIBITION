#pragma once
#include "Script.h"
#include "Player.h"
using namespace std;

#define start turn == 0
#define semester1 turn >= 1 && turn <= 4
#define semester2 turn >= 7 && turn <= 10
#define vacation turn >= 5 && turn <= 6 // ����

#define lover love == 1
#define freedom currnetState.getStress() <= 2
#define first currnetState.getGrade() >= 4.3 && currnetState.getGrade() < 4.5 && currnetState.getStress() == 3 && currnetState.getStress() == 4
#define celeb currnetState.getPopularity() >= 80 && currnetState.getGrade() >= 3.5
#define outsider currnetState.getPopularity() <= 30 // ����(������ �� �����̸� ����) >> 10�ϱ��� ����
	
#define monk currnetState.getStress() == 0
#define president currnetState.getPopularity() == 100
#define nobelprize currnetState.getGrade() == 4.5
#define manyF currnetState.getGrade() <= 1.7
#define breaklove love == 1 && getPopularity() <= 20 // ����(�ѹ��̶� �����Ǹ� ����)
	
#define die getStress() == 5 // ���� �Ǿ ������ �����ؾ� ����
	
#define donghwan special == true // ��ȯ�̺�Ʈ
	
void readScript()
{
	addEndscript();
	addEvtscript();
	addActscript();
}

class Event {
public:
	bool evtact; // ���࿩��
	vector <string> evtScript;
	string evtName;
	bool makeEvt(State& currnetState, int turn, int selection, vector<string>& evtScript, string& evtName);
	// �̺�Ʈ ���࿩�� �� ��ũ��Ʈ �ٲٱ�
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