#include "UI.h"
#include "GameManager.h"
#include "Ranking.h"
#include "MenuManager.h"

MenuManager::MenuManager() {
	menuOptions.push_back("���� ����");
	menuOptions.push_back("��ŷ Ȯ��");
	menuOptions.push_back("���� ����");
}

void MenuManager::progStart()
{
}

void MenuManager::menuSelect()
{
	int selection = UI::printPage(turn, monthlyEvent[turn], user.getCurrentState(), menuOptions, menuOptions.size());

	switch (selection) {
	case 0:
		break;
	case 1:
		break;
	case 2:
		break;
	}
}

void MenuManager::progFinish()
{
}
