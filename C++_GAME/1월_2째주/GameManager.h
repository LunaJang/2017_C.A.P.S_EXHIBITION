#pragma once

#define MAX_TURN 5

class GameManeger {
	Player user;
	int turn;
public:
	// GameManager ������
	GameManeger();
	int getTurn();

	// ����� �̸� �� ���� ����
	void startGame();
	// �� turn ����
	void playGame();
	// ���� ���� ����
	void finishGame();
};