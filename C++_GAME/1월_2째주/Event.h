#pragma once
#include <Vector>

class Event {

public:
	Event();
	int readEvtFile(State& currentState, int turn);
	void makeEvt(State& currnetState, int turn);
};

class Action {
	// (������ ������ �׶��׶� �޾ƿ��°� �ƴ϶� ��ü ���� �� �о�ͼ� �����س��� ����ҵ� ? )
public:
	void makeAction();
};

class Ending{

};