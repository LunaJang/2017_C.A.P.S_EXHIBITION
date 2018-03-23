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
	score = 0;
}

void Scoring::setScore(State& user, string endname)
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
	
		//����ȿ���(������� 0��)
	{
		if (endname == "Breaklove")
			score = score + 100;
		else if (endname == "Nobelprize")
			score = score + 80;
		else if (endname == "Monk" || endname == "ManyF" || endname == "Celeb")
			score = score + 60;
		else if (endname == "Die")
			score = score;
	}
}

void Scoring::setScore(State& user, int endNum)
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

	//�Ϲݿ���
	{
		score = score + endNum * 10;
	}
}

int Scoring::getScore()
{
	return score;
}

Data::Data(string name, int score)
{
	this->name = name;
	this->score = score;
}

string Data::getname()
{
	return name;
}

int Data::getscore()
{
	return score;
}

int Rank::to_number(string s)
{
	istringstream ss(s);
	int x;
	ss >> x;
	return x;
}

string Rank::to_str(int x)
{
	ostringstream ss;
	ss << x;
	return ss.str();
}

void Rank::inputRank()
{
	ifstream in;
	in.open("rank.txt");
	string iname;
	string iscore;
	int count = 1;
	D_ranking.clear();

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
				Data info(iname, to_number(iscore));
				D_ranking.push_back(info);
			}
		}
	}
}

bool cmp_Data(Data a, Data b)
{
	return a.getscore() > b.getscore();
}

void Rank::addUser(string name, int score)
{

	Data UserInfo(name, score);
	D_ranking.push_back(UserInfo);
}

void Rank::sorting()
{
	sort(D_ranking.begin(), D_ranking.end(), cmp_Data);
}

//void Rank::print()
//{
//	for (int i = 0; i < S_ranking.size(); i++)
//		cout << S_ranking[i];
//}

void Rank::outputRank()
{
	ofstream out;
	out.open("rank.txt");
	if (out.is_open())
		for (int i = 0; i < D_ranking.size(); i++)
			out << D_ranking[i].getname() << endl << D_ranking[i].getscore() << endl;

}

vector<string> Rank::saveToString()
{
	S_ranking.clear();
	for (int i = 0; i < D_ranking.size(); ++i)
	{
		string line;
		line.append(to_str(i + 1) + "�� " + D_ranking[i].getname() + " " + to_str(D_ranking[i].getscore()) + "\n");
		S_ranking.push_back(line);
	}
	return S_ranking;
}

Rank::Rank(string name, int score)
{
	inputRank();
	addUser(name, score);
	sorting();
	outputRank();
	saveToString();
}

Rank::Rank()
{
	inputRank();
	saveToString();
}
