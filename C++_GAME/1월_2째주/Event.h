#pragma once
#include <Vector>

class Event {

public:
	Event();
	int readEvtFile(State& currentState, int turn);
	void makeEvt(State& currnetState, int turn);
};

class Action {
	// (파일의 내용을 그때그때 받아오는게 아니라 객체 생성 때 읽어와서 저장해놓고 써야할듯 ? )
public:
	void makeAction();
};

class Ending{

};