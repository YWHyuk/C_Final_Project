#include "prototype.h"

#define SNUM 10//가게개수
#define TAX 10//층당 세금

int makeHeight(Building* b_addr) {
	int height = 0;
	printf("층수를 입력하세요 : ");
	scanf("%d", &height);
	printf("====================================================== =\n");
	b_addr->floor = (Floor*)malloc(sizeof(Floor)*height);
	memset(b_addr->floor, 0x0, sizeof(Floor)*height);
	b_addr->level = height;
	return height;
}

int makeWidth(int height, Building* b_addr) {
	int i = 0;
	int width = 0;
	for (i = 0; i < height; i++) {
		printf("%d층 크기 : ", i + 1);
		scanf("%d", &width);
		(b_addr->floor+i)->cell = (Cell*)malloc(sizeof(Cell)*width*width);
		printf("\t%d 층에  (%d,%d)칸을 생성했습니다.\n", i + 1, width,width);
		memset((b_addr->floor+i)->cell, 0x0, sizeof(Cell)*width*width);
		(b_addr->floor+i)->width = width;
	}
	
	printf("====================================================== =\n");
	return width;
}


void simulate(Player * player) {
	int profit = 0; // 플레이어 이익
	int num = 0; //가게수
	int i = 0;
	num = (int)_msize(player->contracted_store) / sizeof(Store);
	for (i = 0; i < num; i++) {
		player->contracted_store[i].money = player->contracted_store[i].income - player->contracted_store[i].rent;
		//각 가게 자산 = 수익 - 임대료
		//렌트비 못내면 어떻게 할지 구현
		player->money += player->contracted_store[i].rent;//각 가게 임대료만큼 플레이어 자산 증가
	}
	player->money -= (player->building->level * TAX);//층*세금 만큼 플레이어 자산 감소

}//프로토타입과 달리 인자에서 Store*를 뺐습니다.

void make_store(Player * player,int i) {
	char name[10][10] = { "횟집","마트","고기집","주막","문구점","영화관","주차장","카페","백반집","세탁소" };
	int income, rent, kind;
	Store new_store;
	Shape *shape = make_Shape(3,3);
	
	kind = rand() % 10;
	income = 300 + rand() % 100;
	rent = 300+ rand() % 100; //300~400
	
	new_store.name = (char*)malloc(sizeof(char) * 10);
	strcpy(new_store.name, name[kind]);
	new_store.rent = rent;
	new_store.income = income;
	new_store.id = i+1;
	new_store.money = 300 + rand() % 1000;
	new_store.shape = shape;

	if (player->uncontracted_store[i].shape != NULL)
		delete_Shape(player->uncontracted_store[i].shape);
	player->uncontracted_store[i] = new_store;
}//프로토타입과 달리 make_store의 인자로 인덱스값을 추가했습니다.

void refresh_store(Player * player) {
	srand((unsigned)time(NULL));
	int i = 0;
	for (i = 0; i < SNUM; i++) {
		make_store(player,i);
	}
}


void init_BLD(Player* player) {
	player->building = (Building*)malloc(sizeof(Building));
	makeWidth(makeHeight(player->building),player->building);
}
Player* init_player() {
	Player* player;

	player = (Player*)calloc(0, sizeof(Player));
	player->name = (char*)malloc(sizeof(char) * 10);
	
	printf("사용자의 이름을 입력해주세요 : ");
	scanf("%s", player->name);
	printf("초기자본을 입력해주세요 : ");
	scanf("%d", &(player->money));
	
	player->uncontracted_store = (Store*)calloc(1, sizeof(Store) * SNUM);//10개 할당
	player->contracted_store = (Store*)calloc(1, sizeof(Store) * SNUM);//10개 할당
	
	return player;
}
