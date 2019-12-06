﻿#include "prototype.h"
#define WIDTH 10
#define SET_MONEY 2000//초기자본금
void init_BLD(Player* player) {
	player->building = (Building*)malloc(sizeof(Building));
	player->building->level = 1;

	player->building->floor = (Floor*)malloc(sizeof(Floor));
	memset(player->building->floor, 0x0, sizeof(Floor));

	player->building->floor->cell = (Cell*)malloc(sizeof(Cell)*WIDTH*WIDTH);
	memset(player->building->floor->cell, 0x0, sizeof(Cell)*WIDTH*WIDTH);

	player->building->floor->width = WIDTH;
}

void expand_BLD(Building* b_addr) {
	//층을 확장하고 그만큼의 돈을 player money에서 삭감 
	int add_level, width;
	int i = 0;
	int level = b_addr->level;
	printf("확장할 건물의 층 수를 입력하세요 : ");
	scanf("%d", &add_level);
	printf("=======================================================\n");
	b_addr->floor = (Floor *)realloc(b_addr->floor, sizeof(Floor)*(level + (add_level)));
	memset(b_addr->floor + (level), 0x0, sizeof(Floor)*add_level);
	for (i = 0; i <= add_level - 1; i++) {
		printf("%d층 크기 : ", (level)+i + 1);
		scanf("%d", &width);
		(b_addr->floor + (level + i))->cell = (Cell*)malloc(sizeof(Cell)*width*width);
		printf("\t%d 층에  (%d,%d)칸을 생성했습니다.\n", (level)+i + 1, width, width);
		(b_addr->floor + (level + i))->width = width;
	}
	b_addr->level += add_level;
	printf("현재 건물의 층수는 %d 층 입니다\n", b_addr->level);
	printf("=======================================================\n");
}

Player* init_player(int difficulty) {
	Player* player;
	srand((unsigned)time(NULL));	
	player = (Player*)calloc(1, sizeof(Player));
	player->name = (char*)calloc(10,sizeof(char));

	player->uncontracted_store = (Store*)calloc(1, sizeof(Store) * SNUM);//10개 할당
	player->contracted_store = (Store*)calloc(1, sizeof(Store) * SNUM);//10개 할당

	player->money = (rand() % 1000) + 9000 * difficulty;
	player->tax = 300 * (5-difficulty);

	return player;
}
void delete_player(Player* player) {
	free(player->name);

	free(player->uncontracted_store);
	free(player->contracted_store);

	free(player);
}
void delete_BLD(Player* player) {
	int i;
	for (i = 0; i < player->building->level; i++) {
		free(player->building->floor[i].cell);
		free(&(player->building->floor[i]));
	}
	free(player->building);
}