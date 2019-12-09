#include "prototype.h"
#include "graphic.h"
#include "DoublyCircularLinkedList.h"

/* Cell의 사이즈와 shape의 사이즈가 같다고 가정한다. */
void static mapping(Cell* cell, Store* store) {
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

int static unmapping(Building* b_addr, int level, int idnum) {
	Floor* dest_floor = b_addr->floor + level;
	int size = dest_floor->width;
	int i, j;
	Store* temp_store = NULL;

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			temp_store = dest_floor->cell[i * size + j].store;
			if (temp_store != NULL && temp_store->id == idnum) {
				dest_floor->cell[i * size + j].store = NULL;
				dest_floor->cell[i * size + j].valid = 0;
			}
		}
	}
	return 0;
}

void static make_store(Player * player, int i) {
	char name[10][10] = { "횟집","마트","고기집","주막","문구점","영화관","주차장","카페","백반집","세탁소" };
	int income, rent, kind;
	Store* new_store = (Store*)malloc(sizeof(Store));
	Shape *shape = make_Shape(10, 9);

	kind = rand() % 10;
	income = 300 + rand() % 100;
	rent = 300 + rand() % 100; //300~400

	new_store->name = (char*)malloc(sizeof(char) * 10);
	strcpy(new_store->name, name[kind]);
	new_store->rent = rent;
	new_store->income = income;
	new_store->id = i + 1+(player->reroll*SNUM);
	new_store->money = 300 + rand() % 1000;
	new_store->shape = shape;

	push_back(&(player->uncontracted_store), new_store);
}//프로토타입과 달리 make_store의 인자로 인덱스값을 추가했습니다.

void static delete_store(void* store) {
	Store* st = (Store*)store;
	delete_Shape(st->shape);
	free(st);
}

int static check_Space(Cell* cell, Shape* shape) {
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

int simulate(Player * player) {
	int profit = 0; // 플레이어 이익
	int num = 0; //가게수
	int i = 0;
	Node* iter;
	Store* temp;
	double dif;
	for (iter = player->contracted_store.head.after; iter != &(player->contracted_store.tail); ) {
		temp = (Store*)(iter->item);
		/* 세입자 수입 증가 */
		temp->money += temp->income;
		dif = 1.0 + (((rand() % 21) - 10) / 100.0f);
		temp->income = (int)(temp->income * dif);
		if (temp->money < temp->rent) {
			iter = iter->after;
			player->money += temp->money;
			/* 자동으로 파산한 가게는 kick */
			bankrupted_store_info(temp);
			print_Focus_shape(player, player->building->floor[temp->level].cell, temp);
			unmapping(player->building, temp->level, temp->id);
			delete_ById(&(player->contracted_store), delete_store, temp->id);
			getVirtualKeyCode();
		}else{
			temp->money -= temp->rent;
			player->money += temp->rent;
			iter = iter->after;
		}
	}

	player->money -= (player->building->level * TAX);//층*세금 만큼 플레이어 자산 감소
	refresh_store(player);
	if (player->money < 0) {
		return 1;
	}
	return 0;
}//프로토타입과 달리 인자에서 Store*를 뺐습니다.

void refresh_store(Player * player) {
	player->reroll = player->reroll + 1;
	srand((unsigned)time(NULL));
	delete_All(&(player->uncontracted_store), delete_store);
	int i = 0;
	for (i = 0; i < SNUM; i++) {
		make_store(player, i);
	}
}

int rent_store(Player* player,int level ,Store* store) {
	Floor* dest_floor;
	Cell* cell;
	int size;

	dest_floor = player->building->floor + (level-1);
	size = dest_floor->width;
	cell = dest_floor->cell;
	if (check_Space(cell, store->shape)) {
		mapping(cell, store);
		/* player 자료구조에 등록 */
		delete_ById(&(player->uncontracted_store), NULL, store->id);
		store->level = level - 1;
		push_back(&(player->contracted_store), (void*)store);
		return 0;
	}
	return 1;
}

