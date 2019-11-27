#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include"struct.h"
#include<time.h>
#define SNUM 10//가게개수
#define TAX 10//층당 세금

Shape* make_shape() {
	Shape shape;
	return &shape;
}
int makeHeight(Building** b_addr) {
	int height = 0;
	int i = 0;
	printf("층수를 입력하세요 : ");
	scanf("%d", &height);
	printf("====================================================== =\n");
	*b_addr = (Building *)malloc(sizeof(Building*)*height + 1);
	(*b_addr)->height = height;
	return height;
}

int makeWidth(int height, Building** b_addr) {
	int i = 0;
	int width = 0;
	for (i = 0; i < height; i++) {
		printf("%d층 크기 : ", i + 1);
		scanf("%d", &width);
		(*b_addr)->cell = (Cell*)malloc(sizeof(Cell*)*width);
		printf("\t%d 층에  %d칸을 생성했습니다.\n", i + 1, width);
		(*(*b_addr+i)).width = width;
	
	}
	
	printf("====================================================== =\n");
	return width;
}


void simulate(Player * player) {
	int profit = 0; // 플레이어 이익
	int num = 0; //가게수
	int i = 0;
	num = _msize(player->uncontracted_store) / sizeof(Store);
	for (i = 0; i < num; i++) {
		player->uncontracted_store[i].money = player->uncontracted_store[i].income - player->uncontracted_store[i].rent;
		//각 가게 자산 = 수익 - 임대료
		//렌트비 못내면 어떻게 할지 구현
		player->money += player->uncontracted_store[i].rent;//각 가게 임대료만큼 플레이어 자산 증가
	}
	player->money -= (player->building->height * TAX);//층*세금 만큼 플레이어 자산 감소

}//프로토타입과 달리 인자에서 Store*를 뺐습니다.

void make_store(Player * player,int i) {
	char name[10][10] = { "횟집","마트","고기집","주막","문구점","영화관","주차장","카페","백반집","세탁소" };
	int income, rent, kind;
	Shape *shape = make_shape();
	kind = rand() % 10;
	income = 300 + rand() % 100;
	rent = 300+ rand() % 100; //300~400
	Store new_store;
	new_store.name = (char*)malloc(sizeof(char) * 10);
	strcpy(new_store.name, name[kind]);
	new_store.rent = rent;
	new_store.income = income;
	player->uncontracted_store[i] = new_store;
}//프로토타입과 달리 make_store의 인자로 인덱스값을 추가했습니다.
void refresh_store(Player * player) {
	int i = 0;

	for (i = 0; i < SNUM; i++) {

		make_store(player,i);

	}
}


void init_BLD(Player* player) {
	
	
	makeWidth(makeHeight(&(player->building)),&(player->building));

}
Player* init_player() {
	char name[10];
	int money = 0;
	printf("사용자의 이름을 입력해주세요 : ");
	scanf("%s", name);
	printf("초기자본을 입력해주세요 : ");
	scanf("%d", &money);
	
	Player player;
	player.uncontracted_store = (Store*)malloc(sizeof(Store) * SNUM);//10개 할당
	player.contracted_store = (Store*)malloc(sizeof(Store) * SNUM);//10개 할당
	player.name = (char*)malloc(sizeof(char) * 10);
	strcpy(player.name, name);
	player.money = money;
	return &player;

}
