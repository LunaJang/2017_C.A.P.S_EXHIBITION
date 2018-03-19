#include "Ranking.h"
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

Scoring::Scoring()
{
	Player user;
	name = user.getName();
	score = 0;
	PlayTime = 0;
}

void Scoring::setScore(State& user, double end)
{
	//학점 점수
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

	//스트레스 점수
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

	//인기도점수
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

	//엔딩점수
	{
		
	}
}

int Scoring::getScore()
{
	return score;
}