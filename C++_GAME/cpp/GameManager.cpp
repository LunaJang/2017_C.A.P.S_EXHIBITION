#include "GameManager.h"

using namespace std;

GameManager::GameManager() {
	turn = 0;
	alive = true;

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
	// ���۸�Ʈ ���
	vector<string> temp;
	UI::printScript(turn, monthlyEvent[turn], user.getCurrentState, temp);

	while (turn < MAX_TURN && alive) {		
		turn++;

		//�׼� ó��
		vector <string> actScript;
		int selection = UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), actOptions, 3);
		act.makeAction(user.getCurrentState(), actScript, selection);
		UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), actScript);

		//�̺�Ʈ ó��
		vector<string> evtScript;
		string evtName;
		if (evt.makeEvt(user.getCurrentState(), turn, selection, evtScript, evtName)) {
			UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), evtScript);
		}

		//���� üũ
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

