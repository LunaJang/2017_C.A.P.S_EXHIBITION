#pragma once
#define WAITING_TIME 100

class UI {
public:
	// option ���, �迭�� ũ��� num�� ����
	static int printOption(vector<string>&option, int num);

	// sentence ���, �迭�� ũ��� num�� ����
	// �Լ� ���� �� �ܼ� â clear
	static void print(vector <string>&sentence);

	// ����ڷκ��� string ���� �޾ƿ� ��ȯ, ��µǴ� ���� ����
	// �ַ� �̸����� � ����
	// �Է°����� ���ڿ��� ���� �����ؾ���
	static void setValue(string& newString); // 

	static int printScript(vector<string>&scriptbox);
};
