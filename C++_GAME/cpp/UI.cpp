#include<iostream>
#include<string>
#include"UI.h"
#include<vector>
#include<conio.h> //getch
#include <cstdlib> //system 빨간줄 뜨는 문제는 해결 안됨


using namespace std;



int printOption(vector<string>&option, int num)
{
	int cursor = 0;
	int arrow = NULL;
	system("cls");
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


void print(vector <string>&sentence, int num)
{
	num = 20;
	sentence.push_back(num);


}

void setValue(string& newString)
{
	cin >> newString;

}

//buffer 추후에 넣을 예정