#include "prototype.h"
#include "graphic.h"
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

	if (!temp_store)
		return 1;
	else
		delete_Shape(temp_store->shape);
	return 0;
}

void static make_store(Player * player, int i) {
	char name[10][10] = { "횟집","마트","고기집","주막","문구점","영화관","주차장","카페","백반집","세탁소" };
	int income, rent, kind;
	Store new_store;
	Shape *shape = make_Shape(3, 3);

	kind = rand() % 10;
	income = 300 + rand() % 100;
	rent = 300 + rand() % 100; //300~400

	new_store.name = (char*)malloc(sizeof(char) * 10);
	strcpy(new_store.name, name[kind]);
	new_store.rent = rent;
	new_store.income = income;
	new_store.id = i + 1;
	new_store.money = 300 + rand() % 1000;
	new_store.shape = shape;

	if (player->uncontracted_store[i].shape != NULL)
		delete_Shape(player->uncontracted_store[i].shape);
	player->uncontracted_store[i] = new_store;
}//프로토타입과 달리 make_store의 인자로 인덱스값을 추가했습니다.

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

void simulate(Player * player) {
	int profit = 0; // 플레이어 이익
	int num = 0; //가게수
	int i = 0;
	num = (int)_msize(player->contracted_store) / sizeof(Store);
	for (i = 0; i < num; i++) {
		player->contracted_store[i].money = player->contracted_store[i].income - player->contracted_store[i].rent;
		//각 가게 자산 = 수익 - 임대료
		//렌트비 못내면 어떻게 할지 구현
		player->money += player->contracted_store[i].rent;//각 가게 임대료만큼 플레이어 자산 증가
	}
	player->money -= (player->building->level * TAX);//층*세금 만큼 플레이어 자산 감소

}//프로토타입과 달리 인자에서 Store*를 뺐습니다.

void refresh_store(Player * player) {
	srand((unsigned)time(NULL));
	int i = 0;
	for (i = 0; i < SNUM; i++) {
		make_store(player, i);
	}
}

void rent_store(Player* player, Store* store) {
	Floor* dest_floor;
	Cell* cell;
	int size, level, menu;
	
	printf("개약 해지할 가게가 있는 층을 선택하세요\n");
	scanf("%d", &level);

	dest_floor = player->building->floor + level;
	size = dest_floor->width;
	cell = dest_floor->cell;

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
				mapping(cell, store);
				return;
			}
			else
				printf("공간이 알맞지 않습니다...\n");
		}
	}

	/*                   WARNING! 
	 *player의 contract 자료구조에 채워 넣는 부분이 필요함 
	 */
}

void kick_store(Building* b_addr) {
	int level;
	int idnum;

	printf("개약 해지할 가게가 있는 층을 선택하세요\n");
	scanf("%d", &level);

	printf("계약 해지할 가게를 골라주세요\n");
	scanf("%d", &idnum);

	if (unmapping(b_addr, level, idnum) == 0)
		printf("계약이 해지 되었습니다\n");
	else 
		printf("해당 가게가 존재하지 않습니다\n");
}


void static enlarged_mapping(Cell* cell, Store* store) {
	int width = get_Width(store->shape);
	int height = get_Height(store->shape);
	int x, y;
	for (x = 0; x <2* width; x+2) {
		for (y = 0; y <2* height; y+2) {
			Block tmp = get_Block(store->shape, x, y);
			if (tmp == exist) {
				copy(cell, store, x, y, width, height);

			}
		}
	}
}
//기존에 만들어진 맵핑에서 확대시키기

void copy_data(Cell* cell, Store* store, int x, int y, int width,int height) {
	int width = get_Width(store->shape);
	int height = get_Height(store->shape);
	int i, j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cell[(x + i)*(width * 2) + (y + j)].valid = 1;
			cell[(x + i)*(width * 2) + (y + j)].store = store;
		}
	}
  //확대를 위한 데이터 복사
