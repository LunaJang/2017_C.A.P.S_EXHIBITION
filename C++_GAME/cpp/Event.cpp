#include "Event.h"
#include "Script.h"
using namespace std;

bool Event::makeEvt(State& currnetState, int turn, int selection, vector<string>& script, string& evtName)
{
	
	evtScript = EvtScript[0];

	
}

bool Ending::makeEnding(State& currnetState, int selection, vector<string>& specialScript, vector<string>& normalScript, string& endName)
{
	if (monk && selection == 2)
	{
		specialScript = EndScript[0];
		endName = "Monk";
	}


}


void Action::makeAction(vector<string>& script, int selection, State& currentState)
{
		if (selection == 1)		//�����ϱ�
		{
			script = ActScript[0];
			currentState.changeGrade(0.4);
			currentState.changeStress(1);
		}

		if (selection == 2)		//������ ����
		{
			script = ActScript[1];
			currentState.changeStress(-1);
			currentState.changePopularity(-8);
		}
		if (selection == 3)		//ģ����� ���
		{
			script = ActScript[2];
			currentState.changePopularity(10);
			currentState.changeGrade(-0.3);
		}

}

