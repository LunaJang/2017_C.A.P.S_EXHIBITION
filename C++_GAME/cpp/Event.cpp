#include "Event.h"

using namespace std;

vector <string>& Event::makeEvt(State& currnetState, int& turn, bool& alive, int selection)
{
	if (semester1)
	{
		return script[0];
	}
}



void Action::makeAction(vector<string>&option, int& turn, int& num)
{
	if (semester1)
	{
		option.push_back("Áý¿¡ °¡±â");
		option.push_back("³î·¯ °¡±â");
		option.push_back("¸ô¶ó");
		num = 3;
	}

	if (semester2)
	{
		option.push_back("¼ú ¸Ô±â");
		option.push_back("¼ú ¸Ô±â");
		num = 2;
	}


}
void Action::doAction(vector<string>&script, int selection, State &currentState, int& turn)
{
	if (semester1)
	{
		if (selection == 1)
		{
			script.push_back("Áý¿¡ °£´ç~");
			currentState.changeStress(-1);
		}

		if (selection == 2)
		{
			script.push_back("Ä£±¸¶û ³í´Ù");
			currentState.changePopularity(3);
		}
	}


}