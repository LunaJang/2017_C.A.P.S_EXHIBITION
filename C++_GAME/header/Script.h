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
vector <string> Monk;				//EndScript[0]
vector <string> Breaklove;			//EndScript[1]
vector <string> ManyF;				//EndScript[2]
vector <string> Nobelprize;			//EndScript[3]
vector <string> Celeb;				//EndScript[4]
vector <string> Die;				//EndScript[5]
vector <string> Nomal;
vector <string> Outside;
vector <string> Leader;
vector <string> Top;
vector <string> Love;
vector <string> Sole;
vector <string> Leave;
vector <string> Peace;
vector <string> Tr;

vector <vector <string> > ActScript; // �̺�Ʈ��
vector <string> act1;
vector <string> act2;
vector <string> act3;



void addEvtscript()
{
	Fixed3.push_back("������ : �̻����� ������ȸ�� ��ġ��");
	Fixed3.push_back("��Ǯ�� ���ô�~");
	Fixed3.push_back(""); // ������

	Fixed3.push_back("");
	Fixed3.push_back("�� ��� ��"); 
	Fixed3.push_back("");
	Fixed3.push_back("");
	Fixed3.push_back("�λ� ������ �ڰڽ��ϴ�! 31�� [�̸�]�Դϴ�.");
	Fixed3.push_back("�ַ��� 4���̱���, �������� Ư���Դϴ�.");

	Fixed3.push_back("�Ӻ��� : �ƴ� �ϰ� �׷��� �������� ����?");
	Fixed3.push_back("�츮 ���̺�� �����");
	Fixed3.push_back("");//�Ӻ��¶�
	Fixed3.push_back("...");
	Fixed3.push_back("�����̰� ����ϼ̽��ϴ�.");
	Fixed3.push_back("");

	Fixed3.push_back("������ : ������ ì����� ���� �߾� ������ ��~");
	Fixed3.push_back("���߿� �� �ѹ� �� �ٰ�");
	Fixed3.push_back("");//������

	Fixed3.push_back("������ ���� ģ���� �� ����.");
	Fixed3.push_back("");
	Fixed3.push_back("");
	EvtScript.push_back(Fixed3);

	Fixed4.push_back("����� ���� : ���ݺ��� 1�б� �߰���縦 �����մϴ�.");
	Fixed4.push_back("�߰����� 1�ð� ���� ����˴ϴ�.");
	Fixed4.push_back("�������� ������.");//�����

	Fixed4.push_back("�ƴ� �߰���簡 ���ڵ��� ���� �ǳ� ��������..");
	Fixed4.push_back("�׷��� ������ ������ ������� �����ϱ�..");
	Fixed4.push_back("���� ���� ���� �ϴ°�! ���� �ٷ� �����̴�!");

	Fixed4.push_back("�� �� ���� 10�� �߿� ���ʷ� �߰���� ������ ���Խ��ϴ�.");
	Fixed4.push_back("������ �� �� [�̸�]�Դϴ�. �ڼ�! ¦¦¦");
	Fixed4.push_back("");//�����

	Fixed4.push_back("�̹� �б� ������ ����ص� �� �� ����.");
	Fixed4.push_back("");
	Fixed4.push_back("");
	EvtScript.push_back(Fixed4);

	Fixed5.push_back("ũ��, ���л�Ȱ�� ��. MT! membership training�� ����!");
	Fixed5.push_back("������� �������� ����� ����ġ�� ������ �� ��Ƽ���.");
	Fixed5.push_back("");

	Fixed5.push_back("�������� �δ� �ɰ���鵵 �� �������ְ� �ִ�.");
	Fixed5.push_back("");
	Fixed5.push_back("");

	Fixed5.push_back("[����] : ���� ��� �� ������ ����!");
	Fixed5.push_back("");
	Fixed5.push_back("");

	Fixed5.push_back("�� ���� ��ȣ�� �Ǿ� ī����̳� �ϴ� �ֵ���� �޷���");
	Fixed5.push_back("�����ϰ� ���� ���̴� ������ ���İ��� ó���ߴ�.");
	Fixed5.push_back("");

	Fixed5.push_back("[����ȯ] : �������� ��� ���� �߰� �Ұž�~ �� ����� ��! Ż�� ���ݾ�!");
	Fixed5.push_back("");
	Fixed5.push_back("");

	Fixed5.push_back("�����ϰԵ� ���� ���̴�. �׸��� ������ �ߵ� ���� ��� �����ߴ�.");
	Fixed5.push_back("�ǰ����� �ſ� �� �������� ������ ������ϰ� ���� ������ ���̰� �Ǿ���.");
	Fixed5.push_back("");
	EvtScript.push_back(Fixed5);

	Fixed61.push_back("�߰���� �� �� �󸶳� �ƴٰ� ���� �⸻�����...");
	Fixed61.push_back("���ú��ʹ� ��¥ ������ ���� �����ؾ���");
	Fixed61.push_back("");
	
	Fixed61.push_back("�ð��� ���� ���� �� ����");
	Fixed61.push_back("�̹� â���� �����ϰ�");
	Fixed61.push_back("�ֺ��� �ѷ����� �� ���� �� ��� ����� �� ���� �� �� ����.");
	
	Fixed61.push_back("���� ����ɿ� ���ſ����� ���� �̲���");
	Fixed61.push_back("�Ӹ��� �������� �ʴ� ��... �θ� ��..��...��...");
	Fixed61.push_back("");
	
	Fixed61.push_back("...! �׻� ���ҳ�");
	Fixed61.push_back("�ð��� �󸶳� ��������");
	Fixed61.push_back("������ �� ������ �����ǿ��� ���� �� �غ� �Ѵ�.");
	
	Fixed61.push_back("å �߰����� ������ �ϳ� ��������.");
	Fixed61.push_back("���� : �ʸ鿡 �˼�������");
	Fixed61.push_back("������ �����Ͻô� ����� �ʹ� ���� �� ���ƿ�.");
	
	Fixed61.push_back("Ȥ�� ���� ��ͽô� ���� ���ٸ�");
	Fixed61.push_back("�ؿ� �ִ� ��ȣ�� ���� ��Ź����� �ɱ��?");
	Fixed61.push_back("010-XXXX-XXXX");
	
	Fixed61.push_back("....!?");
	Fixed61.push_back("���� ���� ���� �� �� �ִ°ǰ�?");
	Fixed61.push_back("�̰� ���� �ƴϰ���?");
	
	Fixed61.push_back("��ĥ��...");
	Fixed61.push_back("");
	Fixed61.push_back("");
	
	Fixed61.push_back("�ʹ� �ູ�ϴ�");
	Fixed61.push_back("���������� ��ο��� �� �λ���");
	Fixed61.push_back("������ ��� ������ �� ����.");
	
	Fixed61.push_back("���õ� ����Ʈ�� ���� ���� ������.");
	Fixed61.push_back("");
	Fixed61.push_back("");
	EvtScript.push_back(Fixed61);

	Fixed62.push_back("�ǰ��ϴ�...");
	Fixed62.push_back("�����̰� ģ���� �� �ʿ� ����!");
	Fixed62.push_back("�̺� ���� �����ؤ���");
	
	Fixed62.push_back("...");
	Fixed62.push_back("��!");
	Fixed62.push_back("��!");
	
	Fixed62.push_back("���� �� �� �ڷ��� �ߴµ�");
	Fixed62.push_back("�̰� �����ϳ�");
	Fixed62.push_back("��������?");

	Fixed62.push_back("�� �ȳ��ϼ���.");
	Fixed62.push_back("�̹��� �������� �̻� �� ����̿���.");
	Fixed62.push_back("");//��(��)
	
	Fixed62.push_back("�ٸ��� �ƴ϶� �� ��ĥ�� ���� ���� ������");
	Fixed62.push_back("�˼��ؼ� �� �������� ��....?");
	Fixed62.push_back("");//��(��)
	
	Fixed62.push_back("...?!");
	Fixed62.push_back("Ȥ�� ������ �����̳���?");
	Fixed62.push_back("");
	
	Fixed62.push_back("�� �¾�!");
	Fixed62.push_back("�� [�̸�] ����? �� ��¥ �������̴�.");
	Fixed62.push_back("");//��(��)
	
	Fixed62.push_back("�� �׷��� ��¥ �������̳�!");
	Fixed62.push_back("�� ���� ������ �� ���� �� �þ��µ�,");
	Fixed62.push_back("���⼭ �� ����");
	
	Fixed62.push_back("�׷��� ���� ��¥ ����");
	Fixed62.push_back("Ȥ�� ���� �� �� ������");
	Fixed62.push_back(" ���ῡ ���̳� �����ҷ�?");//��(��)
	
	Fixed62.push_back("�� �׷��� �� ���ð� �;��µ�");
	Fixed62.push_back("�� �� �� ������ ���� ���÷� ����.");
	Fixed62.push_back("");
	
	Fixed62.push_back("�� �ð� ��..");
	Fixed62.push_back("");
	Fixed62.push_back("");
	
	Fixed62.push_back("�������� �б� ģ�� �����ϱ� ����~");
	Fixed62.push_back("�̹� �����̾߱�ϱ� �ϴ� ���ε�,");
	Fixed62.push_back("���� �� �����ߴ� �� �˰� �־�?");
	
	Fixed62.push_back("�� �ʵ� �� �����߾���?");
	Fixed62.push_back("���� �� �����߾��µ���������");
	Fixed62.push_back("");//��(��)
	
	Fixed62.push_back("������������ ������ ���� ��");
	Fixed62.push_back("�׶� �� ö��ġ�°ŷ� �����ߴ��� ���ȳ�?");
	Fixed62.push_back("");
	
	Fixed62.push_back("�װ� �װ� �ƴ϶� �׷��� �Ű�...��");
	Fixed62.push_back("�� �ϰ����� �����̶� �غ�����");
	Fixed62.push_back("");//��(��)
	
	Fixed62.push_back("��..��...");
	Fixed62.push_back("�� ���� ���� �� ���� �������ٰ� ����");
	Fixed62.push_back("");
	
	Fixed62.push_back("�� �ϳ��� �� ���߳�....");
	Fixed62.push_back("�ٽô� �� ���� �Ŷ� �����߾��µ�...�����̾�");
	Fixed62.push_back("");//��(��)
	
	Fixed62.push_back("");
	Fixed62.push_back("");
	Fixed62.push_back("");
	EvtScript.push_back(Fixed62);

	Fixed63.push_back("�̻��ϰ� ���� �Ⱓ�� �Ǹ� ���ΰ� �� �� �ǳ�;");
	Fixed63.push_back("�� ��¿ �� ����.");
	Fixed63.push_back("ĸ���̳� � ������.");
	
	Fixed63.push_back("����ȯ : ���� ����úθ�");
	Fixed63.push_back("�� �׷��� ���� ���ļ� �� ���÷� �� ���ε� �ʵ� ����?");
	Fixed63.push_back("");
	
	Fixed63.push_back("ũ ���� �Ⱓ���� ������");
	Fixed63.push_back("������ �޸���!");
	Fixed63.push_back("");
	
	Fixed63.push_back("������...");
	Fixed63.push_back("");
	Fixed63.push_back("");
	
	Fixed63.push_back("����ȯ : �� ���� �� �� ����?");
	Fixed63.push_back("");
	Fixed63.push_back("");
	
	Fixed63.push_back("���� �� ���µ�,");
	Fixed63.push_back("���� �ʹ� ���̳� ��..");
	Fixed63.push_back("���п� ����ð��� �ڴٰ� ����;");
	
	Fixed63.push_back("����ȯ : �׷��淡 ������ �� ���ö�ϱ�");
	Fixed63.push_back("�׳����� �� �뽣 ��?");
	Fixed63.push_back("");
	
	Fixed63.push_back("�뽣?");
	Fixed63.push_back("�� ���õ� ����� ���� �� �ö��?");
	Fixed63.push_back("");
	
	Fixed63.push_back("");
	Fixed63.push_back("");
	Fixed63.push_back("");
	
	Fixed63.push_back("����ȯ : �ƴ� �װ� �ƴ϶�");
	Fixed63.push_back("�� �ϸ� �ö�Դ���?");
	Fixed63.push_back("");
	
	Fixed63.push_back("����?");
	Fixed63.push_back("���� �׷� ���� �ֳ�");
	Fixed63.push_back("������ ��");
	
	Fixed63.push_back("[�뽣]");
	Fixed63.push_back("#�ϸ� ã�Ƽ�");
	Fixed63.push_back("����Ʈ ĸ�� ������");
	
	Fixed63.push_back("���� ����Ʈ���� �� ���ô� ĸ�� ��������� ã�ƿ�");
	Fixed63.push_back("���� �� �̻����� ���� ����ְ� ���Ͻô���");
	Fixed63.push_back("Ȥ�� ���� ������ �� ���ٸ� ��������� �ɱ��?");
	
	Fixed63.push_back("....!?");
	Fixed63.push_back("���� ���� ���� �� �� �ִ� �ǰ�?");
	Fixed63.push_back("�̰� ���� �ƴϰ���");
	
	Fixed63.push_back("��ĥ��...");
	Fixed63.push_back("");
	Fixed63.push_back("");
	
	Fixed63.push_back("�ʹ� �ູ�ϴ�.");
	Fixed63.push_back("���������� ��ο��� �� �λ���");
	Fixed63.push_back("������ ��� ������ �� ����.");
	
	Fixed63.push_back("���õ� ����Ʈ�� ���� ���� ������.");
	Fixed63.push_back("");
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

	Fixed9.push_back("����� ���� : ����!");
	Fixed9.push_back("ù�� ���ǿ� �л��� ���ٴ�!");
	Fixed9.push_back("OT ���ǿ� �⼮�ϴ� �л���.. �ڳװ� ó���̾�!");//�����
	Fixed9.push_back("���� �̷� �л��� �����־��ٴϡ�");
	Fixed9.push_back("�ڳ״� A+ �ϼ�!");
	Fixed9.push_back("");//�����

	Fixed9.push_back("�ϡ� ������ ũ�� �����ص�!!!!");
	Fixed9.push_back("");
	Fixed9.push_back("");
	EvtScript.push_back(Fixed9);

	Fixed10.push_back("�ҸӴ� : ���̱� �츮 ���ֵ� �Ծ�? � ����");
	Fixed10.push_back("���� ���ͼ� ���̳� �Ծ�");
	Fixed10.push_back("");//�ҸӴ�

	Fixed10.push_back("�� �ʹ� ��θ��� �����١� Zzz..");
	Fixed10.push_back("");
	Fixed10.push_back("");

	Fixed10.push_back("�ҸӴ� : [�̸�]�� �Ͼ �� �Ծ����!");
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

	Fixed121.push_back("������ ũ���������̴�.");
	Fixed121.push_back("���� �� ���̰� �����");
	Fixed121.push_back("���� 6������ �Ǵ� ���̴�.");
	
	Fixed121.push_back("����, ����, ģ���� ������ �� �ʿ����!");
	Fixed121.push_back("������ �Ϸ� ���� ���̼� ��������.");
	Fixed121.push_back("�ǻ� ���� �Ӹ��� ������ �� ���� ������ �ʾ�.");
	
	Fixed121.push_back("��ħ �ϴÿ����� ���� ������..");
	Fixed121.push_back("�ϴ��� �츮�� �ູ���ִ°ɱ�?");
	Fixed121.push_back("...");
	
	Fixed121.push_back("������ ���� ũ���������� ����");
	Fixed121.push_back("������ �� ���� �������� �ʾ�");
	Fixed121.push_back("�̰� �� �� �����̾�");
	
	Fixed121.push_back("�װ� �� �翡 �ִ�");
	Fixed121.push_back("�̹� �� �ܿ��� �ٸ��ݾ�");
	Fixed121.push_back("�︮�� ĳ�� �� �︮���� �ʾ�");
	
	Fixed121.push_back("�̰� �ʸ� ���� �� �����̾�");
	Fixed121.push_back("�ٽ� �ѹ� �����");
	Fixed121.push_back("...");
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

	Ran1.push_back("������ C��� ���͵� �ִ� ���̴�.");
	Ran1.push_back("5�ñ��� ĸ������ ����� ���������� ������ �־���.");
	Ran1.push_back("���� ���� ������");

	Ran1.push_back("������ : �� �Գ� ���� �����ұ�?");
	Ran1.push_back("������ �����Ϳ� ���� �˾ƺ���.");
	Ran1.push_back("");//������

	Ran1.push_back("������ ���� ������ �Ϸ翴��.");
	Ran1.push_back("ȿ���� �����ߴ�!");
	Ran1.push_back("");
	EvtScript.push_back(Ran1);

	Ran2.push_back("������ : ���� �� ���Ƿ�?");
	Ran2.push_back("");
	Ran2.push_back("");//������

	Ran2.push_back("����ȯ : �ȵ�, �� �ߵ����ž�.");
	Ran2.push_back("�̹��б� ��¥ ���� 4 �Ѵ´�.");
	Ran2.push_back("");//����ȯ

	Ran2.push_back("������ : �ƴ� �̰� �� ��? �̰� ���ٰ�?");
	Ran2.push_back("[�̸�]�� ���µ�?");
	Ran2.push_back("");//������

	Ran2.push_back("����ȯ : ���� ����� ������ XX ���� ����µ�, ��¥ �ʹ� ���� �� ����.");
	Ran2.push_back("");
	Ran2.push_back("");//����ȯ

	Ran2.push_back("������ : �װ� �ϰ� �� �ϴ� �ž� �� ������ ���������̾�. ");
	Ran2.push_back("");
	Ran2.push_back("");//������

	Ran2.push_back("���� ����� ������ ���� ��µ�, ��¥ �ʹ��ϴ���.");
	Ran2.push_back("������ ������ �ʰ� �ٷ� �ǽ� ��Ű�µ� ������ �� �޴���.");
	Ran2.push_back("��¥ ��..");
	Ran2.push_back("���ڱ� ���� ����� ���� ��..?!");
	Ran2.push_back("�ƴ� ���������ݾ�????");
	Ran2.push_back("");

	Ran2.push_back("����� ���� : �׷� �ڳ� ������ �� �˾Ұ�, �̸��� ����?");
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
	Monk.push_back("��00 : ��並 ü�� �Ͻÿ�");
	Monk.push_back("");							//��00

	Monk.push_back("���� ������ �����ƴ�!");
	Monk.push_back("��𼱰� �ı��� ��ģ��.");
	Monk.push_back("�� �ָ��� �� �ڳ����� ���� �θ��١�.");
	EndScript.push_back(Monk);


	Breaklove.push_back("ī��!");
	Breaklove.push_back("�� ���̿��Լ� ī���� �Դ�!");
	Breaklove.push_back("");

	Breaklove.push_back("");
	Breaklove.push_back("�츮 �������");
	Breaklove.push_back("");					//�׾���?

	Breaklove.push_back("����");
	Breaklove.push_back("?!?!?!?!?!?!?!?!?");
	Breaklove.push_back("�١�.������ �ؾ��ء�!!!");

	Breaklove.push_back("����");
	Breaklove.push_back("ī���� ���ڰ� ������� �ʴ´�.");
	Breaklove.push_back("");

	Breaklove.push_back("");
	Breaklove.push_back("CC�� ���� ������� ���� ������ �ϰ� �Ǿ���.");
	Breaklove.push_back("");

	Breaklove.push_back("���а踦 ���� ���� ��, ���� ���Ҵ�.");
	Breaklove.push_back("�ٸ� ����� ���� ���� �� ���̸���");
	Breaklove.push_back("");
	EndScript.push_back(Breaklove);
	

	ManyF.push_back("��");
	ManyF.push_back("");
	ManyF.push_back("�б����� ������ �Դ�");

	ManyF.push_back("�������б�");
	ManyF.push_back("�������ó��������");
	ManyF.push_back("");

	ManyF.push_back("");
	ManyF.push_back("���� ������ �����Ѵ�.");
	ManyF.push_back("");

	ManyF.push_back("������ �׷��̵忡 ������ ������ ���� ���Ҵ�.");
	ManyF.push_back("�� �б� ��Ȱ�� ���Ϲ���Ƽ �������� ");
	ManyF.push_back("�� ����� ������ ���ΰ�?");

	ManyF.push_back("");
	ManyF.push_back("�� ����, �Ҹ��� �ؾ����ϴ�. ");
	ManyF.push_back("");								//���� or ����
	EndScript.push_back(ManyF);

	Nobelprize.push_back("���δ� �ʹ� �ູ��!");
	Nobelprize.push_back("���õ� ��̰� ���θ� ����!");
	Nobelprize.push_back("");

	Nobelprize.push_back("���? �� ������ �� �̻��Ѱ�?");
	Nobelprize.push_back("�ڳ� ��Ÿ�ð� ���� �� ���߰ڴ�!");
	Nobelprize.push_back("");

	Nobelprize.push_back("�� �ġ�");
	Nobelprize.push_back("");
	Nobelprize.push_back("");

	Nobelprize.push_back("OOO��!!");
	Nobelprize.push_back("�ֿ��� �뺧�� �����ڷ� ���� �Ǽ̴µ�");
	Nobelprize.push_back("�Ұ� �� ���� ��Ź �帳�ϴ�!");

	Nobelprize.push_back("");
	Nobelprize.push_back("ȥ�� �����ϴ� ���� ���̴ٴ��� ����Դϱ�??");
	Nobelprize.push_back("");

	Nobelprize.push_back("�߷��߷���");
	Nobelprize.push_back("�׷� �� ���� �ϰڽ��ϴ�.");
	Nobelprize.push_back("");

	Nobelprize.push_back("�������� ���� �����߽��ϴ�.");
	Nobelprize.push_back("���� ��! ");
	Nobelprize.push_back("");
	EndScript.push_back(Nobelprize);


	Celeb.push_back("���� ����ִµ� ������ �ü��� ��������.");
	Celeb.push_back("!!!!!!!!!");
	Celeb.push_back("������ �� ����� ��Ҵ�!!!");

	Celeb.push_back("[???] : �ڳס�.");						//[???]
	Celeb.push_back("���� �� �����̾ߡ�!!!!");
	Celeb.push_back("");

	Celeb.push_back("�ס�.?");
	Celeb.push_back("���������䡦.?");
	Celeb.push_back("");

	Celeb.push_back("[???] : �׷���. �ٷΡ�");
	Celeb.push_back("�������� ��!!!!");
	Celeb.push_back("");							//[???]

	Celeb.push_back("�� �� �ġ�.");
	Celeb.push_back("");
	Celeb.push_back("");

	Celeb.push_back("�̹� ������ ���ͺ信���� ");
	Celeb.push_back("���� �������̳� OOO ���� ��̽��ϴ�!!");
	Celeb.push_back("OOO��, �αⰡ ������ �ǰ����� ��������?");

	Celeb.push_back("�� ���ο�, ¥����");
	Celeb.push_back("�αⰡ �ְ��");
	Celeb.push_back("");

	Celeb.push_back("���̰� ���ס�");
	Celeb.push_back("");
	Celeb.push_back("");
	EndScript.push_back(Celeb);

	Die.push_back("����������");
	Die.push_back("����������");
	Die.push_back("������!!!!!!");

	EndScript.push_back(Die);



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