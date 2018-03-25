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
int Scoring::getScore()
{
	return score;
}
// ����� ���� ���� ���
void Scoring::setScore(State& user, string endname)
{
	//���� ����
	{
		if (user.getGrade() < 2)
			score += 1;
		else if (user.getGrade() == 4.5)
			score += 5;
		else
			score += user.getGrade();
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
			score += 100;
		else if (endname == "Nobelprize")
			score += 80;
		else if (endname == "Monk" || endname == "ManyF" || endname == "Celeb")
			score += 60;
	}
}
// �븻 ���� ���� ���
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
			score += 1;
		else if (user.getStress() >= 3 && user.getStress() < 4)
			score += 2;
		else if (user.getStress() >= 2 && user.getStress() < 3)
			score += 3;
		else if (user.getStress() >= 1 && user.getStress() < 2)
			score += 4;
		else if (user.getStress() > 0 && user.getStress() < 1)
			score += 5;
		else
			score += 6;
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

/*int Rank::to_number(string s)
{
	istringstream ss(s);
	int x;
	ss >> x;
	return x;
}*/
/*string Rank::to_str(int x)
{
	ostringstream ss;
	ss << x;
	return ss.str();
}*/
void Rank::readRank(vector<Data>& dRanking)
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

void Rank::writeRank(vector<Data>& dRanking)
{
	ofstream out;
	out.open("rank.txt");
	if (out.is_open())
		for (int i = 0; i < dRanking.size(); i++)
			out << dRanking[i].getName() << endl << dRanking[i].getScore() << endl;

}

void Rank::getRank(vector<string>& sRanking, string name, int score)
{
	vector<Data> dRanking;
	vector<string> s_ranking;

	readRank(dRanking);
	Data UserInfo(name, score);
	dRanking.push_back(UserInfo);
	sort(dRanking.begin(), dRanking.end());

	s_ranking.clear();

	for (int i = 1; i <= dRanking.size(); ++i)
	{
		string line;
		line.append( i + "�� " + dRanking[i].getName() + "\n" + to_string(dRanking[i].getscore()) + "\n");
		s_ranking.push_back(line);
	}
}

void::getRank(vector<string>& sRanking)
{
	for (int i = 1; i <= D_ranking.size(); ++i)
	{
		string line;
		line.append(i + "�� " + D_ranking[i].getname() + "\n" + to_string(D_ranking[i].getscore()) + "\n");
		S_ranking.push_back(line);
	}
	return S_ranking;
}

Rank::Rank(string name, int score)
{
	readRank();
	addUser(name, score);
	sorting();
	writeRank();
	saveToString();
}

Rank::Rank()
{
	readRank();
	saveToString();
}
