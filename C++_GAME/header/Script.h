#pragma once

#include <Vector>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include "Player.h"

using namespace std;

vector <vector <string> > EvtScript; // �̺�Ʈ��
vector <string> Fixed3;
vector <string> Fixed4;
vector <string> Fixed5;
vector <string> Fixed61; // 6-����
vector <string> Fixed62; // 6-����
vector <string> Fixed63; // 6-������
vector <string> Fixed7;
vector <string> Fixed8;
vector <string> Fixed9;
vector <string> Fixed10;
vector <string> Fixed11;
vector <string> Fixed121; // 12-Ŀ��
vector <string> Fixed122; // 12-�ַ�
vector <string> Ran1;
vector <string> Ran2;
vector <string> Ran3;

vector <vector <string> > EndScript; // ������
vector <string> Monk;	//script2[0]

vector <vector <string> > ActScript; // �̺�Ʈ��
vector <string> act1;
vector <string> act2;
vector <string> act3;



void addEvtscript()
{
	Fixed3.push_back("�̻����� ������ȸ�� ��ġ��");
	Fixed3.push_back("��Ǯ�� ���ô�~");
	Fixed3.push_back(""); // ������

	Fixed3.push_back("");
	Fixed3.push_back("�� ��� ��"); 
	Fixed3.push_back("");
	Fixed3.push_back("");
	Fixed3.push_back("�λ� ������ �ڰڽ��ϴ�! 31�� [�̸�]�Դϴ�.");
	Fixed3.push_back("�ַ��� 4���̱���, �������� Ư���Դϴ�.");

	Fixed3.push_back("�ƴ� �ϰ� �׷��� �������� ����?");
	Fixed3.push_back("�츮 ���̺�� �����");
	Fixed3.push_back("");//�Ӻ��¶�
	Fixed3.push_back("...");
	Fixed3.push_back("���¶찡 ����ϼ̽��ϴ�.");
	Fixed3.push_back("");

	Fixed3.push_back("������ ì����� ���� �߾� ������ ��~");
	Fixed3.push_back("���߿� �� �ѹ� �� �ٰ�");
	Fixed3.push_back("");//������

	Fixed3.push_back("������ ���� ģ���� �� ����."); 
	EvtScript.push_back(Fixed3);

	Fixed4.push_back("���ݺ��� 1�б� �߰���縦 �����մϴ�.");
	Fixed4.push_back("�߰����� 1�ð� ���� ����˴ϴ�.");
	Fixed4.push_back("�������� ������.");//�����

	Fixed4.push_back("�ƴ� �߰���簡 ���ڵ��� ���� �ǳ� ��������..");
	Fixed4.push_back("�׷��� ������ ������ ������� �����ϱ�..");
	Fixed4.push_back("���� ���� ���� �ϴ°�! ���� �ٷ� �����̴�!");

	Fixed4.push_back("�� �� ���� 10�� �߿� ���ʷ� �߰���� ������ ���Խ��ϴ�.");
	Fixed4.push_back("������ �� �� [�̸�]�Դϴ�. �ڼ�! ¦¦¦");
	Fixed4.push_back("");//�����

	Fixed4.push_back("�̹� �б� ������ ����ص� �� �� ����.");
	EvtScript.push_back(Fixed4);

	Fixed5.push_back("");
	EvtScript.push_back(Fixed5);

	Fixed61.push_back("");
	EvtScript.push_back(Fixed61);

	Fixed62.push_back("");
	EvtScript.push_back(Fixed62);

	Fixed63.push_back("");
	EvtScript.push_back(Fixed63);

	Fixed7.push_back("ù ������ �������� �ʱ� ���� �����п��� ��û�ߴ�.");
	Fixed7.push_back("�ǹ� ���� �� �װڰ�, ���� ������ ������ �� ���� �� �� ������");
	Fixed7.push_back("...");
	Fixed7.push_back("��� ������ ���ؼ��� ������ �ؾ���.");
	Fixed7.push_back("�װ� �ƴϾ �б� ���� �������� �ʿ��ϴϱ�. ");
	Fixed7.push_back("������.");
	Fixed7.push_back("�� �� ���� ��� ������� ���ư� ������� ��Ҵ�. ");
	Fixed7.push_back("������ ���� ����� ��µ� �׿� ���� ����� �� ���� �� ���١�");
	EvtScript.push_back(Fixed7);

	Fixed8.push_back("������ �ϱ� ���� ����");
	Fixed8.push_back("������ ���� ��Ƽ�� ���� ���̾���.");
	Fixed8.push_back("�ٰ��� ����ö���� �𿩼� ���� �ýø� Ÿ�� ����.");
	Fixed8.push_back("���� ����� �𿩼� ��⸦ ����,");
	Fixed8.push_back("�������� �ȿ��� ��ġ��� ������.");
	Fixed8.push_back("�� �԰� �� �������� �������� �Ͽ���");
	Fixed8.push_back("�� ��վ���.");
	Fixed8.push_back("�� ������ ������ ������ ģ������."); 
	EvtScript.push_back(Fixed8);
	
	Fixed9.push_back("���� �����̶��");
	Fixed9.push_back("�Դٰ� ù �������� ����� �������̶��!");
	Fixed9.push_back("���� ���� �Ⱓ�ε� ���� ����?");
	Fixed9.push_back("�Ƴġ�");
	Fixed9.push_back("�̹� �б� ��ǥ�� ��ž�ΰ�!");
	Fixed9.push_back("�������� �Ϳ����̰� �ǰ� ���ھ�!");
	Fixed9.push_back("��� �� �ƹ��� ������?");
	Fixed9.push_back("");
	Fixed9.push_back("");

	Fixed9.push_back("����!");
	Fixed9.push_back("ù�� ���ǿ� �л��� ���ٴ�!");
	Fixed9.push_back("OT ���ǿ� �⼮�ϴ� �л���.. �ڳװ� ó���̾�!");//�����
	Fixed9.push_back("���� �̷� �л��� �����־��ٴϡ�");
	Fixed9.push_back("�ڳ״� A+ �ϼ�!");
	Fixed9.push_back("");//�����

	Fixed9.push_back("�ϡ� ������ ũ�� �����ص�!!!!");
	EvtScript.push_back(Fixed9);

	Fixed10.push_back("���̱� �츮 ���ֵ� �Ծ�? � ����");
	Fixed10.push_back("���� ���ͼ� ���̳� �Ծ�");
	Fixed10.push_back("");//�ҸӴ�

	Fixed10.push_back("�� �ʹ� ��θ��� �����١� Zzz..");
	Fixed10.push_back("");
	Fixed10.push_back("");

	Fixed10.push_back("[�̸�]�� �Ͼ �� �Ծ����!");
	Fixed10.push_back("���� �� ������ ���ִ� �� �������� �� �Դ´�!");
	Fixed10.push_back("");//�ҸӴ�

	Fixed10.push_back("�� ��ҷ� �װڴ�..");
	Fixed10.push_back("�׷��� �������� ���ϱ� �ʹ� ����.");
	Fixed10.push_back("");
	EvtScript.push_back(Fixed10);

	Fixed11.push_back("����, �� �Ǹ��� �����ϱ� ������ ���Դ�. ");
	Fixed11.push_back("������ �׷��� �̻��� ����� �󸶳� �ǰھ�.");
	Fixed11.push_back("�ⲯ�ؾ� �� ���� �� �� ���� �ƴұ�?");
	Fixed11.push_back("���� ��� �����鿡�Լ� ������ ���� �ʴ´�. ��°�� �ٻ� ���� �׻� ����?");
	Fixed11.push_back("���� ���� �ð��� ������ ����� ���鼭���� �ϴµ�...");
	Fixed11.push_back("�� �ʹ� �����.");
	Fixed11.push_back("�ᱹ �ڷ�������� ��ǥ���� �� ȥ�� �ϰ� �Ǿ���.");
	Fixed11.push_back("�� ������ ���ƸԾ���. ");
	EvtScript.push_back(Fixed11);

	Fixed121.push_back("");
	EvtScript.push_back(Fixed121);

	Fixed122.push_back("�� ���� ���� �ʾ����� �ϴ� ���� ����� ���Ҵ�..");
	Fixed122.push_back("ũ��������, ������ Ŀ�õ��� �ۿ� ������ ����Ʈ�� �ϰ���");
	Fixed122.push_back("�� ���� ���Ͽ� ����Ʈ�� �ϴ� �ɱ�?");
	Fixed122.push_back("������ ������� �ٸ� Ư���� �� ���� �ִ�.");
	Fixed122.push_back("�ٷ� �� ģ�� �ɺ��� ������ ���̴�.");
	Fixed122.push_back("ȥ�ڿ��� �����ϰ� ���ϵ��� ����ϴ� �ɺ��� ���� ���ΰ� �Ǵ� �� ����.");
	Fixed122.push_back("�� ģ�� �ɺ�� �Բ� ��� �� �ܷ��� �ʾ�. ����.");
	Fixed122.push_back("����� ������ ���ö���.");
	Fixed122.push_back("");
	EvtScript.push_back(Fixed122);

	Ran1.push_back("������ C���(�ڱ�/C++/����Ƽ) ���͵� �ִ� ���̴�.");
	Ran1.push_back("5�ñ��� ĸ������ ����� ���������� ������ �־���.");
	Ran1.push_back("���� ���� ������");

	Ran1.push_back("�� �Գ� ���� �����ұ�?");
	Ran1.push_back("������ ������(BST/������/�ִϸ��̼�)�� ���� �˾ƺ���.");
	Ran1.push_back("");//������

	Ran1.push_back("������ ���� ������ �Ϸ翴��.");
	Ran1.push_back("ȿ���� �����ߴ�!");
	Ran1.push_back("");
	EvtScript.push_back(Ran1);

	Ran2.push_back("���� �� ���Ƿ�?");
	Ran2.push_back("");
	Ran2.push_back("");//���¾�
	Ran2.push_back("�ȵ�, �� �ߵ����ž�.");
	Ran2.push_back("�̹��б� ��¥ ���� 4 �Ѵ´�.");
	Ran2.push_back("");//����ȯ

	Ran2.push_back("�ƴ� �̰� �� ��? �̰� ���ٰ�?");
	Ran2.push_back("[�̸�]�� ���µ�?");
	Ran2.push_back("");//���¾�

	Ran2.push_back("���� ����� ������ XX ���� ����µ�, ��¥ �ʹ� ���� �� ����.");
	Ran2.push_back("");
	Ran2.push_back("");//����ȯ

	Ran2.push_back("�װ� �ϰ� �� �ϴ� �ž� �� ������ ���������̾�. ");
	Ran2.push_back("");
	Ran2.push_back("");//���¾�

	Ran2.push_back("���� ����� ������ ���� ��µ�, ��¥ �ʹ��ϴ���.");
	Ran2.push_back("������ ������ �ʰ� �ٷ� �ǽ� ��Ű�µ� ������ �� �޴���.");
	Ran2.push_back("��¥ ��..");
	Ran2.push_back("���ڱ� ���� ����� ���� ��..?!");
	Ran2.push_back("�ƴ� ���������ݾ�????");
	Ran2.push_back("");

	Ran2.push_back("�׷� �ڳ� ������ �� �˾Ұ�, �̸��� ����?");
	Ran2.push_back("������ ����ϴ°� ���� �ž�.");
	Ran2.push_back("");//�����

	Ran2.push_back("�δ��ϴ�.. ������ ����� ���ƿ� ���δ�..");
	Ran2.push_back("ū�ϳ� �� ����..");
	Ran2.push_back("");
	EvtScript.push_back(Ran2);

	Ran3.push_back("�̷��� �ִ� �͵� �����ѵ���.");
	Ran3.push_back("���Ƹ� ����� �̶� īƮ���̴��� �ұ�??");
	Ran3.push_back("[�ý���] : ��XX��, �� �ι����� ���� ���Դϴ�.");
	Ran3.push_back("��... �����̸� ĸ�� ��ǥ ���ι� �� ���̶� ��������!");
	Ran3.push_back("û������ ������ �ʹ� ��Ȥ�� �÷���... ��?");
	Ran3.push_back("");
	Ran3.push_back("1��.1��?!?!?!");
	Ran3.push_back("���� 1���̶��!!!");
	Ran3.push_back("��ī�� 1���̶��!!!");
	Ran3.push_back("���� ����... û������ ���� ���ι��� �Ǵ� �ǰ�!!");
	Ran3.push_back("���̴� ����� ���...");
	Ran3.push_back("��Ʈ������ ��������١�");
	EvtScript.push_back(Ran3);
}


