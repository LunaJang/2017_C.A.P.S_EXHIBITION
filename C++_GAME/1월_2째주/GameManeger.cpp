#include <iostream>
#include <string>
#include "Event.h"
#include "Player.h"
#include "UI.h"
#include "GameManager.h"

using namespace std;

void GameManeger::startGame() {
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

