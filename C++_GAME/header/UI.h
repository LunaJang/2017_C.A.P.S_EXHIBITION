#pragma once
#define WAITING_TIME 100

class UI {
public:
	// option ���, �迭�� ũ��� num�� ����
	static int printOption(string option[], int num);

	// sentence ���, �迭�� ũ��� num�� ����
	// �Լ� ���� �� �ܼ� â clear
	static void print(string sentence[], int num);

	// ����ڷκ��� string ���� �޾ƿ� ��ȯ, ��µǴ� ���� ����
	// �ַ� �̸����� � ����
	// �Է°����� ���ڿ��� ���� �����ؾ���
	static void setValue(string& newString); // 
};