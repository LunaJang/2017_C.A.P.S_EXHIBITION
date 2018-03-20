#include "GameManager.h"

using namespace std;

GameManager::GameManager() {

	evt.setEvtScript(user.getName());
	end.setEndScript(user.getName());
	mentions.push_back("������� �̸��� �Է��ϼ��� (6�� �̳�) :");
	mentions.push_back("�̹����� ������ �����ϼ���");

	menuOptions.push_back("���� ����");
	menuOptions.push_back("��ŷ Ȯ��");
	menuOptions.push_back("���� ����");

	actOptions.push_back("�����ϱ�");
	actOptions.push_back("�����");
	actOptions.push_back("����");

	monthlyEvent.push_back("C.A.P.S ������ȸ");
	monthlyEvent.push_back("�߰����");
	monthlyEvent.push_back("C.A.P.S MT");
	monthlyEvent.push_back("��");
	monthlyEvent.push_back("���� ���� 1");
	monthlyEvent.push_back("���� ���� 2");
	monthlyEvent.push_back("2�б� ����");
	monthlyEvent.push_back("�߼�");
	monthlyEvent.push_back("����");
	monthlyEvent.push_back("ũ��������");
}

void GameManager::readyGame() {
}

void GameManager::startGame() {
	string sentence;
	string newName;
	bool newGender;

	do {
		UI::print(mentions[0]); 
		cin >> newName;
	} while (newName == "" || newName.size() > 6);
	user.setName(newName);

	// ���۸�Ʈ ���
	vector<string> temp;
	UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), temp);

	return;
};

void GameManager::playGame() {
	turn = 0;
	alive = true;

	while (turn < MAX_TURN && alive) {		
		turn++;

		//�׼� ó��
		vector<string> actScript;
		int selection = UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), actOptions, 3);
		act.makeAction(actScript, selection, user.getCurrentState());
		UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), actScript);

		//�̺�Ʈ ó��
		vector<string> evtScript;
		if (evt.makeEvt(user.getCurrentState(), turn, selection, evtScript)) {
			UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), evtScript);
		}

		//���� üũ
		vector<string> endScript;
		if (end.makeEnding(user.getCurrentState(), selection, endScript, turn)) {
			UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), evtScript);
			alive = false;
		}
	}
	return;
}

void GameManager::finishGame() {

}

