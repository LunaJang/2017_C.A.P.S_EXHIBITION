#include "Event.h"

using namespace std;

string Event::makeEvt(State& currnetState, int turn, bool& alive)
{
	fr = fopen("test.txt", "r"); // �ؽ�Ʈ������ ���� ���Դϴ�.
		if (turn == 0)
		{
				while ((evtnum = fgetc(fr)) != EOF)
				{
					if (evtnum == '1�� ��ũ��Ʈ') // 1����ũ��Ʈ���� Ȯ��
					{
						ungetc(evtnum, fr); 
						nof = ftell(fr); // Ŀ���� ��ġ�� �����Ѵ�.
						if (evtnum == '2�� ��ũ��Ʈ')
						{
							nol = ftell(fr) - nof; // 1����ũ��Ʈ�� 2����ũ��Ʈ ������ ���ڼ� ����
						}
					}
					fseek(fr, nof, SEEK_SET); // Ŀ���� 1����ũ��Ʈ �������� �ű��.
				}
				fgets(script, nol, SEEK_CUR); // ��ũ��Ʈ�� �о�´� 

				printf("%s\n", script); // ��ũ��Ʈ�� ����Ѵ� (UI���� �ϴµ� �׽�Ʈ ������ �־��)
		}
		if (semester1)
		{
			if (semester1 && actnum == 1)
		{
			while ((evtnum = fgetc(fr)) != EOF)
			{
				if (evtnum == '2�� ��ũ��Ʈ')
				{
					ungetc(evtnum, fr);
					ungetc(evtnum, fr);
					nof = ftell(fr);
					if (evtnum == '3�� ��ũ��Ʈ')
					{
						nol = ftell(fr) - nof;
					}
				}
				fseek(fr, nof, SEEK_SET);
			}
			fgets(script, nol, SEEK_CUR);

			printf("%s\n", script);
		}
	}
}


void Action::makeAction(vector<string>& option, int& num) //�������� ����� �Լ�, �������� �� �������� ������ ��ȯ���ش�.
{
	if() //���ǿ� ���� �������� �ٲ�ٸ� if�� �ϸ� �ɰ� ���ƿ�
	{
		option.push_back("���� ����");
		option.push_back("�����ϱ�");
		option.push_back("�� ���ñ�");
		num = 3;
	}
	else if () //
	{
		option.push_back("ĸ�� ����");
		option.push_back("�� ���ñ�");
		option.push_back("�� ���ñ�");
		option.push_back("�� ���ñ�");
	}
}


void Action::doAction(vector<string>& sentence, int selction, State& currentState)
{
	if(selction ==1)
	{
		sentence.push_back("���� ���Ŵ�~");
		currentState.popularity
	}

}