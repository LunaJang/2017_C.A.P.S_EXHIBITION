#include "Event.h"

using namespace std;

vector <string>& Event::makeEvt(State& currnetState, int& turn, bool& alive, int selection)
{
	if (semester1)
	{
		return script[0];
	}
}



void Action::makeAction(vector<string>&option, int& turn, int& num)
{
	if (semester1)
	{
		option.push_back("���� ����");
		option.push_back("� ����");
		option.push_back("����");
		num = 3;
	}

	if (semester2)
	{
		option.push_back("�� �Ա�");
		option.push_back("�� �Ա�");
		num = 2;
	}


}
void Action::doAction(vector<string>&script, int selection, State &currentState, int& turn)
{
	if (semester1)
	{
		if (selection == 1)
		{
			script.push_back("���� ����~");
			currentState.changeStress(-1);
		}

		if (selection == 2)
		{
			script.push_back("ģ���� ���");
			currentState.changePopularity(3);
		}
	}


}