#pragma once
//Ŭ���� �̸�, �������, ��� �Լ� ����
#include <iostream>
#include <vector>
#include "Player.h"
#include "Event.h"

using namespace std;
//��������Լ�, ��ŷ����Լ�
//�ʿ��� ����: ��������, �̸�, 
class Scoring
{
	//��ŷ: �̸�, ����, �÷����� �ð�
	string name;
	int score;
	string PlayTime;

public:
	//Rank�� ���� �ʱ�ȭ
	Scoring();

	//��������Լ�
	void setScore(State& user ,double end);
	int getScore();

};