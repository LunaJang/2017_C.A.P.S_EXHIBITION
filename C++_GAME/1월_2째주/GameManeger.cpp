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

	// �̸� ����
	do {
		// (�ȳ��� ���)
		UI::setValue(newName);
	} while (newName != "");
	user.setName(newName);
	// (�ȳ��� ���)

	// ���� ����
	// (�ȳ��� �� ���� option ���)
	user.setGender(newGender);
	// (�ȳ��� ���)

	return;
};

void GameManager::startGame() {
	while (turn < MAX_TURN && alive) {
		turn++;

		// (�ȳ��� ���)

		vector <string> option;
		vector <string> sentence;
		int numOption;

		act.makeAction(option, numOption);
		act.doAction(sentence, UI::printOption(sentence, numOption), user.getCurrentState());
		
		evt.readEvtFile(user.getCurrentState(), turn);

	}
	return;
}

void GameManager::finishGame() {

}

