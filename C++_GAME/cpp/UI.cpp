#include<iostream>
#include<string>
#include"UI.h"
#include<vector>
#include<conio.h> //getch


using namespace std;



int UI::printOption(vector<string>&option, int num)
{
	int cursor = 0;
	int arrow = NULL;
	// 이건 왜 있는건지...?
	// 이건 여기서 출력하는게 아닌데;;
	cout << "이름을 입력하시오: ";
	char name[5];//이름 너무 길면 자른다 게임 메니저에 성별 입력이 있을것 이름 여섯글자
	cin >> name;
	cin.clear();
	cin.ignore();//버퍼 비우기

	cout << "게임시작\n";
	cout << "랭킹확인\n";
	cout << "종료\n";

	while (arrow != 13)
	{


		//게임시작, 랭킹확인, 종료, 안내문, 이름 
		do {

			for (int i = 0; i < num; i++)
			{
				if (i == cursor)

					cout << "▶";

				else

					cout << "  ";
				cout << option[i]; // 선택지 출력
			}
			if (arrow == 224) // 방향키 아스키코드 

			{
				int getch();//방향키를 누르자마자 인식, 빨간줄은 없어졌으나 맞는 방법인지는 모름
				arrow = getch();
				switch (arrow) {
				case 72: //224 72 아래
					if (cursor > 0)
					{
						cursor--;
					}
					break;
				case 80: //224 80 위
					if (cursor < num - 1)
					{
						cursor++;
					}
					break;
				}
			}
		}

	}
}
//이 빨간줄 해결 외않되!!!!

int UI::printScript(vector<string>&scriptbox) //대화창 꾸미는거
{
	//while (1)
	// 3줄씩 끊어서 벡터 생성, print로 출력
	for(int i = 0; i< scriptbox.size();i+=3)
	{
		cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓";

		vector <string> currentSent;
		for (int j = 0; j < 3; j++) {
			currentSent.push_back(scriptbox[i+j]);
		}
		print(currentSent);

		//문장 3줄 띠움 사이에 추가

		cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛"; //32칸

	}
} //80칸 영어 80, 한글 40 높이 20줄

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
	//아무키나 입력이 들어오면 종료
	//getch();

	return;
	//괄호 안 num=20은 필요하지 않음 하나씩 출력 엔터치면 돌리는 함수를 써보기 옵 참고
	//엔터 치면 넘어가도록 설정
	//for문 , 리턴
}

void UI::print(string& sentence) {
	cout << sentence << endl;
	return;
}

void UI::setValue(string& newString)
{
	cin >> newString;
}



//함수를 헤더로, 조금 꾸밀필요 있음, getch 대처할것 찾기, 선택하시겠습니까 문구
//스크립트 왼쪽 위 날짜, 이름칸 학기랑 월
//할일 정할때 스테이터스확인

int main()
{
	printOption;
	printScript;
	print;
}
//배열을 vector로 교체 
//string vector 임의로 넣어서 실험
//
