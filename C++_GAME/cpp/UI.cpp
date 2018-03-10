
#include"UI.h"//getch

using namespace std;

// �ɼ� ���
int UI::printOption(vector<string>&option, int num, int& cursor)
{
	int arrow = NULL;

	for (int i = 0; i < num; i++)
	{
		if (i == cursor) { cout << "  ��"; }

		else { cout << "    "; }

		cout << option[i]; // ������ ���
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
		cout << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		arrow = printOption(option, num, cursor);
		cout << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������"; //32ĭ

	} while (changeCursor(cursor));

	return cursor;

} //80ĭ ���� 80, �ѱ� 40 ���� 20��

// ��ũ��Ʈ ���
void UI::printScript(int turn, string monthlyEvent, State& currentState, vector<string>&scriptbox) //��ȭâ �ٹ̴°�
{
	// 3�پ� ��� ���� ����, print�� ���
	for(int i = 0; i< scriptbox.size();i+=3)
	{
		cout << "[ " << turn + 1 << "�� ]" << endl;
		cout << "[ " << monthlyEvent << " ]" << endl << endl;

		cout << "��������������������������������������������������������" << endl;
		cout << " ����\t" << currentState.
		cout << "��������������������������������������������������������" << endl;

		cout << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������" << endl;

		vector <string> currentSent;
		for (int j = 0; j < 3; j++) {
			currentSent.push_back(scriptbox[i+j]);
		}

		print(currentSent);

		cout << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������" << endl; //32ĭ
		
		//�ƹ�Ű�� �Է� ������ ���� ��������
		getch();
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
	return;
}

void UI::print(string& sentence) {
	cout << sentence << endl;
	return;
}

void UI::setValue(string& newString)
{
	cin >> newString;
	return;
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
