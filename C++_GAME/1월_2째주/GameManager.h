#pragma once

#define MAX_TURN 5

class GameManeger {
	Player user;
	int turn;
public:
	// GameManager 생성자
	GameManeger();
	int getTurn();

	// 사용자 이름 및 성별 설정
	void startGame();
	// 각 turn 관리
	void playGame();
	// 게임 엔딩 관리
	void finishGame();
};