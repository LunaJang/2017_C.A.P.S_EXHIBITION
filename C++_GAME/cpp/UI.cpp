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
	cin.ignore(); //���� ����
	while (arrow != 13)

		do {

			for (int i = 0; i < num; i++)
			{
				if (i == cursor)

					cout << "��";

				else

					cout << "  ";
				cout << option[i]; // ������ ���
			}
			if (arrow == 224) // ����Ű �ƽ�Ű�ڵ� 

			{
				int getch();//����Ű�� �����ڸ��� �ν�, �������� ���������� �´� ��������� ��
				arrow = getch();
				switch (arrow) {
				case 72: //224 72 �Ʒ�
					if (cursor > 0)
					{
						cursor--;
					}
					break;
				case 80: //224 80 ��
					if (cursor < num - 1)
					{
						cursor++;
					}
					break;
				}
			}
		}
}

int printScript(vector<string>&scriptbox) //��ȭâ �ٹ̴°�
{
	cout << "����������������������������������������������������������������";



	cout << "����������������������������������������������������������������"; //

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

//�Լ��� �����, ���� �ٹ��ʿ� ����, �ܼ�â clear �ذ�, getch ��ó�Ұ� ã��, �����Ͻðڽ��ϱ� ����