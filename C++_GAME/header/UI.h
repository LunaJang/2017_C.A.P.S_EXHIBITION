#pragma once
#define WAITING_TIME 100
#include <string>
#include <vector>
#include <conio.h> 
#include "Player.h"
#include <iostream>

class UI {
public:
	// option ���, �迭�� ũ��� num�� ����
	static void printOption(vector<string>&option, int num, int& cursor);

	static bool changeCursor(int& cursor);

	// sentence ���, �迭�� ũ��� num�� ����
	// �Լ� ���� �� �ܼ� â clear
	static void print(vector <string>&sentence);
	static void print(string &sentence);

	static void printScript(int turn, string monthlyEvent, State& currentState, vector<string>&scriptbox);
	static int printScript(int turn, string monthlyEvent, State& currentState, vector<string>&option, int num);
};
