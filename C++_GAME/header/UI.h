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

	// 사용자로부터 string 값을 받아와 반환, 출력되는 것은 없음
	// 주로 이름설정 등에 사용됨
	// 입력가능한 문자열의 길이 제한해야함
	static void printPage(int turn, string monthlyEvent, State& currentState);

	static void printScript(int turn, string monthlyEvent, State& currentState, vector<string>&scriptbox);
	static int printScript(int turn, string monthlyEvent, State& currentState, vector<string>&option, int num);
};
