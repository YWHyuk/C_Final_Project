#pragma once
typedef struct player {
	char* name;
	Building* building; // 소유한 건물
	Store* contracted_store; //임대된 가게 리스트
	int money; //건물주 재산
	int tax; // 층의 수에 따른 세금
	Store* uncontracted_store;//임대안된 가게 리스트
}Player;

typedef struct cell{
	Store* store;
	int valid; //공실유무
}Cell;

typedef struct store {
	char* name;
	int income; //수익
	int rent; // 임대료
	int money; //재산
	Shape* shape;//모양 포인터
	int id; // 가게 식별 번호
}Store;

typedef struct building{
	Cell* cell; //방
	int height; //높이
	int width; //폭
}Building;


typedef struct shape{


}Shape; // 모양과 크기를 정의함 ======== > 양원혁

//========================================================================== =

void rent_store(Player* player, Store* store); //사용자의 입력을 받아 입주시키기 =============>이형일

void kick_store(Player* player, Store* store);//사용자의 입력을 받아 쫓아내기=============>이지훈

void expand_BLD(Building* building);//건물확장     =============> 이지훈

//========================================================================== =

void simulate(Player* player, Store *store);//수익을 계산해서 show =============>김민혁

//========================================================================== =

void refresh_store(Player* player); // 가게들을 만들어 Player의 임대안된리스트에 넣음 =============> 김민혁

void make_store(Player* player);// 가게 하나를 만들어 Player의 임대안된리스트에 넣음 =============>김민혁

void init_BLD(Player* player); //건물만들기 =============> 

Player* init_player(); //============ = > 김민혁

//========================================================================== =

void select_difficulty();//부지선택으로 난이도 조절=============>조재훈

//==========================================================================

void show_BLD(Building* building); //건물 전체 show=============>조재훈

//void show_floor(Building* building) //한 층만 show => 보류=============>조재훈

void store_info(Store* store); //가게 정보 show 파일 I.O 사용=============>조재훈



//====================================================================== =

Shape * make_shape(); //============ = > 양원혁

void mapping(Building* building, Store* store); // 건물의 셀들에 세입자 포인터를 할당=============>이형일

void unmapping(Building* building, Store* store); //============ = > 이지훈
