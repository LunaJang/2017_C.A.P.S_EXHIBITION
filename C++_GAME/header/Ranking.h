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
	string getname();
	//���� ���
	int getscore();
};

//��ŷ�� ���� Ŭ����
class Rank
{
	//Data������ ����
	vector<Data> D_ranking;
	//String������ ����
	vector<string> S_ranking;

public:
	//������ ���� �߰��� ����
	Rank(string name, int score);
	//����ȭ�鿡�� ���� ��ŷǥ����
	Rank();


	//���ڿ��� ���ڷ�
	int to_number(string s);
	//���ڸ� ���ڿ�����
	string to_str(int x);
	//������ �о� Data Ÿ�� ���Ϳ� ����
	void inputRank();
	//���������� Data Ÿ�� ���Ϳ� ����
	void addUser(string name, int score);
	//Data Ÿ�� ���� ����
	void sorting();
	/*�׽�Ʈ�� �Լ�
	void print();*/
	//�޸��忡 ��ŷ����
	void outputRank();
	//String Ÿ�� ���Ϳ� ��������
	vector<string> saveToString();
};

//Data���Ŀ� �Լ�
bool cmp_Data(Data a, Data b);