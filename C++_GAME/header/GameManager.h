#pragma once

#define MAX_TURN 5

class GameManager {
	Player user;
	Event evt;
	
	int turn;
	bool alive;
public:
	// GameManager 생성자
	GameManager();

	// 사용자 이름 및 성별 설정
	void startGame();
	// 각 turn 관리
	void playGame();
	// 게임 엔딩 관리
	void finishGame();
};