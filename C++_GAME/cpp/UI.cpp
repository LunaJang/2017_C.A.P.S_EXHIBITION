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
	// �̰� �� �ִ°���...?
	// �̰� ���⼭ ����ϴ°� �ƴѵ�;;
	cout << "�̸��� �Է��Ͻÿ�: ";
	char name[5];//�̸� �ʹ� ��� �ڸ��� ���� �޴����� ���� �Է��� ������ �̸� ��������
	cin >> name;
	cin.clear();
	cin.ignore();//���� ����

	cout << "���ӽ���\n";
	cout << "��ŷȮ��\n";
	cout << "����\n";

	while (arrow != 13)
	{


		//���ӽ���, ��ŷȮ��, ����, �ȳ���, �̸� 
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
}
//�� ������ �ذ� �ܾʵ�!!!!

int UI::printScript(vector<string>&scriptbox) //��ȭâ �ٹ̴°�
{
	//while (1)
	// 3�پ� ��� ���� ����, print�� ���
	for(int i = 0; i< scriptbox.size();i+=3)
	{
		cout << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������";

		vector <string> currentSent;
		for (int j = 0; j < 3; j++) {
			currentSent.push_back(scriptbox[i+j]);
		}
		print(currentSent);

		//���� 3�� ��� ���̿� �߰�

		cout << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������"; //32ĭ

	}
} //80ĭ ���� 80, �ѱ� 40 ���� 20��

void UI::print(vector <string>&sentence)
{
	//3�پ� ���
	for (int j = 0; j < 3; j++) {
		// ������ �׳� ����
		if (sentence[j] == "") {
			cout << endl;
		}
		else {
			cout << sentence[j] << endl;
		}
	}
	//�ƹ�Ű�� �Է��� ������ ����
	//getch();

	return;
	//��ȣ �� num=20�� �ʿ����� ���� �ϳ��� ��� ����ġ�� ������ �Լ��� �Ẹ�� �� ����
	//���� ġ�� �Ѿ���� ����
	//for�� , ����
}

void UI::print(string& sentence) {
	cout << sentence << endl;
	return;
}

void UI::setValue(string& newString)
{
	cin >> newString;
}



//�Լ��� �����, ���� �ٹ��ʿ� ����, getch ��ó�Ұ� ã��, �����Ͻðڽ��ϱ� ����
//��ũ��Ʈ ���� �� ��¥, �̸�ĭ �б�� ��
//���� ���Ҷ� �������ͽ�Ȯ��

int main()
{
	printOption;
	printScript;
	print;
}
//�迭�� vector�� ��ü 
//string vector ���Ƿ� �־ ����
//
