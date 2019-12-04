#include "prototype.h"

void expand_BLD(Player* player, Building* b_addr) {
	//층을 확장하고 그만큼의 돈을 player money에서 삭감 
	int add_level,width;
	int i = 0;
	int level = player->building->level;
	printf("확장할 건물의 층 수를 입력하세요 : ");
	scanf("%d", &add_level);
	printf("=======================================================\n");
	b_addr->floor = (Floor *)realloc(b_addr->floor,sizeof(Floor)*(level+(add_level)));
	//memset(f_addr->floor, 0x0, sizeof(Floor)*level+(add_level));

	for (i = 0; i <= add_level - 1; i++) {
		printf("%d층 크기 : ", (level) + i + 1);
		scanf("%d", &width);
		(b_addr-> floor+(level + i))->cell = (Cell*)malloc(sizeof(Cell)*width*width);
		printf("\t%d 층에  (%d,%d)칸을 생성했습니다.\n", (level)+i + 1, width,width);
		(b_addr->floor + (level + i))->width = width;
	}
	player->building->level += add_level;
	printf("현재 건물의 층수는 %d 층 입니다\n", player->building->level);
	printf("=======================================================\n");
}