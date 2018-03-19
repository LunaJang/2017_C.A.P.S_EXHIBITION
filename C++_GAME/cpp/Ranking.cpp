#include "Ranking.h"
/*�Ϲݿ���: �⺻, �ƽ�, ����, ��ž, ����, �ַ�, ����, ��ȭ, ���� (�� 9��)
�ߵ�����: �̺�, ����, �а�, �뺧��, ����, ������ (��6��)
�Ϲݿ��� 1���� ���� 10 (���ָ� -10)
�ߵ������� �̺�100, �뺧��80/ ����60, �а�60, ����60/ ������0
����(����, ��Ʈ����, �α⵵)*/

/*����
1����: 1��
2����: 2��
3����: 3��
4����: 4��
4.5: 5��*/

/*��Ʈ����
5  : 0��
4-5: 1��
3-4: 2��
2-3: 3��
1-2: 4��
0-1: 5��
0  : 6��*/

/*�α⵵
0: 0��
1-20 : 1��
20-40: 2��
40-60: 3��
60-80: 4��
80-99: 5��
100:   6��
*/


using namespace std;

Scoring::Scoring()
{
	Player user;
	name = user.getName();
	score = 0;
	PlayTime = 0;
}

void Scoring::setScore(State& user, double end)
{
	//���� ����
	{
		if (user.getGrade() < 2)
			score = score + 1;
		else if (user.getGrade() >= 2 && user.getGrade() < 3)
			score = score + 2;
		else if (user.getGrade() >= 3 && user.getGrade() < 4)
			score = score + 3;
		else if (user.getGrade() >= 4 && user.getGrade() < 4.5)
			score = score + 4;
		else
			score = score + 5;
	}

	//��Ʈ���� ����
	{
		if (user.getStress() >= 4 && user.getStress() < 5)
			score = score + 1;
		else if (user.getStress() >= 3 && user.getStress() < 4)
			score = score + 2;
		else if (user.getStress() >= 2 && user.getStress() < 3)
			score = score + 3;
		else if (user.getStress() >= 1 && user.getStress() < 2)
			score = score + 4;
		else if (user.getStress() > 0 && user.getStress() < 1)
			score = score + 5;
		else
			score = score + 6;
	}

	//�α⵵����
	{
		if (user.getPopularity() >= 1 && user.getPopularity() < 20)
			score = score + 1;
		else if (user.getPopularity() >= 20 && user.getPopularity() < 40)
			score = score + 2;
		else if (user.getPopularity() >= 40 && user.getPopularity() < 60)
			score = score + 3;
		else if (user.getPopularity() >= 60 && user.getPopularity() < 80)
			score = score + 4;
		else if (user.getPopularity() >= 80 && user.getPopularity() < 100)
			score = score + 5;
		else
			score = score + 6;
	}

	//��������
	{
		
	}
}

int Scoring::getScore()
{
	return score;
}