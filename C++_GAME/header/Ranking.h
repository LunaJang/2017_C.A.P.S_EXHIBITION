#pragma once
#include "headers.h"

//Ŭ���� �̸�, �������, ��� �Լ� ����

using namespace std;

//�ܼ� ������� Ŭ����
class Scoring
{
public:
	//����ȿ����� �������
	void setScore(State& user , string endName);//�Ű�����: ��������, �޼��� ����ȿ��� �̸�
	//��ֿ����� �������
	void setScore(State& user, int endNum);//�Ű�����: ��������, �޼��� ��ֿ��� ����
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
class Ranking
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

