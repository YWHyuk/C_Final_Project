#include "prototype.h"

void scan_store(Store* store,int id) {
	printf("%s      %d      %d      %d      %d\n", \
		store[id-1].name, store[id - 1].money, store[id-1].rent, store[id - 1].income, store[id - 1].id);
}//가게 정보를 불러온다.

void Floor_state(Player* player, Store* store,int level) {
	int i, j;
	Floor* dest_floor = player->building->floor + level;
	int size = dest_floor->width;
	
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (dest_floor->cell[i + j].valid == 1)
				printf("●");
			else 
				printf("○");
		}
		printf("\n");
	}
}
void print_Rentprocess(Cell* cell, Shape* shape) {
	int width = get_Width(shape);
	int height = get_Height(shape);
	int x, y;
	for (x = 0; x < width; x++) {
		for ( y = 0; y < height; y++) {
			Block tmp = get_Block(shape, x, y);
			if (tmp == exist && cell[x*width + y].valid == 1) {
				/* 겹치는 칸 */
				textcolor(RED, BLACK);
				printf("■");
			}else if(tmp != exist && cell[x*width + y].valid == 1){
				/* 기존의 상점만 차지하는 칸 */
				textcolor(GREEN, BLACK);
				printf("■");
			}
			else if (tmp == exist && cell[x*width + y].valid != 1) {
				/* 새로운 상점만 차지하는 칸 */
				textcolor(BLUE, BLACK);
				printf("■");
			}
			else {
				/* 비어있는 칸 */
				textcolor(WHITE, BLACK);
				printf("□");
			}
		}
		textcolor(WHITE, BLACK);
		printf("\n");
	}
}
int check_Space(Cell* cell, Shape* shape) {
	int width = get_Width(shape);
	int height = get_Height(shape);
	int x, y;
	for (x = 0; x < width; x++) {
		for (y = 0; y < height; y++) {
			Block tmp = get_Block(shape, x, y);
			if (tmp == exist && cell[x*width + y].valid == 1) 
				/* 겹치는 칸 */
				return 0;
		}
	}
	return 1;
}
void register_Space(Cell* cell, Store* store) {
	int width = get_Width(store->shape);
	int height = get_Height(store->shape);
	int x, y;
	for (x = 0; x < width; x++) {
		for (y = 0; y < height; y++) {
			Block tmp = get_Block(store->shape, x, y);
			if (tmp == exist) {
				cell[x * width + y].valid = 1;
				cell[x * width + y].store = store;
			}
		}
	}
}

void rent_store(Player* player, Store* store,int level) {
	Floor* dest_floor = player->building->floor + level;
	int size = dest_floor->width;
	Cell* cell = dest_floor->cell;
	int menu;
	
	while (1) {
		print_Rentprocess(cell,store->shape);
		
		printf("1.위치 다시   2.시계회전   3.반시계회전  4.결정\n");
		scanf("%d", &menu);
		if (menu == 1) {
			delete_Shape(store->shape);
			store->shape = make_Shape(size, size);
		}
		else if (menu == 2)
			rotate_Clock(store->shape);
		else if (menu == 3)
			rotate_CounterClock(store->shape);
		else if (menu == 4) {
			if (check_Space(cell, store->shape)) {
				register_Space(cell, store);
				return;
			}
			else
				printf("공간이 알맞지 않습니다...\n");
		}
	}
}

void kick(Player* player, Store* store, int level,int idnum) {
	Floor* dest_floor = player->building->floor + level;
	int size = dest_floor->width; 
	int i, j;
	Store* temp_store = NULL;
	
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			temp_store = dest_floor->cell[i * size + j].store;
			if (temp_store != NULL && temp_store->id ==idnum) 
				dest_floor->cell[i * size + j].store = NULL;
		}
	}

	if (!temp_store) 
		printf("해당 층에 해당 가게를 찾을 수 없습니다...\n");
	else
		delete_Shape(temp_store->shape);
}
