#pragma once
//Ŭ���� �̸�, �������, ��� �Լ� ����
#include <iostream>
#include <vector>
#include "Player.h"
#include "Event.h"

using namespace std;
//��������Լ�, ��ŷ����Լ�
//�ʿ��� ����: ��������
class Scoring
{
	//���� 
	int score;

public:
	//Scoring�� ���� �ʱ�ȭ
	Scoring();

	//��������Լ�(����ȿ���, �Ϲݿ���)
	void setScore(State& user , string endname);//�Ű�����: ��������, �޼��� ����ȿ��� �̸�
	void setScore(State& user, bool love, int endNum);//�Ű�����: ��������, �Ϲݿ��������� ���� ����(���ֽ� true), �޼��� ��ֿ��� ����

	//���� ȣ���Լ�
	int getScore();

};

class Rank
{
	string name;
	int rank;

public:


};