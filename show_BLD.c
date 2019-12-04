void show_BLD(Player* player, Building** b_addr) {

	int i = 0;
	int j = 0;
	int height = player->building->height;
	int floorSize;

	printf("-------------------------------------\n");
	for (i = height; i > 0; i--) {
		printf("%2d층: ", i);
		floorSize = _msize((*b_addr + i - 1)->cell) / sizeof(Cell);

		for (j = 0; j < floorSize; j++) {
			printf("■");
		}

		for (j = 20 - floorSize; j > 0; j--) { // 20은 임의로 설정한 층 당 최대 크기
			printf("□");
		}

		printf("\n");
	}
}
