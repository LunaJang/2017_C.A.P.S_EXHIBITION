#include "Event.h"

using namespace std;

bool Event::makeEvt(State& currentState, int turn, int selection, vector<string>& script, string& evtName)
{
	
	evtScript = EvtScript[0];

	
}

bool Ending::makeEnding(State& currentState, int selection, vector<string>& specialScript, vector<string>& normalScript, string& endName,int turn)
{
	srand(time(NULL));
	if (monk && selection == 2)
	{
		specialScript = EndScript[0];
		endName = "Monk";
		return true;
	}
	else if (breaklove)
	{
		specialScript = EndScript[1];
		endName = "Breaklove";
		return true;
	}
	else if (manyF)
	{
		specialScript = EndScript[2];
		endName = "ManyF";
		return true;
	}
	else if (nobelprize)
	{
		specialScript = EndScript[3];
		endName = "Nobelprize";
		return true;
	}
	else if (celeb)
	{
		specialScript = EndScript[4];
		endName = "Celeb";
		return true;
	}
	else if (die)
	{
		int a = rand() % 6;
		specialScript = EndScript[5];
		endName = "Die";
		if (a == 0)
		{
			specialScript.push_back("학교 가기 싫어 사망");
			specialScript.push_back("");
			specialScript.push_back("");
			return true;
		}
		if (a == 1)
		{
			specialScript.push_back("소주병에 손가락이 찔려 사망");
			specialScript.push_back("");
			specialScript.push_back("");
			return true;
		}
		if (a == 2)
		{
			specialScript.push_back("암세포가 암에 걸려 사망");
			specialScript.push_back("");
			specialScript.push_back("");
			return true;
		}
		if (a == 3)
		{
			specialScript.push_back("한조를 픽해 사망");
			specialScript.push_back("");
			specialScript.push_back("");
			return true;
		}
		if (a == 4)
		{
			specialScript.push_back("친구가 없어 사망");
			specialScript.push_back("");
			specialScript.push_back("");
			return true;
		}
		if (a == 5)
		{
			specialScript.push_back("이불 밖으로 나와 사망");
			specialScript.push_back("");
			specialScript.push_back("");
			return true;
		}
	}

	
}


void Action::makeAction(vector<string>& script, int selection, State& currentState, int turn)
{
		if (selection == 1)		//공부하기
		{
			script = ActScript[0];
			currentState.changeGrade(0.4);
			currentState.changeStress(1);
		}

		if (selection == 2)		//집에서 쉬기
		{
			script = ActScript[1];
			currentState.changeStress(-1);
			currentState.changePopularity(-8);
		}
		if (selection == 3)		//친구들과 놀기
		{
			script = ActScript[2];
			currentState.changePopularity(10);
			currentState.changeGrade(-0.3);
		}

}

