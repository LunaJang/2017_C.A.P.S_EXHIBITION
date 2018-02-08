#pragma once
#define WAITING_TIME 100

class UI {
public:
	// option 출력, 배열의 크기는 num에 저장
	static int printOption(string option[], int num);

	// sentence 출력, 배열의 크기는 num에 저장
	// 함수 시작 시 콘솔 창 clear
	static void print(string sentence[], int num);

	// 사용자로부터 string 값을 받아와 반환, 출력되는 것은 없음
	// 주로 이름설정 등에 사용됨
	// 입력가능한 문자열의 길이 제한해야함
	static void setValue(string& newString); // 
};