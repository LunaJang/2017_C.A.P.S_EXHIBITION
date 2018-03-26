#pragma once
#include "headers.h"

/*일반엔딩: 기본, 아싸, 과대, 과탑, 연인, 솔로, 휴학, 평화, 찍힘 (총 9개)
중도엔딩: 이별, 열반, 학고, 노벨상, 데뷔, 돌연사 (총6개)
일반엔딩 1개당 점수 10 (연애만 -10)
중도엔딩중 이별100, 노벨상80/ 열반60, 학고60, 데뷔60/ 돌연사0
스텟(학점, 스트레스, 인기도)*/

/*학점
1점대: 1점
2점대: 2점
3점대: 3점
4점대: 4점
4.5: 5점*/

/*스트레스
5  : 0점
4-5: 1점
3-4: 2점
2-3: 3점
1-2: 4점
0-1: 5점
0  : 6점*/

/*인기도
0: 0점
1-20 : 1점
20-40: 2점
40-60: 3점
60-80: 4점
80-99: 5점
100:   6점
*/

using namespace std;

// 스페셜 엔딩 점수 계산
void Scoring::setScore(State& currentState, string endName)
{
	int score = 0;
	//학점 점수
	{
		if (currentState.getGrade() < 2)
			score += 1;
		else if (currentState.getGrade() == 4.5)
			score += 5;
		else
			score += currentState.getGrade();
	}
	//스트레스 점수
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
	//인기도점수
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
	
		//스폐셜엔딩(돌연사는 0점)
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
// 노말 엔딩 점수 계산
void Scoring::setScore(State& currentState, int endNum)
{
	int score = 0;
	//학점 점수
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
	//스트레스 점수
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
	//인기도점수
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

	//일반엔딩
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
		line.append( i + "등 " + dRanking[i].getName() + "\n" + to_string(dRanking[i].getScore()) + "\n");
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
		line.append(i + "등 " + dRanking[i].getName() + "\n" + to_string(dRanking[i].getScore()) + "\n");
		sRanking.push_back(line);
	}
	return;
}