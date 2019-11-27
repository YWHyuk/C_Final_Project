void Floor_state(Building ***b_addr,int x) {
	int i = 0;
	int j = 0;
	int cellnum = _msize(*(*b_addr + x)) / sizeof(Building**);
	printf("[%d]층의 임대 상태입니다\n");

		for (i = 0; i < cellnum; i++) {

			if ((*(*b_addr + x) + i)->cell->valid == 1) {
				printf("■");
			}
			else if ((*(*b_addr + x) + i)->cell->valid == 0) {
				printf("□");
			}
		}
//임대상태체크용
	
}
void scan_cell(Building*** b_addr,Store* store) {
	int i = 0;
	int x;
	int idnum;
	
	int cellnum = _msize(*(*b_addr + x)) / sizeof(Building**);
	printf("정보를 알고 싶은 층을 입력해주세요\n"); 
	scanf(" %d", &x);

	printf("[%d]층의 알고 싶은 가게의 id를 입력해주세요\n",x);
	scanf(" %d", &idnum);

	for (i = 0; i < cellnum; i++) {
		if ((*(*b_addr + x) + i)->cell->id == idnum) {
			scan_store(store, idnum);
		}

	}

}
//cell에 id가 제대로 입력됬는지 체크용
void scan_store(Store* store, int idnum) {
	int storenum = _msize(store) / sizeof(Store);

	int i = 0;
	int j = 0;
	for (i = 0; i < storenum; i++) {

		if ((store + i)->id == idnum) {
			printf("%s      %d      %d      %d      %d\n", store->name, store->money, store->rent, store->income, store->id);
		}

	}
}
//idnum에 따라 정보 표시가 다름
void rent_store(Player* player, Store* store, Building*** b_addr) {

	
	int x, y;
	int i = 0;
	int j = 0;
	printf("임대를 할 가게에 대한 정보입니다\n"); 
	printf("%s      %d      %d      %d      %d\n", store->name, store->money, store->rent, store->income, store->id);

	printf("임대 해줄 칸의 층을 정해주세요\n");
	scanf(" %d", &x);
	while (1) {
		show(b_addr, x);
		printf("임대 해줄 칸의 호를 정해주세요\n ");
		scanf(" %d", &y);
		if ((*(*b_addr + x) + y)->cell->valid == 1) {
			printf("이미 임대되어있는 칸입니다.\n"); continue;
		}
		else if ((*(*b_addr + x) + y)->cell->valid == 0) {
			(*(*b_addr + x) + y)->cell->valid == 1;
			(*(*b_addr + x) + y)->cell->id = store->id;
			printf("임대완료\n"); break;
		}


	}


}
//idnum을 저장하는 방식의 임대
void kick(Building*** b_addr) {
	int x, y;
	
	printf("층을 골라주세요\n");
	scanf(" %d", &x);

	printf("호를 골라주세요\n");
	scanf(" %d", &y);

	if ((*(*b_addr + x) + y)->cell->valid == 1 || (*(*b_addr + x) + y)->cell->id==0) {
		printf("아무도 임대하지 않았습니다\n");
	}
	else if ((*(*b_addr + x) + y)->cell->valid == 0 || (*(*b_addr + x) + y)->cell->id != 0) {
		(*(*b_addr + x) + y)->cell->valid = 1;
		(*(*b_addr + x) + y)->cell->id = 0;
	}
  //kick도 idnum을 바꾸는 식의 임대
}
