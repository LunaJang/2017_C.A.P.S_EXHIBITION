#pragma once

#define MAX_TURN 5

class GameManager {
	Player user;
	Event evt;
	Action act;
	vector <string> scripts;
	vector <string> menu_options;
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
};