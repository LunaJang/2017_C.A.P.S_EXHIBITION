#pragma once

#include <Vector>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include "Player.h"

using namespace std;

vector <vector <string> > script1; // �̺�Ʈ��
vector <string> s1;
vector <vector <string> > Ending; // ������
vector <string> Monk;	//script2[0]
vector <string> s3;


void addEvtscript()
{
	s1.push_back("");

}


void addEndscript()
{
	Monk.push_back("�̺� �ӿ� ������");			//��ũ��Ʈ �ֱ� 0�� ����
	Monk.push_back("�� ���� ���� ������ ����� ����.");
	Monk.push_back("");

	Monk.push_back("");
	Monk.push_back("��OO ������ ������ ��𼱰� ����´�");
	Monk.push_back("");

	Monk.push_back("");
	Monk.push_back("��並 ü�� �Ͻÿ�");
	Monk.push_back("");

	Monk.push_back("���� ������ �����ƴ�!");
	Monk.push_back("��𼱰� �ı��� ��ģ��.");
	Monk.push_back("�� �ָ��� �� �ڳ����� ���� �θ��١�.");

	


	Ending.push_back(Monk);		
	
	



}