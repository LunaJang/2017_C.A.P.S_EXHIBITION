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
		string temp = "사용자의 이름을 입력하세요 (6자 이내) :";
		UI::print(temp);
		UI::setValue(newName);
	} while (newName == "" && newName.size() > 6);
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

