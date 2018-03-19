#pragma once
//클래스 이름, 멤버변수, 멤버 함수 정의
#include <iostream>
#include <vector>
#include "Player.h"
#include "Event.h"

using namespace std;
//점수계산함수, 랭킹계산함수
//필요한 변수: 최종점수, 이름, 
class Scoring
{
	//랭킹: 이름, 점수, 플레이한 시간
	string name;
	int score;
	string PlayTime;

public:
	//Rank의 변수 초기화
	Scoring();

	//점수계산함수
	void setScore(State& user ,double end);
	int getScore();

};