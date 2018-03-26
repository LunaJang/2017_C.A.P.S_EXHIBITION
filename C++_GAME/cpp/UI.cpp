#pragma once
#include "headers.h"

using namespace std;

// �ɼ� ���
void UI::printOption(vector<string>&option, int num, int& cursor)
{
	for (int i = 0; i < num; i++)
	{
		if (i == cursor) { cout << "  �� "; }

		else { cout << "    "; }

		cout << option[i] << endl; // ������ ���
	}
}

bool UI::changeCursor(int& cursor) {
	int arrow = getch();

	if (arrow == 13) {
		return false;
	}
	else if (arrow == 224) // ����Ű �ƽ�Ű�ڵ� 
	{
		arrow = getch();

		switch (arrow) {
		case 72: //224 72 �Ʒ�
			if (cursor > 0) { cursor--; }
			break;
		case 80: //224 80 ��
			if (cursor < 2) { cursor++; }
			break;
		}
	}
	return true;
}

// �ɼ� ���
int UI::printScript(int turn, string monthlyEvent, State& currentState, vector<string>&option, int num) //��ȭâ �ٹ̴°�
{
	int cursor = 0;
	int arrow = NULL;

	do
	{
		system("cls");
		cout << "[ " << turn << "�� ]" << endl;
		cout << "[ " << monthlyEvent << " ]" << endl << endl;

		cout << "������������������������������������������������������������������������������������" << endl << endl;
		cout << " ����\t\t" << currentState.getGrade() << " \t/ " << MAX_GRADE << endl;
		cout << " �α�\t\t" << currentState.getPopularity() << " \t/ " << MAX_POPULARITY << endl;
		cout << " ��Ʈ����\t" << currentState.getStress() << " \t/ " << MAX_STRESS << endl << endl;
		cout << "������������������������������������������������������������������������������������" << endl << endl;

		cout << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������" << endl << endl;
		printOption(option, num, cursor);
		cout << endl;
		cout << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������" << endl; //32ĭ

	} while (changeCursor(cursor));

	return cursor;

} //80ĭ ���� 80, �ѱ� 40 ���� 20��

// ��ũ��Ʈ ���
void UI::printScript(int turn, string monthlyEvent, State& currentState, vector<string>&script) //��ȭâ �ٹ̴°�
{
	// 3�پ� ��� ���� ����, print�� ���
	for(int i = 0; i< script.size()-1;i+=3)
	{
		system("cls");
		cout << "[ " << turn << "�� ]" << endl;
		cout << "[ " << monthlyEvent << " ]" << endl << endl;

		cout << "������������������������������������������������������������������������������������" << endl << endl;
		cout << " ����\t\t" << currentState.getGrade() << " \t/ " << MAX_GRADE << endl;
		cout << " �α�\t\t" << currentState.getPopularity() << " \t/ " << MAX_POPULARITY << endl;
		cout << " ��Ʈ����\t" << currentState.getStress() << " \t/ " << MAX_STRESS << endl << endl;
		cout << "������������������������������������������������������������������������������������" << endl << endl;

		cout << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������" << endl << endl;

		vector <string> currentSent;
		for (int j = 0; j < 3; j++) {
			currentSent.push_back(script[i+j]);
		}

		print(currentSent);

		cout << endl;
		cout << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������" << endl; //32ĭ
		
		//�ƹ�Ű�� �Է� ������ ���� ��������
		getch();
	}
} //80ĭ ���� 80, �ѱ� 40 ���� 20��

// printScript���� ���
void UI::print(vector <string>&sentence)
{
	//3�پ� ���
	for (int j = 0; j < 3; j++) {
		// ������ �׳� ����
		if (sentence[j] == "") {
			cout << endl;
		}
		else {
			cout << " " << sentence[j] << endl;
		}
	}
	return;
}

void UI::print(string& sentence) {
	cout << sentence << endl;
	return;
}