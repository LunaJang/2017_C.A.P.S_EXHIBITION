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
		if (selection == 1)		//�����ϱ�
		{
			actScript.push_back("ĸ��(����� E265)���� ���θ� �ߴ�.");
			actScript.push_back("������ ����� ����� ���!");
			actScript.push_back("�ʹ� ������ �ߴ١� �� ����ʹ١�");
			currentState.changeGrade(0.4);
			currentState.changeStress(1);
		}

		if (selection == 2)		//������ ����
		{
			actScript.push_back("�̺� ���� ������!");
			actScript.push_back("�̷� �� �ٷ� �ض��� �ɱ�?");
			actScript.push_back("���� ģ������ ������ ������ �� ��������");
			currentState.changeStress(-1);
			currentState.changePopularity(-8);
		}
		if (selction == 3)		//ģ����� ���
		{
			actScript.push_back("����Ƽ��!!!!");
			actScript.push_back("����ó�� �þ��!");
			actScript.push_back("�ơ� ���� ���Ǵ� ��� ����?");
			currentState.changePopularity(10);
			currentState.changeGrade(-0.3);
		}


	}
}

