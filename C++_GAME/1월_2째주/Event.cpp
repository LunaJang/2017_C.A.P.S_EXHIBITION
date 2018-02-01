#include "Event.h"

using namespace std;

string Event::makeEvt(State& currnetState, int turn, bool& alive)
{
	fr = fopen("test.txt", "r");
	if (semester1)
	{
		if (turn == 0)
		{
				while ((evtnum = fgetc(fr)) != EOF)
				{
					if (evtnum == '1번 스크립트')
					{
						ungetc(evtnum, fr);
						nof = ftell(fr);
						if (evtnum == '2번 스크립트')
						{
							nol = ftell(fr) - nof;
						}
					}
					fseek(fr, nof, SEEK_SET);
				}
				fgets(script, nol, SEEK_CUR);

				printf("%s\n", script);
		}
		if (semester1 && actnum == 1)
		{
			while ((evtnum = fgetc(fr)) != EOF)
			{
				if (evtnum == '2번 스크립트')
				{
					ungetc(evtnum, fr);
					ungetc(evtnum, fr);
					nof = ftell(fr);
					if (evtnum == '2번 스크립트')
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