void addEndscript()
{
	Monk.push_back("�̺� �ӿ� ������");			//��ũ��Ʈ �ֱ� 0�� ����
	Monk.push_back("�� ���� ���� ������ ����� ����.");
	Monk.push_back("");

	Monk.push_back("");
	Monk.push_back("��OO ������ ������ ��𼱰� ����´�");
	Monk.push_back("");

	Monk.push_back("");
	Monk.push_back("��並 ü�� �Ͻÿ�");
	Monk.push_back("");

	Monk.push_back("���� ������ �����ƴ�!");
	Monk.push_back("��𼱰� �ı��� ��ģ��.");
	Monk.push_back("�� �ָ��� �� �ڳ����� ���� �θ��١�.");

	


	EndScript.push_back(Monk);		
	
	



}


void addActscript()
{
	act1.push_back("ĸ��(����� E265)���� ���θ� �ߴ�.");
	act1.push_back("������ ����� ����� ���!");
	act1.push_back("�ʹ� ������ �ߴ١� �� ����ʹ١�");
	ActScript.push_back(act1);

	act2.push_back("�̺� ���� ������!");
	act2.push_back("�̷� �� �ٷ� �ض��� �ɱ�?");
	act2.push_back("���� ģ������ ������ ������ �� ������...");
	ActScript.push_back(act2);

	act3.push_back("����Ƽ��!!!!");
	act3.push_back("����ó�� �þ��!");
	act3.push_back("��... ���� ���Ǵ� ��� ����?");
	ActScript.push_back(act3);
}