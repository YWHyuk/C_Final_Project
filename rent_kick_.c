#include "dataType.h"

void scan_store(Player* player, Store* store,int id) {
	
	printf("%s      %d      %d      %d      %d\n", (store+(id-1))->name, (store + (id - 1))->money, (store + (id - 1))->rent, (store + (id - 1))->income, (store + (id - 1))->id);

}

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
			if ((*(player->building) + x)->floor->cell[i + j]->rentrequest == 1) {
				(*(player->building) + x)->floor->cell[i + j]->id = store->id;
				break;
			}
		}
	}


}
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
