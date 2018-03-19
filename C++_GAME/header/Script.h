#pragma once

#include <Vector>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include "Player.h"

using namespace std;

vector <vector <string> > EvtScript; // 이벤트용
vector <string> Fixed3;
vector <string> Fixed4;
vector <string> Fixed5;
vector <string> Fixed61; // 6-공부
vector <string> Fixed62; // 6-쉬기
vector <string> Fixed63; // 6-나가기
vector <string> Fixed7;
vector <string> Fixed8;
vector <string> Fixed9;
vector <string> Fixed10;
vector <string> Fixed11;
vector <string> Fixed121; // 12-커플
vector <string> Fixed122; // 12-솔로
vector <string> Ran1;
vector <string> Ran2;
vector <string> Ran3;

vector <vector <string> > EndScript; // 엔딩용
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

vector <vector <string> > ActScript; // 이벤트용
vector <string> act1;
vector <string> act2;
vector <string> act3;



void addEvtscript()
{
	Fixed3.push_back("멍지수 : 이상으로 개강총회를 마치고");
	Fixed3.push_back("뒤풀이 갑시다~");
	Fixed3.push_back(""); // 멍지수

	Fixed3.push_back("");
	Fixed3.push_back("… 잠시 후"); 
	Fixed3.push_back("");
	Fixed3.push_back("");
	Fixed3.push_back("인사 오지게 박겠습니다! 31기 [이름]입니다.");
	Fixed3.push_back("주량은 4병이구요, 술게임이 특기입니다.");

	Fixed3.push_back("앙보승 : 아니 니가 그렇게 술게임을 잘해?");
	Fixed3.push_back("우리 테이블로 따라와");
	Fixed3.push_back("");//앙보승띠
	Fixed3.push_back("...");
	Fixed3.push_back("보승이가 사망하셨습니다.");
	Fixed3.push_back("");

	Fixed3.push_back("멍지수 : 보승이 챙기느라 수고 했어 조심히 들어가~");
	Fixed3.push_back("나중에 밥 한번 사 줄게");
	Fixed3.push_back("");//멍지수

	Fixed3.push_back("선배들과 많이 친해진 것 같다.");
	Fixed3.push_back("");
	Fixed3.push_back("");
	EvtScript.push_back(Fixed3);

	Fixed4.push_back("양봉국 교수 : 지금부터 1학기 중간고사를 시작합니다.");
	Fixed4.push_back("중간고사는 1시간 동안 진행됩니다.");
	Fixed4.push_back("컨닝하지 마세요.");//양봉국

	Fixed4.push_back("아니 중간고사가 손코딩이 말이 되나 ㅁㄴㅇㄹ..");
	Fixed4.push_back("그래도 귀찮을 뿐이지 어렵지는 않으니까..");
	Fixed4.push_back("누가 나를 심판 하는가! 내가 바로 정답이다!");

	Fixed4.push_back("오 제 강의 10년 중에 최초로 중간고사 만점이 나왔습니다.");
	Fixed4.push_back("만점은 한 명 [이름]입니다. 박수! 짝짝짝");
	Fixed4.push_back("");//양봉국

	Fixed4.push_back("이번 학기 성적을 기대해도 될 것 같다.");
	Fixed4.push_back("");
	Fixed4.push_back("");
	EvtScript.push_back(Fixed4);

	Fixed5.push_back("크으, 대학생활의 꽃. MT! membership training의 약자!");
	Fixed5.push_back("벌써부터 무더위의 기운이 몰아치고 있지만 봄 엠티라니.");
	Fixed5.push_back("");

	Fixed5.push_back("아직까지 부는 꽃가루들도 날 응원해주고 있다.");
	Fixed5.push_back("");
	Fixed5.push_back("");

	Fixed5.push_back("[선배] : 얘들아 고기 다 구웠다 먹자!");
	Fixed5.push_back("");
	Fixed5.push_back("");

	Fixed5.push_back("그 말이 신호가 되어 카드놀이나 하던 애들까지 달려가");
	Fixed5.push_back("착석하고 많아 보이던 고기들을 순식간에 처리했다.");
	Fixed5.push_back("");

	Fixed5.push_back("[정통환] : 언제까지 어깨 춤을 추게 할거야~ 내 어깨를 봐! 탈골 됐잖아!");
	Fixed5.push_back("");
	Fixed5.push_back("");

	Fixed5.push_back("끔찍하게도 많이 마셨다. 그리고 졸려서 견딜 수가 없어서 기절했다.");
	Fixed5.push_back("건강에는 매우 안 좋았지만 선배들과 동기들하고 더욱 돈독한 사이가 되었다.");
	Fixed5.push_back("");
	EvtScript.push_back(Fixed5);

	Fixed61.push_back("중간고사 본 지 얼마나 됐다고 벌써 기말고사지...");
	Fixed61.push_back("오늘부터는 진짜 열람실 가서 공부해야지");
	Fixed61.push_back("");
	
	Fixed61.push_back("시간이 많이 지난 것 같다");
	Fixed61.push_back("이미 창밖은 깜깜하고");
	Fixed61.push_back("주변을 둘러보니 내 앞의 한 사람 빼고는 다 집에 간 것 같다.");
	
	Fixed61.push_back("괜한 경쟁심에 무거워지는 눈을 이끌고");
	Fixed61.push_back("머리에 들어오지도 않는 공... 부를 계..속...한...");
	Fixed61.push_back("");
	
	Fixed61.push_back("...! 그새 졸았네");
	Fixed61.push_back("시간이 얼마나 지났을까");
	Fixed61.push_back("이제는 텅 비어버린 열람실에서 집에 갈 준비를 한다.");
	
	Fixed61.push_back("책 중간에서 쪽지가 하나 떨어진다.");
	Fixed61.push_back("쪽지 : 초면에 죄송하지만");
	Fixed61.push_back("열심히 공부하시는 모습이 너무 멋진 거 같아요.");
	
	Fixed61.push_back("혹시 지금 사귀시는 분이 없다면");
	Fixed61.push_back("밑에 있는 번호로 연락 부탁드려도 될까요?");
	Fixed61.push_back("010-XXXX-XXXX");
	
	Fixed61.push_back("....!?");
	Fixed61.push_back("나도 드디어 연애 할 수 있는건가?");
	Fixed61.push_back("이게 꿈은 아니겠지?");
	
	Fixed61.push_back("며칠후...");
	Fixed61.push_back("");
	Fixed61.push_back("");
	
	Fixed61.push_back("너무 행복하다");
	Fixed61.push_back("이전까지는 어두웠던 내 인생이");
	Fixed61.push_back("이제야 밝게 빛나는 것 같다.");
	
	Fixed61.push_back("오늘도 데이트를 위해 집을 나선다.");
	Fixed61.push_back("");
	Fixed61.push_back("");
	EvtScript.push_back(Fixed61);

	Fixed62.push_back("피곤하다...");
	Fixed62.push_back("시험이고 친구고 다 필요 없어!");
	Fixed62.push_back("이불 밖은 위험해ㅎㅎ");
	
	Fixed62.push_back("...");
	Fixed62.push_back("띵동!");
	Fixed62.push_back("띵동!");
	
	Fixed62.push_back("에이 잠 좀 자려고 했는데");
	Fixed62.push_back("이걸 방해하네");
	Fixed62.push_back("누구세요?");

	Fixed62.push_back("아 안녕하세요.");
	Fixed62.push_back("이번에 옆집으로 이사 온 사람이에요.");
	Fixed62.push_back("");//그(녀)
	
	Fixed62.push_back("다름이 아니라 요 며칠간 공사 소음 때문에");
	Fixed62.push_back("죄송해서 떡 돌리려고 왔....?");
	Fixed62.push_back("");//그(녀)
	
	Fixed62.push_back("...?!");
	Fixed62.push_back("혹시 동국중 나오셨나요?");
	Fixed62.push_back("");
	
	Fixed62.push_back("어 맞아!");
	Fixed62.push_back("너 [이름] 맞지? 와 진짜 오랜만이다.");
	Fixed62.push_back("");//그(녀)
	
	Fixed62.push_back("와 그러게 진짜 오랜만이네!");
	Fixed62.push_back("너 전학 가고서는 한 번도 못 봤었는데,");
	Fixed62.push_back("여기서 다 보네");
	
	Fixed62.push_back("그러게 세상 진짜 좁다");
	Fixed62.push_back("혹시 오늘 할 거 없으면");
	Fixed62.push_back(" 저녁에 술이나 한잔할래?");//그(녀)
	
	Fixed62.push_back("안 그래도 술 마시고 싶었는데");
	Fixed62.push_back("너 떡 다 돌리면 같이 마시러 가자.");
	Fixed62.push_back("");
	
	Fixed62.push_back("몇 시간 후..");
	Fixed62.push_back("");
	Fixed62.push_back("");
	
	Fixed62.push_back("오랜만에 학교 친구 만나니까 좋네~");
	Fixed62.push_back("이미 옛날이야기니까 하는 말인데,");
	Fixed62.push_back("내가 너 좋아했던 거 알고 있어?");
	
	Fixed62.push_back("어 너도 나 좋아했었어?");
	Fixed62.push_back("나도 너 좋아했었는데ㅋㅋㅋㅋ");
	Fixed62.push_back("");//그(녀)
	
	Fixed62.push_back("ㅋㅋㅋㅋ에이 거짓말 하지 마");
	Fixed62.push_back("그때 너 철벽치는거로 유명했던거 기억안나?");
	Fixed62.push_back("");
	
	Fixed62.push_back("그건 네가 아니라서 그랬던 거고...ㅎ");
	Fixed62.push_back("못 믿겠으면 지금이라도 해보던가");
	Fixed62.push_back("");//그(녀)
	
	Fixed62.push_back("하..하...");
	Fixed62.push_back("너 많이 취한 거 같다 데려다줄게 들어가자");
	Fixed62.push_back("");
	
	Fixed62.push_back("넌 하나도 안 변했네....");
	Fixed62.push_back("다시는 못 만날 거라 생각했었는데...다행이야");
	Fixed62.push_back("");//그(녀)
	
	Fixed62.push_back("");
	Fixed62.push_back("");
	Fixed62.push_back("");
	EvtScript.push_back(Fixed62);

	Fixed63.push_back("이상하게 시험 기간만 되면 공부가 더 안 되네;");
	Fixed63.push_back("아 어쩔 수 없다.");
	Fixed63.push_back("캡방이나 놀러 가야지.");
	
	Fixed63.push_back("정통환 : 여어 히사시부리");
	Fixed63.push_back("안 그래도 시험 망쳐서 술 마시러 갈 참인데 너도 갈래?");
	Fixed63.push_back("");
	
	Fixed63.push_back("크 시험 기간에는 술이지");
	Fixed63.push_back("오늘은 달리자!");
	Fixed63.push_back("");
	
	Fixed63.push_back("다음날...");
	Fixed63.push_back("");
	Fixed63.push_back("");
	
	Fixed63.push_back("정통환 : 야 어제 집 잘 들어갔냐?");
	Fixed63.push_back("");
	Fixed63.push_back("");
	
	Fixed63.push_back("집은 잘 들어갔는데,");
	Fixed63.push_back("어제 너무 마셨나 봐..");
	Fixed63.push_back("덕분에 시험시간에 자다가 나옴;");
	
	Fixed63.push_back("정통환 : 그러길래 적당히 좀 마시라니까");
	Fixed63.push_back("그나저나 너 대숲 봄?");
	Fixed63.push_back("");
	
	Fixed63.push_back("대숲?");
	Fixed63.push_back("왜 오늘도 양봉국 교수 글 올라옴?");
	Fixed63.push_back("");
	
	Fixed63.push_back("");
	Fixed63.push_back("");
	Fixed63.push_back("");
	
	Fixed63.push_back("정통환 : 아니 그게 아니라");
	Fixed63.push_back("너 니모에 올라왔더라?");
	Fixed63.push_back("");
	
	Fixed63.push_back("내가?");
	Fixed63.push_back("에이 그럴 리가 있나");
	Fixed63.push_back("보여줘 봐");
	
	Fixed63.push_back("[대숲]");
	Fixed63.push_back("#니모를 찾아서");
	Fixed63.push_back("아지트 캡스 새내기");
	
	Fixed63.push_back("어제 아지트에서 술 마시던 캡스 새내기분을 찾아요");
	Fixed63.push_back("완전 제 이상형에 말도 재미있게 잘하시던데");
	Fixed63.push_back("혹시 지금 만나는 분 없다면 연락드려도 될까요?");
	
	Fixed63.push_back("....!?");
	Fixed63.push_back("나도 드디어 연애 할 수 있는 건가?");
	Fixed63.push_back("이게 꿈은 아니겠지");
	
	Fixed63.push_back("며칠후...");
	Fixed63.push_back("");
	Fixed63.push_back("");
	
	Fixed63.push_back("너무 행복하다.");
	Fixed63.push_back("이전까지는 어두웠던 내 인생이");
	Fixed63.push_back("이제야 밝게 빛나는 것 같다.");
	
	Fixed63.push_back("오늘도 데이트를 위해 집을 나선다.");
	Fixed63.push_back("");
	Fixed63.push_back("");
	EvtScript.push_back(Fixed63);

	Fixed7.push_back("첫 방학을 낭비하지 않기 위해 토익학원을 신청했다.");
	Fixed7.push_back("건물 밖은 쪄 죽겠고, 안은 에어컨 때문에 온 몸이 얼 것 같은데");
	Fixed7.push_back("...");
	Fixed7.push_back("취업 스펙을 위해서라도 열심히 해야지.");
	Fixed7.push_back("그게 아니어도 학교 졸업 때문에라도 필요하니까. ");
	Fixed7.push_back("파이팅.");
	Fixed7.push_back("한 달 동안 잠시 고딩으로 돌아간 기분으로 살았다. ");
	Fixed7.push_back("점수가 오른 기분은 드는데 그에 비해 희생된 게 많은 것 같다…");
	EvtScript.push_back(Fixed7);

	Fixed8.push_back("오늘의 일기 날씨 맑음");
	Fixed8.push_back("오늘은 낙산 엠티를 가는 날이었다.");
	Fixed8.push_back("다같이 지하철역에 모여서 같이 택시를 타고 갔다.");
	Fixed8.push_back("남자 몇명이 모여서 고기를 굽고,");
	Fixed8.push_back("나머지는 안에서 김치찌개를 끓였다.");
	Fixed8.push_back("다 먹고 난 다음에는 술게임을 하였다");
	Fixed8.push_back("참 재밌었다.");
	Fixed8.push_back("잘 몰랐던 선배들과 동기들과 친해졌다."); 
	EvtScript.push_back(Fixed8);
	
	Fixed9.push_back("벌써 개강이라니");
	Fixed9.push_back("게다가 첫 수업부터 양봉국 교수님이라니!");
	Fixed9.push_back("아직 정정 기간인데 가지 말까?");
	Fixed9.push_back("아냐…");
	Fixed9.push_back("이번 학기 목표는 과탑인걸!");
	Fixed9.push_back("교수님의 귀염둥이가 되고 말겠어!");
	Fixed9.push_back("어라… 왜 아무도 없지…?");
	Fixed9.push_back("");
	Fixed9.push_back("");

	Fixed9.push_back("양봉국 교수 : 세상에!");
	Fixed9.push_back("첫날 강의에 학생이 오다니!");
	Fixed9.push_back("OT 강의에 출석하는 학생은.. 자네가 처음이야!");//양봉국
	Fixed9.push_back("아직 이런 학생이 남아있었다니…");
	Fixed9.push_back("자네는 A+ 일세!");
	Fixed9.push_back("");//양봉국

	Fixed9.push_back("하… 학점이 크게 증가해따!!!!");
	Fixed9.push_back("");
	Fixed9.push_back("");
	EvtScript.push_back(Fixed9);

	Fixed10.push_back("할머니 : 아이구 우리 손주들 왔어? 어여 들어와");
	Fixed10.push_back("빨리 들어와서 밥이나 먹어");
	Fixed10.push_back("");//할머니

	Fixed10.push_back("아 너무 배부르고 졸립다… Zzz..");
	Fixed10.push_back("");
	Fixed10.push_back("");

	Fixed10.push_back("할머니 : [이름]아 일어나 밥 먹어야지!");
	Fixed10.push_back("빨리 안 먹으면 맛있는 거 동생들이 다 먹는다!");
	Fixed10.push_back("");//할머니

	Fixed10.push_back("아 배불러 죽겠다..");
	Fixed10.push_back("그래도 오랜만에 오니까 너무 좋다.");
	Fixed10.push_back("");
	EvtScript.push_back(Fixed10);

	Fixed11.push_back("팀플, 그 악명은 입학하기 전부터 들어왔다. ");
	Fixed11.push_back("하지만 그래도 이상한 사람이 얼마나 되겠어.");
	Fixed11.push_back("기껏해야 한 과목에 한 둘 정도 아닐까?");
	Fixed11.push_back("…… 모든 팀원들에게서 연락이 되지 않는다. 어째서 바쁜 일이 항상 있지?");
	Fixed11.push_back("나도 없는 시간을 억지로 만들어 내면서까지 하는데...");
	Fixed11.push_back("아 너무 힘들다.");
	Fixed11.push_back("결국 자료조사부터 발표까지 나 혼자 하게 되었다.");
	Fixed11.push_back("이 과목은 말아먹었다. ");
	EvtScript.push_back(Fixed11);

	Fixed121.push_back("오늘은 크리스마스이다.");
	Fixed121.push_back("나와 그 아이가 사귄지");
	Fixed121.push_back("벌써 6개월이 되는 날이다.");
	
	Fixed121.push_back("공부, 쉬기, 친구들 만나기 다 필요없어!");
	Fixed121.push_back("오늘은 하루 종일 둘이서 보내야지.");
	Fixed121.push_back("의상 좋고 머리도 괜찮고 얼굴 상태 나쁘지 않아.");
	
	Fixed121.push_back("마침 하늘에서도 눈이 내리고..");
	Fixed121.push_back("하늘이 우리를 축복해주는걸까?");
	Fixed121.push_back("...");
	
	Fixed121.push_back("이제는 나도 크리스마스가 좋아");
	Fixed121.push_back("내리는 흰 눈도 쓸쓸하지 않아");
	Fixed121.push_back("이게 다 너 덕분이야");
	
	Fixed121.push_back("네가 내 곁에 있는");
	Fixed121.push_back("이번 이 겨울은 다르잖아");
	Fixed121.push_back("울리는 캐롤 날 울리지를 않아");
	
	Fixed121.push_back("이게 너를 향한 내 마음이야");
	Fixed121.push_back("다시 한번 사랑해");
	Fixed121.push_back("...");
	EvtScript.push_back(Fixed121);

	Fixed122.push_back("아 절대 오지 않았으면 하는 날이 오고야 말았다..");
	Fixed122.push_back("크리스마스, 더러운 커플들은 밖에 나가서 데이트를 하겠지");
	Fixed122.push_back("왜 남의 생일에 데이트를 하는 걸까?");
	Fixed122.push_back("나에겐 남들과는 다른 특별한 할 일이 있다.");
	Fixed122.push_back("바로 내 친구 케빈을 만나는 것이다.");
	Fixed122.push_back("혼자여도 씩씩하게 도둑들을 상대하는 케빈을 보니 위로가 되는 것 같다.");
	Fixed122.push_back("내 친구 케빈과 함께 라면 난 외롭지 않아. 절대.");
	Fixed122.push_back("당신의 의지가 차올랐다.");
	Fixed122.push_back("");
	EvtScript.push_back(Fixed122);

	Ran1.push_back("오늘은 C언어 스터디가 있는 날이다.");
	Ran1.push_back("5시까지 캡방으로 오라는 현석느님의 전언이 있었다.");
	Ran1.push_back("늦지 말고 가야지");

	Ran1.push_back("갓현석 : 어 왔네 이제 시작할까?");
	Ran1.push_back("오늘은 포인터에 대해 알아보자.");
	Ran1.push_back("");//갓현석

	Ran1.push_back("오늘은 정말 유익한 하루였다.");
	Ran1.push_back("효과가 굉장했다!");
	Ran1.push_back("");
	EvtScript.push_back(Ran1);

	Ran2.push_back("김후진 : 오늘 술 마실래?");
	Ran2.push_back("");
	Ran2.push_back("");//김후진

	Ran2.push_back("정통환 : 안돼, 나 중도갈거야.");
	Ran2.push_back("이번학기 진짜 학점 4 넘는다.");
	Ran2.push_back("");//정통환

	Ran2.push_back("김후진 : 아니 이걸 안 와? 이걸 뺀다고?");
	Ran2.push_back("[이름]도 오는데?");
	Ran2.push_back("");//김후진

	Ran2.push_back("정통환 : 오늘 양봉국 교수님 XX 강의 들었는데, 진짜 너무 빡센 거 같아.");
	Ran2.push_back("");
	Ran2.push_back("");//정통환

	Ran2.push_back("김후진 : 그거 니가 못 하는 거야 그 교수님 갓교수님이야. ");
	Ran2.push_back("");
	Ran2.push_back("");//김후진

	Ran2.push_back("나도 양봉국 교수님 강의 듣는데, 진짜 너무하더라.");
	Ran2.push_back("가르쳐 주지도 않고 바로 실습 시키는데 질문도 안 받더라.");
	Ran2.push_back("진짜 개..");
	Ran2.push_back("갑자기 누가 어깨에 손을 얻..?!");
	Ran2.push_back("아니 교수님이잖아????");
	Ran2.push_back("");

	Ran2.push_back("양봉국 교수 : 그래 자네 생각은 잘 알았고, 이름이 뭔가?");
	Ran2.push_back("학점은 기대하는게 좋을 거야.");
	Ran2.push_back("");//양봉국

	Ran2.push_back("싸늘하다.. 가슴에 비수가 날아와 꽃인다..");
	Ran2.push_back("큰일난 것 같다..");
	Ran2.push_back("");
	EvtScript.push_back(Ran2);

	Ran3.push_back("이렇게 있는 것도 지루한데….");
	Ran3.push_back("동아리 사람들 이랑 카트라이더나 할까??");
	Ran3.push_back("[시스템] : 윤XX씨, 고 인물씨가 게임 중입니다.");
	Ran3.push_back("아... 하필이면 캡스 대표 고인물 두 명이랑 개인전을!");
	Ran3.push_back("청정수인 나에겐 너무 가혹한 시련이... 응?");
	Ran3.push_back("");
	Ran3.push_back("1….1등?!?!?!");
	Ran3.push_back("내가 1등이라니!!!");
	Ran3.push_back("연카로 1등이라니!!!");
	Ran3.push_back("드디어 나도... 청정수를 떠나 고인물이 되는 건가!!");
	Ran3.push_back("고이는 기분이 든다...");
	Ran3.push_back("스트레스가 사라져간다…");
	EvtScript.push_back(Ran3);
}


