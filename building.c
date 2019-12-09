#include "prototype.h"
#include "graphic.h"
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

void expand_BLD(Player* player) {
	//층을 확장하고 그만큼의 돈을 player money에서 삭감 
	int add_level, width;
	int i = 0;
	int y=4;
	int level = player->building->level;
	
	width = player->building->floor->width;

	setCursorXY(57, 15);
	printf("확장할 건물의 층 수를 입력하세요 :");
	add_level = get_IntByArrow(player->money);
	clear_right_rect();
	/* Need to implement player money 차감 */

	player->money -= add_level * FLOOR_PRICE;

	player->building->floor = (Floor *)realloc(player->building->floor, sizeof(Floor)*(level + (add_level)));
	memset(player->building->floor + (level), 0x0, sizeof(Floor)*add_level);
	for (i = 0; i <= add_level - 1; i++) {
		(player->building->floor + (level + i))->cell = (Cell*)calloc(1,sizeof(Cell)*width*width);
		if (y < 26) {
			setCursorXY(57, y++);
			printf("%03d 층에  (%d,%d)칸을 생성했습니다.\n", (level)+i + 1, width, width);
		}
		(player->building->floor + (level + i))->width = width;
	}
	player->building->level += add_level;
	if (y >= 26) {
		setCursorXY(57, y++);
		printf("\t\t...");
	}
	setCursorXY(57, y++);
	printf("현재 건물의 층수는 %03d 층 입니다\n", player->building->level);
}

Player* init_player(int difficulty) {
	Player* player;
	srand((unsigned)time(NULL));	
	player = (Player*)calloc(1, sizeof(Player));
	player->name = (char*)calloc(10,sizeof(char));

	list_init(&(player->contracted_store));
	list_init(&(player->uncontracted_store));
	
	player->money = (rand() % 1000) + 9000 * difficulty;
	player->tax = 300 * (5-difficulty);
	player->reroll = 0;
	return player;
}
void delete_player(Player* player) {
	free(player->name);
	free(player);
}
void delete_BLD(Player* player) {
	int i;
	for (i = 0; i < player->building->level; i++) {
		free(player->building->floor[i].cell);
	}
	free(player->building->floor);
	free(player->building);
}