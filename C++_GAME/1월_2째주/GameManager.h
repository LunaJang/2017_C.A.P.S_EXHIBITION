#pragma once

#define MAX_TURN 5

class GameManager {
	Player user;
	Event evt;
	
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