void addEndscript()
{
	Monk.push_back("이불 속에 있으니");			//스크립트 넣기 0번 스님
	Monk.push_back("내 마음 속의 번뇌가 사라져 간다.");
	Monk.push_back("");

	Monk.push_back("");
	Monk.push_back("젠OO 스님의 말씀이 어디선가 들려온다");
	Monk.push_back("");

	Monk.push_back("");
	Monk.push_back("젠00 : 고요를 체험 하시오");
	Monk.push_back("");							//젠00

	Monk.push_back("나는 진리를 깨우쳤다!");
	Monk.push_back("어디선가 후광이 비친다.");
	Monk.push_back("저 멀리서 흰 코끼리가 나를 부른다….");
	EndScript.push_back(Monk);


	Breaklove.push_back("카톡!");
	Breaklove.push_back("그 아이에게서 카톡이 왔다!");
	Breaklove.push_back("");

	Breaklove.push_back("");
	Breaklove.push_back("우리 헤어지자");
	Breaklove.push_back("");					//그아이?

	Breaklove.push_back("……");
	Breaklove.push_back("?!?!?!?!?!?!?!?!?");
	Breaklove.push_back("다….답장을 해야해…!!!");

	Breaklove.push_back("……");
	Breaklove.push_back("카톡의 숫자가 사라지지 않는다.");
	Breaklove.push_back("");

	Breaklove.push_back("");
	Breaklove.push_back("CC가 깨진 충격으로 나는 휴학을 하게 되었다.");
	Breaklove.push_back("");

	Breaklove.push_back("휴학계를 내러 가는 날, 보고 말았다.");
	Breaklove.push_back("다른 사람의 손을 잡은 그 아이를…");
	Breaklove.push_back("");
	EndScript.push_back(Breaklove);
	

	ManyF.push_back("띵동");
	ManyF.push_back("");
	ManyF.push_back("학교에서 편지가 왔다");

	ManyF.push_back("동국대학교");
	ManyF.push_back("성적경고처분통지서");
	ManyF.push_back("");

	ManyF.push_back("");
	ManyF.push_back("손이 떨리기 시작한다.");
	ManyF.push_back("");

	ManyF.push_back("학점의 그레이드에 죽음의 데스가 오고 말았다.");
	ManyF.push_back("내 학교 생활의 유니버시티 라이프는 ");
	ManyF.push_back("디 엔드로 끝나는 것인가?");

	ManyF.push_back("");
	ManyF.push_back("아 씨바, 할말을 잊었습니다. ");
	ManyF.push_back("");								//보광 or 엄마
	EndScript.push_back(ManyF);

	Nobelprize.push_back("공부는 너무 행복해!");
	Nobelprize.push_back("오늘도 즐겁게 공부를 하자!");
	Nobelprize.push_back("");

	Nobelprize.push_back("어라? 이 공식은 좀 이상한걸?");
	Nobelprize.push_back("코노 와타시가 연구 해 봐야겠다!");
	Nobelprize.push_back("");

	Nobelprize.push_back("얼마 후…");
	Nobelprize.push_back("");
	Nobelprize.push_back("");

	Nobelprize.push_back("OOO씨!!");
	Nobelprize.push_back("최연소 노벨상 수상자로 선정 되셨는데");
	Nobelprize.push_back("소감 한 말씀 부탁 드립니다!");

	Nobelprize.push_back("");
	Nobelprize.push_back("혼자 공부하다 논문을 쓰셨다던데 사실입니까??");
	Nobelprize.push_back("");

	Nobelprize.push_back("야레야레…");
	Nobelprize.push_back("그럼 한 마디만 하겠습니다.");
	Nobelprize.push_back("");

	Nobelprize.push_back("교과서만 보고 공부했습니다.");
	Nobelprize.push_back("구글 갓! ");
	Nobelprize.push_back("");
	EndScript.push_back(Nobelprize);


	Celeb.push_back("한참 놀고있는데 수상한 시선이 느껴졌다.");
	Celeb.push_back("!!!!!!!!!");
	Celeb.push_back("누군가 내 어깨를 잡았다!!!");

	Celeb.push_back("[???] : 자네….");						//[???]
	Celeb.push_back("왕이 될 관상이야…!!!!");
	Celeb.push_back("");

	Celeb.push_back("네….?");
	Celeb.push_back("제…제가요….?");
	Celeb.push_back("");

	Celeb.push_back("[???] : 그래…. 바로…");
	Celeb.push_back("연예계의 왕!!!!");
	Celeb.push_back("");							//[???]

	Celeb.push_back("몇 년 후….");
	Celeb.push_back("");
	Celeb.push_back("");

	Celeb.push_back("이번 양훈의 숏터뷰에서는 ");
	Celeb.push_back("만능 엔터테이너 OOO 님을 모셨습니다!!");
	Celeb.push_back("OOO씨, 인기가 많으면 피곤하진 않으세요?");

	Celeb.push_back("늘 새로워, 짜릿해");
	Celeb.push_back("인기가 최고야");
	Celeb.push_back("");

	Celeb.push_back("어이가 없네…");
	Celeb.push_back("");
	Celeb.push_back("");
	EndScript.push_back(Celeb);

	Die.push_back("……………");
	Die.push_back("……………");
	Die.push_back("돌연사!!!!!!");

	EndScript.push_back(Die);



}


void addActscript()
{
	act1.push_back("캡방(원흥관 E265)에서 공부를 했다.");
	act1.push_back("학점이 상승한 기분이 든다!");
	act1.push_back("너무 열심히 했다… 좀 쉬고싶다…");
	ActScript.push_back(act1);

	act2.push_back("이불 밖은 위험해!");
	act2.push_back("이런 게 바로 극락인 걸까?");
	act2.push_back("왠지 친구들의 연락이 뜸해진 것 같지만...");
	ActScript.push_back(act2);

	act3.push_back("술파티다!!!!");
	act3.push_back("연락처가 늘어났다!");
	act3.push_back("아... 내일 강의는 어떻게 하지?");
	ActScript.push_back(act3);
}