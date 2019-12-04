#include "dataType.h"

void scan_store(Player* player, Store* store,int id) {
	
	printf("%s      %d      %d      %d      %d\n", (store+(id-1))->name, (store + (id - 1))->money, (store + (id - 1))->rent, (store + (id - 1))->income, (store + (id - 1))->id);

}//가게 정보를 불러온다.

void Floor_state(Player* player, Store* store,int x) {
	int i = 0, j = 0;
	int size = (*(player->building) + x)->floor->width;
	int sizes = size*size;

	int index = size;

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if ((*(player->building) + x)->floor->cell[i + j]->id != 0) {
				printf("●");
			}
			else {
				printf("○");
			}
		}
		printf("\n");
	}

}
//현재 임대된 공간을 보여준다(상점 구별x)
void rent(Player* player, Store* store,int x) {
	int size = (*(player->building) + x)->floor->width;
	int sizes = size * size;
	int index = size;
	store->shape = make_Shape(3, 3);
        srand(time(NULL));
	int a = rand() % size - 3;
	if (a < 0)a = 0;
	int b = rand() % size - 3;
	if (b < 0)b = 0;
	
	while (1) {
		Floor_state(player, store, x);
		int i, j;
		int a = rand() % size - 3;
		if (a < 0)a = 0;
		int b = rand() % size - 3;
		if (b < 0)b = 0;
		int menu = 0;
		print_Shape(store->shape, a, b);
		printf("1.다시     2.결정\n");
		scanf("%d", &menu);
		printf("1.위치다시   2.시계회전   3.반시계회전  4.결정\n");
		scanf("%d", &menu);
		if (menu == 1) {
			for (i = 0; i < size; i++) {
				for (j = 0; j < size; j++) {
					if ((*(player->building) + x)->floor->cell[i + j]->rentrequest ==1) {
						(*(player->building) + x)->floor->cell[i + j]->rentrequest = 0;
					}
				}
			}
			continue;
		}
		else if (menu == 2) {

			rotate_Clock(store->shape);

		}
		else if (menu == 3) {
			rotate_CounterClock(store->shape);
		}
			else if (menu == 4) {
			for (i = 0; i < size; i++) {
				for (j = 0; j < size; j++) {
					if ((*(player->building) + x)->floor->cell[i + j]->rentrequest == 1) {
						(*(player->building) + x)->floor->cell[i + j]->id = store->id;
						(*(player->building) + x)->floor->cell[i + j]->rentrequest = 0;
						break;
					}
				}
			}

		}
	}
}//print_Shape에서 cell좌표에서 되도록 인자를 수정, 
//rentrequest값이 1이 될 경우 그 부분에 id를 저장하고 이 동작이 완료되면 rentrequest는 전부 0으로 변경
void kick(Player* player, Store* store, int x,int idnum) {
	int size = (*(player->building) + x)->floor->width;
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if ((*(player->building) + x)->floor->cell[i + j]->id==idnum) {
				(*(player->building) + x)->floor->cell[i + j]->id=0;
				printf("○");
			}
		}
	}



}
