#include "Event.h"

using namespace std;

string Event::makeEvt(State& currnetState, int turn, bool& alive)
{
	fr = fopen("test.txt", "r"); // 텍스트파일을 여는 것입니다.
		if (turn == 0)
		{
				while ((evtnum = fgetc(fr)) != EOF)
				{
					if (evtnum == '1번 스크립트') // 1번스크립트인지 확인
					{
						ungetc(evtnum, fr); 
						nof = ftell(fr); // 커서의 위치를 저장한다.
						if (evtnum == '2번 스크립트')
						{
							nol = ftell(fr) - nof; // 1번스크립트와 2번스크립트 사이의 글자수 저장
						}
					}
					fseek(fr, nof, SEEK_SET); // 커서를 1번스크립트 시작으로 옮긴다.
				}
				fgets(script, nol, SEEK_CUR); // 스크립트를 읽어온다 

				printf("%s\n", script); // 스크립트를 출력한다 (UI에서 하는데 테스트 용으로 넣어놈)
		}
		if (semester1)
		{
			if (semester1 && actnum == 1)
		{
			while ((evtnum = fgetc(fr)) != EOF)
			{
				if (evtnum == '2번 스크립트')
				{
					ungetc(evtnum, fr);
					ungetc(evtnum, fr);
					nof = ftell(fr);
					if (evtnum == '3번 스크립트')
					{
						nol = ftell(fr) - nof;
					}
				}
				fseek(fr, nof, SEEK_SET);
			}
			fgets(script, nol, SEEK_CUR);

			printf("%s\n", script);
		}
	}
}


void Action::makeAction(vector<string>& option, int& num) //선택지를 만드는 함수, 선택지와 그 선택지의 개수를 반환해준다.
{
	if() //조건에 따라서 선택지가 바뀐다면 if로 하면 될것 같아요
	{
		option.push_back("집에 가기");
		option.push_back("공부하기");
		option.push_back("술 마시기");
		num = 3;
	}
	else if () //
	{
		option.push_back("캡방 가기");
		option.push_back("술 마시기");
		option.push_back("술 마시기");
		option.push_back("술 마시기");
	}
}


void Action::doAction(vector<string>& sentence, int selction, State& currentState)
{
	if(selction ==1)
	{
		sentence.push_back("술을 마신당~");
		currentState.popularity
	}

}