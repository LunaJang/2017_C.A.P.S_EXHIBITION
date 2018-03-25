#pragma once
//Ŭ���� �̸�, �������, ��� �Լ� ����
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

//�ܼ� ������� Ŭ����
class Scoring
{
	//���� 
	int score;

public:
	//Scoring�� ���� �ʱ�ȭ
	Scoring();

	//����ȿ����� �������
	void setScore(State& user , string endname);//�Ű�����: ��������, �޼��� ����ȿ��� �̸�
	//��ֿ����� �������
	void setScore(State& user, int endNum);//�Ű�����: ��������, �޼��� ��ֿ��� ����

	//���� ȣ���Լ�
	int getScore();
};

//���� �������� Ŭ����
class Data
{
	string name;
	int score;

public:
	//DataŬ������ ���� ����
	Data(string name, int score);
	//�̸� ���
	string getName();
	//���� ���
	int getScore();

	//Data���Ŀ� �Լ�
	bool operator<(Data& a);
	bool operator>(Data& a);
};

//��ŷ�� ���� Ŭ����
class Rank
{
public:
	//������ �о� Data Ÿ�� ���Ϳ� ����
	void readRank(vector<Data>& dRanking);
	//���������� Data Ÿ�� ���Ϳ� ����
	/*�׽�Ʈ�� �Լ�
	void print();*/
	//�޸��忡 ��ŷ����
	void writeRank(vector<Data>& dRanking);
	void getRank(vector<string>& sRanking, string name, int score);
	void getRank(vector<string>& sRanking);
};

