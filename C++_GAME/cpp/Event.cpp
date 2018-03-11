#include "Event.h"
#include "Script.h"
using namespace std;

bool Event::makeEvt(State& currnetState, int turn, int selection, vector<string>& script, string& evtName)
{
	addEvtscript();
	evtScript = script1[0];

	if (semester1)
	{
		
	}
}

bool Ending::makeEnding(State & currnetState, int selection, vector<string>& specialScript, vector<string>& normalScript, string & evtName)
{
	
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

