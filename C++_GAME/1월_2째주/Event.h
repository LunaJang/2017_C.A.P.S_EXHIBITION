#pragma once
#include <Vector>

class Event {
	// (������ ������ �׶��׶� �޾ƿ��°� �ƴ϶� ��ü ���� �� �о�ͼ� �����س��� ����ҵ� ? )
public:
public:
	Event();
	int readEvtFile(State& currentState, int turn);
	void makeEvt(State& currnetState, int turn, bool& alive);
};

class Action {
	// (������ ������ �׶��׶� �޾ƿ��°� �ƴ϶� ��ü ���� �� �о�ͼ� �����س��� ����ҵ� ? )
public:
	// action�� option�� ���� ��ȯ
	//void makeAction(vector<string> option, int& num);
	void makeAction(string option[], int& num);
	// action�� ����� ��µ� ����� ���õ� action�� ��ȣ(selection), ��ȭ��ų state��ü�� �Ű������� ����
	//void doAction(vector<string> sentence, int selction, State& currentState);
	void doAction(string sentence[], int selction, State& currentState);

};

class Ending{

};