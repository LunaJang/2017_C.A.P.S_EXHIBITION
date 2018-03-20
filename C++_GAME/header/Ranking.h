#pragma once
//클래스 이름, 멤버변수, 멤버 함수 정의
#include <iostream>
#include <vector>
#include "Player.h"
#include "Event.h"

using namespace std;
//점수계산함수, 랭킹계산함수
//필요한 변수: 최종점수
class Scoring
{
	//점수 
	int score;

public:
	//Scoring의 변수 초기화
	Scoring();

	//점수계산함수(스폐셜엔딩, 일반엔딩)
	void setScore(State& user , string endname);//매개변수: 유저스텟, 달성한 스폐셜엔딩 이름
	void setScore(State& user, bool love, int endNum);//매개변수: 유저스텟, 일반엔딩에서의 연애 여부(연애시 true), 달성한 노멀엔딩 개수

	//점수 호출함수
	int getScore();

};

class Rank
{
	string name;
	int rank;

public:


};