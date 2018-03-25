#pragma once
#define WAITING_TIME 100
#include <string>
#include <vector>
#include <conio.h> 
#include "Player.h"
#include <iostream>

class UI {
public:
	// option 출력, 배열의 크기는 num에 저장
	static void printOption(vector<string>&option, int num, int& cursor);

	static bool changeCursor(int& cursor);

	// sentence 출력, 배열의 크기는 num에 저장
	// 함수 시작 시 콘솔 창 clear
	static void print(vector <string>&sentence);
	static void print(string &sentence);

	static void printScript(int turn, string monthlyEvent, State& currentState, vector<string>&scriptbox);
	static int printScript(int turn, string monthlyEvent, State& currentState, vector<string>&option, int num);
};
