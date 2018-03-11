#pragma once

#include <Vector>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include "Player.h"

using namespace std;

vector <vector <string> > script1; // 이벤트용
vector <string> s1;
vector <vector <string> > Ending; // 엔딩용
vector <string> Monk;	//script2[0]
vector <string> s3;


void addEvtscript()
{
	s1.push_back("");

}


void addEndscript()
{
	Monk.push_back("이불 속에 있으니");			//스크립트 넣기 0번 스님
	Monk.push_back("내 마음 속의 번뇌가 사라져 간다.");
	Monk.push_back("");

	Monk.push_back("");
	Monk.push_back("젠OO 스님의 말씀이 어디선가 들려온다");
	Monk.push_back("");

	Monk.push_back("");
	Monk.push_back("고요를 체험 하시오");
	Monk.push_back("");

	Monk.push_back("나는 진리를 깨우쳤다!");
	Monk.push_back("어디선가 후광이 비친다.");
	Monk.push_back("저 멀리서 흰 코끼리가 나를 부른다….");

	


	Ending.push_back(Monk);		
	
	



}