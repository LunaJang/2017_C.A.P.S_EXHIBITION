#pragma once
//Ŭ���� �̸�, �������, ��� �Լ� ����
#include <iostream>
#include <vector>
#include "Player.h"
#include "EvtActEnd.h"
#include "GameManager.h"

using namespace std;
//�������Ŭ����, ��ŷ���Ŭ����

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
	void setScore(State& user, int endNum);//�Ű�����: ��������, �Ϲݿ��������� ���� ����(���ֽ� true), �޼��� ��ֿ��� ����

	//���� ȣ���Լ�
	int getScore();
};



class Rank
{
	typedef struct
	{
		string name;
		int score;
	}Info;

public:
	Rank();

	setInfo()


};