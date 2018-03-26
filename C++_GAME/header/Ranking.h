#pragma once
#include "headers.h"

//클래스 이름, 멤버변수, 멤버 함수 정의

using namespace std;

//단순 점수계산 클래스
class Scoring
{
public:
	//스폐셜엔딩시 점수계산
	void setScore(State& user , string endName);//매개변수: 유저스텟, 달성한 스폐셜엔딩 이름
	//노멀엔딩시 점수계산
	void setScore(State& user, int endNum);//매개변수: 유저스텟, 달성한 노멀엔딩 개수
};

//유저 정보저장 클래스
class Data
{
	string name;
	int score;

public:
	//Data클래스의 변수 변경
	Data(string name, int score);
	//이름 출력
	string getName();
	//점수 출력
	int getScore();

	//Data정렬용 함수
	bool operator<(Data& a);
	bool operator>(Data& a);
};

//랭킹을 위한 클래스
class Ranking
{
public:
	//파일을 읽어 Data 타입 벡터에 저장
	void readRank(vector<Data>& dRanking);
	//유저정보를 Data 타입 벡터에 저장
	/*테스트용 함수
	void print();*/
	//메모장에 랭킹저장
	void writeRank(vector<Data>& dRanking);
	void getRank(vector<string>& sRanking, string name, int score);
	void getRank(vector<string>& sRanking);
};

