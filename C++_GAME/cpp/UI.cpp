#include"UI.h"

using namespace std;

static void setValue(string& newString) {
	cin >> newString;
}

// 옵션 출력
int UI::printOption(vector<string>&option, int num, int& cursor)
{
	for (int i = 0; i < num; i++)
	{
		if (i == cursor) { cout << "  ▶ "; }

		else { cout << "    "; }

		cout << option[i]; // 선택지 출력
	}
}

bool UI::changeCursor(int& cursor) {
	int arrow = getch();

	if (arrow == 13) {
		return false;
	}
	else if (arrow == 224) // 방향키 아스키코드 
	{
		arrow = getch();

		switch (arrow) {
		case 72: //224 72 아래
			if (cursor > 0) { cursor--; }
			break;
		case 80: //224 80 위
			if (cursor < 2) { cursor++; }
			break;
		}
	}
	return true;
}

// 옵션 출력
int UI::printScript(int turn, string monthlyEvent, State& currentState, vector<string>&option, int num) //대화창 꾸미는거
{
	int cursor = 0;
	int arrow = NULL;

	do
	{
		cout << "[ " << turn + 1 << "월 ]" << endl;
		cout << "[ " << monthlyEvent << " ]" << endl << endl;

		cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
		cout << " 학점\t" << currentState.getGrade() << " \t/ " << MAX_GRADE;
		cout << " 인기\t" << currentState.getPopularity() << " \t/ " << MAX_POPULARITY;
		cout << " 인기\t" << currentState.getStress() << " \t/ " << MAX_STRESS;
		cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl << endl;

		cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓";
		printOption(option, num, cursor);
		cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛"; //32칸

	} while (changeCursor(cursor));

	return cursor;

} //80칸 영어 80, 한글 40 높이 20줄

// 스크립트 출력
void UI::printScript(int turn, string monthlyEvent, State& currentState, vector<string>&scriptbox) //대화창 꾸미는거
{
	system("cls");
	// 3줄씩 끊어서 벡터 생성, print로 출력
	for(int i = 0; i< scriptbox.size();i+=3)
	{
		cout << "[ " << turn + 1 << "월 ]" << endl;
		cout << "[ " << monthlyEvent << " ]" << endl << endl;

		cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
		cout << " 학점\t" << currentState.getGrade() << " \t/ " << MAX_GRADE;
		cout << " 인기\t" << currentState.getPopularity() << " \t/ " << MAX_POPULARITY;
		cout << " 스트레스\t" << currentState.getStress() << " \t/ " << MAX_STRESS;
		cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl << endl;

		cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;

		vector <string> currentSent;
		for (int j = 0; j < 3; j++) {
			currentSent.push_back(scriptbox[i+j]);
		}

		print(currentSent);

		cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl; //32칸
		
		//아무키나 입력 들어오면 다음 페이지로
		getch();
	}
} //80칸 영어 80, 한글 40 높이 20줄

// printScript에서 출력
void UI::print(vector <string>&sentence)
{
	//3줄씩 출력
	for (int j = 0; j < 3; j++) {
		// 빈줄은 그냥 엔터
		if (sentence[j] == "") {
			cout << endl;
		}
		else {
			cout << sentence[j] << endl;
		}
	}
	return;
}

void UI::print(string& sentence) {
	cout << sentence << endl;
	return;
}