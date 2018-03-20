#include "UI.h"
#include "GameManager.h"
#include "Ranking.h"
#include "MenuManager.h"

MenuManager::MenuManager() {
	menuOptions.push_back("게임 시작");
	menuOptions.push_back("랭킹 확인");
	menuOptions.push_back("게임 종료");
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
