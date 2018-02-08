#include <iostream>
#include <string>
#include "Event.h"
#include "Player.h"
#include "UI.h"
#include "GameManager.h"

using namespace std;

GameManager::GameManager() {
	turn = 0;
	alive = true;
}

void GameManager::startGame() {
	string sentence;
	string newName;
	bool newGender;

	// 이름 설정
	do {
		// (안내문 출력)
		UI::setValue(newName);
	} while (newName != "");
	user.setName(newName);
	// (안내문 출력)

	// 성별 설정
	// (안내문 및 성별 option 출력)
	user.setGender(newGender);
	// (안내문 출력)

	return;
};

void GameManager::startGame() {
	while (turn < MAX_TURN && alive) {
		turn++;

		// (안내문 출력)

		vector <string> option;
		vector <string> sentence;
		int numOption;

		evt.makeEvt(user.getCurrentState(), turn, alive);

	}
	return;
}

void GameManager::finishGame() {

}

