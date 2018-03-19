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
			specialScript.push_back("�б� ���� �Ⱦ� ���");
			specialScript.push_back("");
			specialScript.push_back("");
			return true;
		}
		if (a == 1)
		{
			specialScript.push_back("���ֺ��� �հ����� ��� ���");
			specialScript.push_back("");
			specialScript.push_back("");
			return true;
		}
		if (a == 2)
		{
			specialScript.push_back("�ϼ����� �Ͽ� �ɷ� ���");
			specialScript.push_back("");
			specialScript.push_back("");
			return true;
		}
		if (a == 3)
		{
			specialScript.push_back("������ ���� ���");
			specialScript.push_back("");
			specialScript.push_back("");
			return true;
		}
		if (a == 4)
		{
			specialScript.push_back("ģ���� ���� ���");
			specialScript.push_back("");
			specialScript.push_back("");
			return true;
		}
		if (a == 5)
		{
			specialScript.push_back("�̺� ������ ���� ���");
			specialScript.push_back("");
			specialScript.push_back("");
			return true;
		}
	}
	if (turn == 10)
	{
		int a = 1;
		switch (a)
		{
		case 1:
		{
			if (currentState.getPopularity() < 20)
			{
				normalScript = Outside;
				endName = "Outside";
				a++;
			}
			a++;
		}
		case 2:	
		{
			if (currentState.getPopularity() > 70)
			{
				normalScript = Leader;
				endName = "Leader";
				a++;
			}
			a++;
		}
		case 3:
		{
			if (currentState.getGrade() > 4.2)
			{
				normalScript = Top;
				endName = "Top";
				a++;
			}
			a++;
		}
		case 4:
		{
			if (currentState.getLove() == true)
			{
				normalScript = Love;
				endName = "Love";
				a++;
			}
			a++;
		}
		case 5:
		{
			if (currentState.getLove() == false)
			{
				normalScript = Sole;
				endName = "Sole";
				a++;
			}
			a++;
		}
		case 6:
		{
			if (currentState.getStress() >= 4)
			{
				normalScript = Leave;
				endName = "Leave";
				a++;
			}
			a++;
		}
		case 7:
		{
			if (currentState.getStress() <= 2)
			{
				normalScript = Peace;
				endName = "Peace";
				a++;
			}
			a++;
		}
		case 8:
		{
			if (currentState.getTr() == true)
			{
				normalScript = Tr;
				endName = "Tr";
				a++;
			}
			a++;
		}
		case 9:
		{
			normalScript = Nomal;
			endName = "Nomal";
			return true;
			break;
		}
		}
	}

	
}


void Action::makeAction(vector<string>& script, int selection, State& currentState, int turn)
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

