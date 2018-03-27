#pragma once
#include "headers.h"

using namespace std;

GameManager::GameManager() {
	setting.push_back("사용자의 이름을 입력하세요 (6자 이내) :");
	setting.push_back("이번달의 일정을 선택하세요");

	opening.push_back("입학을 환영합니다, 새내기님!");
	opening.push_back("매 달의 계획을 세워");
	opening.push_back("훌륭한 헌내기가 되어보세요!");

	menuOptions.push_back("게임 시작");
	menuOptions.push_back("랭킹 확인");
	menuOptions.push_back("게임 종료");

	actOptions.push_back("공부하기");
	actOptions.push_back("쉬기");
	actOptions.push_back("놀러가기");

	monthlyEvent.push_back("");
	monthlyEvent.push_back("");
	monthlyEvent.push_back("입학");
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
	
}

void GameManager::startGame() {
	string sentence;
	string newName;

	turn = 2;

	do {
		UI::print(setting[0]); 
		cin >> newName;
	} while (newName == "" || newName.size() > 6);
	user.setName(" " + newName + " ");

	evt.setEvtScript(user.getName());
	end.setEndScript(user.getName());
	act.setActScript();

	// 시작멘트 출력
	UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), opening);

	return;
};

void GameManager::playGame() {
	alive = true;

	while (turn < MAX_TURN && alive) {		
		turn++;

		//액션 처리
		vector<string> actScript;
		//actScript.clear();
		int selection = UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), actOptions, 3);
		act.makeAction(actScript, selection, user.getCurrentState());
		UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), actScript);

		//이벤트 처리
		vector<string> evtScript;
		//evtScript.clear();
		if (evt.makeEvt(user.getCurrentState(), turn, selection, evtScript)) {
			UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), evtScript);
		}

		//엔딩 체크
		vector<string> endScript;
		//endScript.clear();
		if (end.makeEnding(user.getCurrentState(), selection, endScript, turn)) {
			UI::printScript(turn, "엔딩", user.getCurrentState(), endScript);
			alive = false;
		}
	}
	return;
}

void GameManager::finishGame() {
	vector<string> sRanking;
	rank.getRank(sRanking, user.getName(), user.getCurrentState().getScore());

	system("cls");

	int size = sRanking.size();

	for (int i = 0; i < size; i++) {
		cout << sRanking[i] << endl;
	}
}

