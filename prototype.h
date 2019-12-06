#pragma once
#include "shape.h"
#include "MyConsole.h"
#include <stdlib.h>
#include <string.h>

typedef struct player {
	char* name;
	struct building* building; // 소유한 건물
	struct store* contracted_store; //임대된 가게 리스트
	int money; //건물주 재산
	int tax; // 층의 수에 따른 세금
	int reroll;
	struct store* uncontracted_store;//임대안된 가게 리스트
}Player;

typedef struct cell{
	struct store* store;
	int valid; //공실유무
}Cell;

typedef struct store {
	char* name;
	int income; //수익
	int rent; // 임대료
	int money; //재산
	Shape* shape;//모양 포인터
	int id; // 가게 식별 번호
	int level; // 가게 층 수
	int reroll;
}Store;

typedef struct building{
	struct floor* floor;
	int level; //층 수
}Building;

typedef struct floor{
	Cell* cell; //한 층의 칸들
	int width; //세로
}Floor;


#define SNUM 10//가게개수
#define TAX 10//층당 세금


//========================================================================== =

void rent_store(Player* player, Store* store); //사용자의 입력을 받아 입주시키기 =============>이형일

void kick_store(Building* b_addr);//사용자의 입력을 받아 쫓아내기=============>이지훈

void expand_BLD(Building* b_addr);//건물확장     =============> 이지훈

//========================================================================== =

void simulate(Player* player);//수익을 계산해서 show =============>김민혁

//========================================================================== =

void refresh_store(Player* player); // 가게들을 만들어 Player의 임대안된리스트에 넣음 =============> 김민혁

void init_BLD(Player* player); //건물만들기 =============> 

Player* init_player(int difficulty); //============ = > 김민혁

void delete_BLD(Player* player);

void delete_player(Player* player);