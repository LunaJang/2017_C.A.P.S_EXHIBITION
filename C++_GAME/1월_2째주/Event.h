#pragma once
#include <Vector>
#include"Player.h"
#include<cstdio>

#define semester1 (turn >= 1 && turn <= 4)
#define semester2 (turn >= 7 && turn <= 10)
#define vacation (turn >=5 && turn <= 6)
#define lover (love == 1)
#define celeb (popularity >= 70)
#define first (grade >= 4.4)
#define sick (stress == 5)
#define freedom (stress <= 2)


class Event {
	string script;
	int nof;
	int nol;
public:
	ofstream write_file("test.txt");
	ifstream read_file("test.txt");
	FILE *fr;
	string evtnum;
	string makeEvt(State& currnetState, int turn, bool& alive);
	
};