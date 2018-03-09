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

	scripts.push_back("사용자의 이름을 입력하세요 (6자 이내) :");
	scripts.push_back("이번달의 일정을 선택하세요");

	menu_options.push_back("게임 시작");
	menu_options.push_back("랭킹 확인");
	menu_options.push_back("게임 종료");

}

void GameManager::startGame() {
	string sentence;
	string newName;
	bool newGender;

	do {
		UI::print(scripts[0]);
		UI::setValue(newName);
	} while (newName == "" && newName.size() > 6);
	user.setName(newName);

	return;
};

void GameManager::playGame() {
	// 시작멘트 출력
	vector<string> temp;
	UI::printScript(temp);

	while (turn < MAX_TURN && alive) {		
		turn++;

		//액션 처리
		int selection = UI::printScript(act.makeAction(), 3);
		UI::printScript(act.doAction(selection, user.getCurrentState, turn));

		//이벤트 처리
		vector<string> evtScript;
		if (evt.makeEvt(user.getCurrentState(), evtScript, turn, alive, selection)) {
			UI::printScript(evtScript);
		}

		//엔딩 체크
	}
	return;
}

void GameManager::finishGame() {

}

