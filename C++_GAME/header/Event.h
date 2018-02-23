#pragma once
#include <Vector>
#include "Player.h"
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;

#define semester1 (turn >= 1 && turn <= 4)
#define semester2 (turn >= 7 && turn <= 10)
#define vacation (turn >=5 && turn <= 6)
#define lover (love == 1)
#define celeb (popularity >= 70)
#define first (grade >= 4.4)
#define sick (stress == 5)
#define freedom (stress <= 2)


class Event {
public:
	vector < vector<string> > script;
	vector <string> newone;
	vector <string> makeEvt(State& currnetState, int turn, bool& alive);
	void Addscript(vector <string> newone);
	
};

class Action {
public:
	void makeAction(vector<string> &option, int &num);
	void doAction(vector<string> &script, int selection, State &currentState);

};

