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