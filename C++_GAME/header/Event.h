#pragma once
#include <Vector>
#include "Player.h"
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;

#define start turn == 0
#define semester1 turn >= 1 && turn <= 4
#define semester2 turn >= 7 && turn <= 10
#define vacation turn >= 5 && turn <= 6 // ����

#define lover love == 1
#define freedom stress <= 2
#define first grade >= 4.3 && grade < 4.5 && stress == 3 && stress == 4
#define celeb popularity >= 80 && grade >= 3.5
#define outsider popularity <= 30 // ����(������ �� �����̸� ����)
	
#define monk stress == 0
#define president popularity == 100
#define nobelpirze grade == 4.5
#define manyF grade <= 1.7
#define breaklove love == 1 && popularity <= 20 // ����(�ѹ��̶� �����Ǹ� ����)
	
#define sick stress == 5 // ���� �Ǿ ������ �����ؾ� ����
	
#define donghwan special == true // ��ȯ�̺�Ʈ
	

class Event {
public:
	vector < vector<string> > script;
	vector <string> newone;
	vector <string> makeEvt(State& currnetState,int& trun, bool& alive, int selection);
	void Addscript(vector <string> newone);
	
};

class Action {
public:
	void makeAction(vector<string> &option, int &num);
	void doAction(vector<string> &script, int selection, State &currentState);

};

class Script {
	vector < vector<string> > script;

};