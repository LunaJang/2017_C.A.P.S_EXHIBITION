#pragma once
#include "headers.h"
#define MAX_TURN 5

class GameManager {
	Player user;
	Event evt;
	Action act;
	Ending end;
	Ranking rank;
	vector <string> setting;
	vector <string> menuOptions;
	vector <string> actOptions;
	vector <string> monthlyEvent;
	vector <string> opening;

	int turn;
	bool alive;
public:
	// GameManager ������
	GameManager();

	// �޴� ���
	void readyGame();
	// ����� �̸� �� ���� ����
	void startGame();
	// �� turn ����
	void playGame();
	// ���� ���� ����
	void finishGame();
};