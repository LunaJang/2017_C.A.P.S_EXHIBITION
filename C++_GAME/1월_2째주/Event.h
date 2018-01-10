#pragma once
#include <Vector>

class Event {
	// (파일의 내용을 그때그때 받아오는게 아니라 객체 생성 때 읽어와서 저장해놓고 써야할듯 ? )
public:
public:
	Event();
	int readEvtFile(State& currentState, int turn);
	void makeEvt(State& currnetState, int turn, bool& alive);
};

class Action {
	// (파일의 내용을 그때그때 받아오는게 아니라 객체 생성 때 읽어와서 저장해놓고 써야할듯 ? )
public:
	// action의 option과 개수 반환
	//void makeAction(vector<string> option, int& num);
	void makeAction(string option[], int& num);
	// action의 결과로 출력될 문장과 선택된 action의 번호(selection), 변화시킬 state객체를 매개변수로 받음
	//void doAction(vector<string> sentence, int selction, State& currentState);
	void doAction(string sentence[], int selction, State& currentState);

};

class Ending{

};