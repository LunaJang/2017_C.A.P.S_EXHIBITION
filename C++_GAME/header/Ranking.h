#pragma once
//클래스 이름, 멤버변수, 멤버 함수 정의
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include "Player.h"
#include "EvtActEnd.h"
#include "GameManager.h"

using namespace std;

//단순 점수계산 클래스
class Scoring
{
	//점수 
	int score;

public:
	//Scoring의 변수 초기화
	Scoring();

	//스폐셜엔딩시 점수계산
	void setScore(State& user , string endname);//매개변수: 유저스텟, 달성한 스폐셜엔딩 이름
	//노멀엔딩시 점수계산
	void setScore(State& user, int endNum);//매개변수: 유저스텟, 달성한 노멀엔딩 개수

	//점수 호출함수
	int getScore();
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
	string getname();
	//점수 출력
	int getscore();
};

//랭킹을 위한 클래스
class Rank
{
	//Data형식의 벡터
	vector<Data> D_ranking;
	//String형식의 벡터
	vector<string> S_ranking;

public:
	//유저의 점수 추가후 정렬
	Rank(string name, int score);
	//시작화면에서 현재 랭킹표보기
	Rank();


	//문자열을 숫자로
	int to_number(string s);
	//숫자를 문자열으로
	string to_str(int x);
	//파일을 읽어 Data 타입 벡터에 저장
	void inputRank();
	//유저정보를 Data 타입 벡터에 저장
	void addUser(string name, int score);
	//Data 타입 벡터 정렬
	void sorting();
	/*테스트용 함수
	void print();*/
	//메모장에 랭킹저장
	void outputRank();
	//String 타입 벡터에 정보저장
	vector<string> saveToString();
};

//Data정렬용 함수
bool cmp_Data(Data a, Data b);