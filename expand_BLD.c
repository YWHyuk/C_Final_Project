void expand_BLD(Player* player, Building* b_addr) {
	//층을 확장하고 그만큼의 돈을 player money에서 삭감 
	int add_level,width;
	int i = 0;
	int level = player->building->level;
	printf("확장할 건물의 층 수를 입력하세요 : ");
	scanf("%d", &add_level);
	printf("=======================================================\n");
	b_addr->floor = (Floor *)realloc(b_addr,sizeof(Floor)*(level+(add_level)));
	memset(b_addr->floor+(level), 0x0, sizeof(Floor)*add_level);  

	for (i = 1; i <= add_level; i++) {
		printf("%d층 크기 : ", (level) + i);
		scanf("%d", &width);
		(b_addr->floor + (level + i))->cell = (Cell*)malloc(sizeof(Cell)*width*width);
		printf("\t%d 층에  (%d,%d)칸을 생성했습니다.\n", (level)+i, width,width);
		memset((b_addr->floor + (level+i))->cell, 0x0, sizeof(Cell)*width*width);
		(b_addr-> floor+(level + i))->width = width;
	}
	b_addr->level += add_level;
	printf("현재 건물의 층수는 %d 층 입니다\n", b_addr->level);
	printf("=======================================================\n");
}
