#include "GameManager.h"

using namespace std;

GameManager::GameManager() {
	turn = 0;
	alive = true;

	mentions.push_back("사용자의 이름을 입력하세요 (6자 이내) :");
	mentions.push_back("이번달의 일정을 선택하세요");

	menuOptions.push_back("게임 시작");
	menuOptions.push_back("랭킹 확인");
	menuOptions.push_back("게임 종료");

	actOptions.push_back("공부하기");
	actOptions.push_back("놀러가기");
	actOptions.push_back("쉬기");

	monthlyEvent.push_back("C.A.P.S 개강총회");
	monthlyEvent.push_back("중간고사");
	monthlyEvent.push_back("C.A.P.S MT");
	monthlyEvent.push_back("썸");
	monthlyEvent.push_back("여름 방학 1");
	monthlyEvent.push_back("여름 방학 2");
	monthlyEvent.push_back("2학기 개강");
	monthlyEvent.push_back("추석");
	monthlyEvent.push_back("팀플");
	monthlyEvent.push_back("크리스마스");
}

void GameManager::readyGame() {
	int selettion = UI::printOption();
}

void GameManager::startGame() {
	string sentence;
	string newName;
	bool newGender;

	do {
		UI::print(mentions[0]);
		UI::setValue(newName);
	} while (newName == "" && newName.size() > 6);
	user.setName(newName);

	return;
};

void GameManager::playGame() {
	// 시작멘트 출력
	vector<string> temp;
	UI::printScript(turn, monthlyEvent[turn], user.getCurrentState, temp);

	while (turn < MAX_TURN && alive) {		
		turn++;

		//액션 처리
		vector <string> actScript;
		int selection = UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), actOptions, 3);
		act.makeAction(user.getCurrentState(), actScript, selection);
		UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), actScript);

		//이벤트 처리
		vector<string> evtScript;
		string evtName;
		if (evt.makeEvt(user.getCurrentState(), turn, selection, evtScript, evtName)) {
			UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), evtScript);
		}

		//엔딩 체크
		vector<string> specialScript;
		vector<string> normalScript;
		string eName;
		if (end.makeEnding(user.getCurrentState(), selection, specialScript, normalScript, evtName)) {
			UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), evtScript);
			alive = false;
		}
	}
	return;
}

void GameManager::finishGame() {

}

