#pragma once
#include "headers.h"

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

// ����� ���� ���� ���
void Scoring::setScore(State& currentState, string endName)
{
	int score = 0;
	//���� ����
	{
		if (currentState.getGrade() < 2)
			score += 1;
		else if (currentState.getGrade() == 4.5)
			score += 5;
		else
			score += currentState.getGrade();
	}
	//��Ʈ���� ����
	{
		if (currentState.getStress() >= 4 && currentState.getStress() < 5)
			score = score + 1;
		else if (currentState.getStress() >= 3 && currentState.getStress() < 4)
			score = score + 2;
		else if (currentState.getStress() >= 2 && currentState.getStress() < 3)
			score = score + 3;
		else if (currentState.getStress() >= 1 && currentState.getStress() < 2)
			score = score + 4;
		else if (currentState.getStress() > 0 && currentState.getStress() < 1)
			score = score + 5;
		else
			score = score + 6;
	}
	//�α⵵����
	{
		if (currentState.getPopularity() >= 1 && currentState.getPopularity() < 20)
			score = score + 1;
		else if (currentState.getPopularity() >= 20 && currentState.getPopularity() < 40)
			score = score + 2;
		else if (currentState.getPopularity() >= 40 && currentState.getPopularity() < 60)
			score = score + 3;
		else if (currentState.getPopularity() >= 60 && currentState.getPopularity() < 80)
			score = score + 4;
		else if (currentState.getPopularity() >= 80 && currentState.getPopularity() < 100)
			score = score + 5;
		else
			score = score + 6;
	}
	
		//����ȿ���(������� 0��)
	{
		if (endName == "Breaklove")
			score += 100;
		else if (endName == "Nobelprize")
			score += 80;
		else if (endName == "Monk" || endName == "ManyF" || endName == "Celeb")
			score += 60;
	}
	currentState.setScore(score);
}
// �븻 ���� ���� ���
void Scoring::setScore(State& currentState, int endNum)
{
	int score = 0;
	//���� ����
	{
		if (currentState.getGrade() < 2)
			score = score + 1;
		else if (currentState.getGrade() >= 2 && currentState.getGrade() < 3)
			score = score + 2;
		else if (currentState.getGrade() >= 3 && currentState.getGrade() < 4)
			score = score + 3;
		else if (currentState.getGrade() >= 4 && currentState.getGrade() < 4.5)
			score = score + 4;
		else
			score = score + 5;
	}
	//��Ʈ���� ����
	{
		if (currentState.getStress() >= 4 && currentState.getStress() < 5)
			score += 1;
		else if (currentState.getStress() >= 3 && currentState.getStress() < 4)
			score += 2;
		else if (currentState.getStress() >= 2 && currentState.getStress() < 3)
			score += 3;
		else if (currentState.getStress() >= 1 && currentState.getStress() < 2)
			score += 4;
		else if (currentState.getStress() > 0 && currentState.getStress() < 1)
			score += 5;
		else
			score += 6;
	}
	//�α⵵����
	{
		if (currentState.getPopularity() >= 1 && currentState.getPopularity() < 20)
			score = score + 1;
		else if (currentState.getPopularity() >= 20 && currentState.getPopularity() < 40)
			score = score + 2;
		else if (currentState.getPopularity() >= 40 && currentState.getPopularity() < 60)
			score = score + 3;
		else if (currentState.getPopularity() >= 60 && currentState.getPopularity() < 80)
			score = score + 4;
		else if (currentState.getPopularity() >= 80 && currentState.getPopularity() < 100)
			score = score + 5;
		else
			score = score + 6;
	}

	//�Ϲݿ���
	{
		score = score + endNum * 10;
	}
	currentState.setScore(score);
}



Data::Data(string name, int score)
{
	this->name = name;
	this->score = score;
}
string Data::getName()
{
	return name;
}
int Data::getScore()
{
	return score;
}
bool Data::operator<(Data& a) {
	return this->score < a.score;
}
bool Data::operator>(Data& a) {
	return this->score > a.score;
}

void Ranking::readRank(vector<Data>& dRanking)
{
	ifstream in;
	in.open("rank.txt");
	string iname;
	string iscore;
	int count = 1;
	dRanking.clear();

	if (in.is_open())
	{
		while (!in.eof())
		{
			if (count % 2 == 1)
			{
				getline(in, iname);
				count++;
			}
			else
			{
				getline(in, iscore);
				count++;
				Data info(iname, stoi(iscore));
				dRanking.push_back(info);
			}
		}
	}
}

void Ranking::writeRank(vector<Data>& dRanking)
{
	ofstream out;
	out.open("rank.txt");
	if (out.is_open())
		for (int i = 0; i < dRanking.size(); i++)
			out << dRanking[i].getName() << endl << dRanking[i].getScore() << endl;

}

void Ranking::getRank(vector<string>& sRanking, string name, int score)
{
	vector<Data> dRanking;
	readRank(dRanking);
	Data UserInfo(name, score);
	dRanking.push_back(UserInfo);
	sort(dRanking.begin(), dRanking.end());

	for (int i = 1; i <= dRanking.size(); ++i)
	{
		string line;
		line.append( i + "�� " + dRanking[i].getName() + "\n" + to_string(dRanking[i].getScore()) + "\n");
		sRanking.push_back(line);
	}
	return;
}

void Ranking::getRank(vector<string>& sRanking)
{
	vector<Data> dRanking;
	readRank(dRanking);

	for (int i = 1; i <= dRanking.size(); ++i)
	{
		string line;
		line.append(i + "�� " + dRanking[i].getName() + "\n" + to_string(dRanking[i].getScore()) + "\n");
		sRanking.push_back(line);
	}
	return;
}