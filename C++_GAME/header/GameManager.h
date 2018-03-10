#pragma once
#include <iostream>
#include <string>
#include "Event.h"
#include "Player.h"
#include "UI.h"
#define MAX_TURN 5

class GameManager {
	Player user;
	Event evt;
	Action act;
	Ending end;

	vector <string> mentions;
	vector <string> menuOptions;
	vector <string> actOptions;
	vector <string> monthlyEvent;

	int turn;
	bool alive;
public:
	// GameManager ������
	GameManager();

	// ����� �̸� �� ���� ����
	void startGame();
	// �� turn ����
	void playGame();
	// ���� ���� ����
	void finishGame();
	void readyGame();
};