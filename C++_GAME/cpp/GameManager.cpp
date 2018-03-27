#pragma once
#include "headers.h"

using namespace std;

GameManager::GameManager() {
	setting.push_back("������� �̸��� �Է��ϼ��� (6�� �̳�) :");
	setting.push_back("�̹����� ������ �����ϼ���");

	opening.push_back("������ ȯ���մϴ�, �������!");
	opening.push_back("�� ���� ��ȹ�� ����");
	opening.push_back("�Ǹ��� �峻�Ⱑ �Ǿ����!");

	menuOptions.push_back("���� ����");
	menuOptions.push_back("��ŷ Ȯ��");
	menuOptions.push_back("���� ����");

	actOptions.push_back("�����ϱ�");
	actOptions.push_back("����");
	actOptions.push_back("�����");

	monthlyEvent.push_back("");
	monthlyEvent.push_back("");
	monthlyEvent.push_back("����");
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

	turn = 2;

	do {
		UI::print(setting[0]); 
		cin >> newName;
	} while (newName == "" || newName.size() > 6);
	user.setName(" " + newName + " ");

	evt.setEvtScript(user.getName());
	end.setEndScript(user.getName());
	act.setActScript();

	// ���۸�Ʈ ���
	UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), opening);

	return;
};

void GameManager::playGame() {
	alive = true;

	while (turn < MAX_TURN && alive) {		
		turn++;

		//�׼� ó��
		vector<string> actScript;
		//actScript.clear();
		int selection = UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), actOptions, 3);
		act.makeAction(actScript, selection, user.getCurrentState());
		UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), actScript);

		//�̺�Ʈ ó��
		vector<string> evtScript;
		//evtScript.clear();
		if (evt.makeEvt(user.getCurrentState(), turn, selection, evtScript)) {
			UI::printScript(turn, monthlyEvent[turn], user.getCurrentState(), evtScript);
		}

		//���� üũ
		vector<string> endScript;
		//endScript.clear();
		if (end.makeEnding(user.getCurrentState(), selection, endScript, turn)) {
			UI::printScript(turn, "����", user.getCurrentState(), endScript);
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

