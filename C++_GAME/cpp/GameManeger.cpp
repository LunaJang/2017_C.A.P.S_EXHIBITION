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
		string temp = "������� �̸��� �Է��ϼ��� (6�� �̳�) :";
		UI::print(temp);
		UI::setValue(newName);
	} while (newName == "" && newName.size() > 6);
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

		evt.makeEvt(user.getCurrentState(), turn, alive);

	}
	return;
}

void GameManager::finishGame() {

}

