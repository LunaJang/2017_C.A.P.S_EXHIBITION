#include<iostream>
#include<string>
#include"UI.h"
#include<vector>
#include<conio.h> //getch


using namespace std;



int printOption(vector<string>&option, int num)
{
	int cursor = 0;
	int arrow = NULL;
	cin.clear();
	cin.ignore(); //버퍼 비우기
	while (arrow != 13)

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

int printScript(vector<string>&scriptbox) //대화창 꾸미는거
{
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓";



	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛"; //

} //

void print(vector <string>&sentence, int num)
{
	num = 20;
	sentence.push_back(num);


}

void setValue(string& newString)
{
	cin >> newString;

}

//함수를 헤더로, 조금 꾸밀필요 있음, 콘솔창 clear 해결, getch 대처할것 찾기, 선택하시겠습니까 문구