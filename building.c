#include "prototype.h"

int static makeHeight(Building* b_addr) {
	int height = 0;
	printf("층수를 입력하세요 : ");
	scanf("%d", &height);
	printf("====================================================== =\n");
	b_addr->floor = (Floor*)malloc(sizeof(Floor)*height);
	memset(b_addr->floor, 0x0, sizeof(Floor)*height);
	b_addr->level = height;
	return height;
}

int static makeWidth(int height, Building* b_addr) {
	int i = 0;
	int width = 0;
	for (i = 0; i < height; i++) {
		printf("%d층 크기 : ", i + 1);
		scanf("%d", &width);
		(b_addr->floor+i)->cell = (Cell*)malloc(sizeof(Cell)*width*width);
		printf("\t%d 층에  (%d,%d)칸을 생성했습니다.\n", i + 1, width,width);
		memset((b_addr->floor)->cell, 0x0, sizeof(Cell)*width*width);
		(b_addr->floor+i)->width = width;
	}
	
	printf("====================================================== =\n");
	return width;
}

void init_BLD(Player* player) {
	player->building = (Building*)malloc(sizeof(Building));
	makeWidth(makeHeight(player->building),player->building);
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