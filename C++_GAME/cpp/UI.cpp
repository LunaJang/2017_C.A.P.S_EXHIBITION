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

int printScript(vector<string>&scriptbox) //��ȭâ �ٹ̴°�
{
	while (1)
	{
		cout << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������";

		scriptbox.push_back();

		//���� 3�� ��� ���̿� �߰�

		cout << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������"; //32ĭ

	}
} //80ĭ ���� 80, �ѱ� 40 ���� 20��

void print(vector <string>&sentence)
{

	sentence.push_back(t);//��ó �����Ѱ� ���� num ��� �ڵ����� ���� �� �ִٰ� �ѵ�
	int arrow = NULL;
	if (arrow != 13)
	{
		return;

	}
	//��ȣ �� num=20�� �ʿ����� ���� �ϳ��� ��� ����ġ�� ������ �Լ��� �Ẹ�� �� ����
	//���� ġ�� �Ѿ���� ����
	//for�� , ����


}

void setValue(string& newString)
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