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

	scripts.push_back("������� �̸��� �Է��ϼ��� (6�� �̳�) :");
	scripts.push_back("�̹����� ������ �����ϼ���");

	menu_options.push_back("���� ����");
	menu_options.push_back("��ŷ Ȯ��");
	menu_options.push_back("���� ����");

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
	// ���۸�Ʈ ���
	vector<string> temp;
	UI::printScript(temp);

	while (turn < MAX_TURN && alive) {		
		turn++;

		//�׼� ó��
		int selection = UI::printScript(act.makeAction(), 3);
		UI::printScript(act.doAction(selection, user.getCurrentState, turn));

		//�̺�Ʈ ó��
		vector<string> evtScript;
		if (evt.makeEvt(user.getCurrentState(), evtScript, turn, alive, selection)) {
			UI::printScript(evtScript);
		}

		//���� üũ
	}
	return;
}

void GameManager::finishGame() {

}

