#include "Event.h"
#include "Script.h"
using namespace std;

bool Event::makeEvt(State& currnetState, int turn, int selection, vector<string>& script, string& evtName)
{
	
	evtScript = script1[0];

	if (semester1)
	{
		
	}
}

bool Ending::makeEnding(State& currnetState, int selection, vector<string>& specialScript, vector<string>& normalScript, string& endName)
{
	if (monk && selection == 2)
	{
		specialScript = Ending[0];
		endName = "Monk";
	}


}


void Action::makeAction(State& currentState, vector <string>& actScript, int selection)
{
	if (semester1)
	{
		if (selection == 1)		//공부하기
		{
			actScript.push_back("캡방(원흥관 E265)에서 공부를 했다.");
			actScript.push_back("학점이 상승한 기분이 든다!");
			actScript.push_back("너무 열심히 했다… 좀 쉬고싶다…");
			currentState.changeGrade(0.4);
			currentState.changeStress(1);
		}

		if (selection == 2)		//집에서 쉬기
		{
			actScript.push_back("이불 밖은 위험해!");
			actScript.push_back("이런 게 바로 극락인 걸까?");
			actScript.push_back("왠지 친구들의 연락이 뜸해진 것 같지만…");
			currentState.changeStress(-1);
			currentState.changePopularity(-8);
		}
		if (selction == 3)		//친구들과 놀기
		{
			actScript.push_back("술파티다!!!!");
			actScript.push_back("연락처가 늘어났다!");
			actScript.push_back("아… 내일 강의는 어떻게 하지?");
			currentState.changePopularity(10);
			currentState.changeGrade(-0.3);
		}


	}
}

