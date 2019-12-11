#include "MyConsole.h"
#include "prototype.h"
#include "graphic.h"
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int select_difficulty () {

	KEY_EVENT_RECORD input;
	int difficulty = 4;
	setCursorXY(70, 3);
	printf("──────────────────");
	setCursorXY(73, 4);
	printf("난이도  설정");
	setCursorXY(70, 5);
	printf("──────────────────");

	setCursorXY(69, 9);
	printf("◀");
	setCursorXY(87, 9);
	printf("▶");
	
	do {
		setCursorXY(74, 9);
		printf("%d분위 지역", difficulty);

		switch (difficulty) {
		case 4:
			setCursorXY(0, 2);
			printf("                                                            \n");
			setCursorXY(0, 3);
			printf("                                    ■■    ■              \n");
			setCursorXY(0, 4);
			printf("                                    ■■■■■■            \n");
			setCursorXY(0, 5);
			printf("                                  ■■■■■■■            \n");
			setCursorXY(0, 6);
			printf("                                ■■■■■■■■            \n");
			setCursorXY(0, 7);
			printf("                                ■■■■■■■■            \n");
			setCursorXY(0, 8);
			printf("                      □□□    ■■■■■■■■■          \n");
			setCursorXY(0, 9);
			printf("                    □□□□    ■■■■■■■■■          \n");
			setCursorXY(0, 10);
			printf("                    □□□□□□□□■■■■■■■          \n");
			setCursorXY(0, 11);
			printf("                    □□□□□□□□■■□■■■■          \n");
			setCursorXY(0, 12);
			printf("                    □□□□□□□□□□□□■■■■        \n");
			setCursorXY(0, 13);
			printf("    □□            □□□□□□□□□□□□■■■          \n");
			setCursorXY(0, 14);
			printf("    □□□      □□□□□□□□□□□□□□□■■          \n");
			setCursorXY(0, 15);
			printf("    □□□□  □□□□□□□□□□□□□□□□■            \n");
			setCursorXY(0, 16);
			printf("  □□□□□□  □□□□□□□□□□□□□□□□      □□□\n");
			setCursorXY(0, 17);
			printf("  □□□□□□    □□□□□□□□□□□□□□□□  □□□□\n");
			setCursorXY(0, 18);
			printf("    □□□□□□        □□□□□□□□□□□□  □□□□□\n");
			setCursorXY(0, 19);
			printf("        □□□□□□□    □□□□□    □□□□  □□□    \n");
			setCursorXY(0, 20);
			printf("        □□□□□□□□    □□    □□        □□□□    \n");
			setCursorXY(0, 21);
			printf("        □□□□□□□□□        □□□□□□□□□□      \n");
			setCursorXY(0, 22);
			printf("        □□□□□□□□□□    □□□□□□□□□□□      \n");
			setCursorXY(0, 23);
			printf("        □□□□□□□□□□□□□□□□□□□□□□□□    \n");
			setCursorXY(0, 24);
			printf("        □□    ■■□□□□□□□□□□□□□□□□□□    \n");
			setCursorXY(0, 25);
			printf("                ■■□□□□□□□□□□□□□□□□□      \n");
			setCursorXY(0, 26);
			printf("                ■■■□□□□□□□□□□□□□□□        \n");
			setCursorXY(0, 27);
			printf("                  ■■□□□□□      □□□□□            \n");
			setCursorXY(0, 28);
			printf("                  ■■  □□            □□□              \n");
			setCursorXY(0, 29);
			printf("                                        □                  \n");
			setCursorXY(0, 30);
			printf("                                                            \n");

			setCursorXY(62, 11);
			printf("강북구, 금천구, 노원구, 중랑구, ...\n");

			setCursorXY(68, 13);
			printf("      (쉬움 모드)      ");

			break;
		case 3:
			setCursorXY(0, 2);
			printf("                                                            \n");
			setCursorXY(0, 3);
			printf("                                    □□    □              \n");
			setCursorXY(0, 4);
			printf("                                    □□□□□□            \n");
			setCursorXY(0, 5);
			printf("                                  □□□□□□□            \n");
			setCursorXY(0, 6);
			printf("                                □□□□□□□□            \n");
			setCursorXY(0, 7);
			printf("                                □□□□□□□□            \n");
			setCursorXY(0, 8);
			printf("                      ■■■    □□□□□□□□□          \n");
			setCursorXY(0, 9);
			printf("                    ■■■■    □□□□□□□□□          \n");
			setCursorXY(0, 10);
			printf("                    ■■■■□□■■□□□□□□□          \n");
			setCursorXY(0, 11);
			printf("                    ■■■□□□■■□□■□□□□          \n");
			setCursorXY(0, 12);
			printf("                    ■■■■□□■■■■■■□□□□        \n");
			setCursorXY(0, 13);
			printf("    ■■            ■■■■□□■■■■■■□□□          \n");
			setCursorXY(0, 14);
			printf("    ■■■      □■■■■■□□□■■■■■■□□          \n");
			setCursorXY(0, 15);
			printf("    ■■■■  □□□□■■■□□□□■■■■■□            \n");
			setCursorXY(0, 16);
			printf("  ■■■■■■  □□□□■■■□□□□□□■■□      □□□\n");
			setCursorXY(0, 17);
			printf("  ■■■■■■    □□□□□□□□□□□□□□□□  □□□□\n");
			setCursorXY(0, 18);
			printf("    ■■■■■■        □□□□□□□□□□□□  □□□□□\n");
			setCursorXY(0, 19);
			printf("        □■■□□□□    □□□□□    □□□□  □□□    \n");
			setCursorXY(0, 20);
			printf("        □□□□□□□□    □□    □□        □□□□    \n");
			setCursorXY(0, 21);
			printf("        □□□□□□□□□        □□□□□□□□□□      \n");
			setCursorXY(0, 22);
			printf("        ■■■■■□□□□□    □□□□□□□□□□□      \n");
			setCursorXY(0, 23);
			printf("        ■■■■■□□■■□□□□□□□□□□□□□□□    \n");
			setCursorXY(0, 24);
			printf("        ■■    □□■■■■□□□□□□□□□□□□□□    \n");
			setCursorXY(0, 25);
			printf("                □□■■■■■□□□□□□□□□□□□      \n");
			setCursorXY(0, 26);
			printf("                □□□■■■■■□□□□□□□□□□        \n");
			setCursorXY(0, 27);
			printf("                  □□■■■■■      □□□□□            \n");
			setCursorXY(0, 28);
			printf("                  □□  ■■            □□□              \n");
			setCursorXY(0, 29);
			printf("                                        □                  \n");
			setCursorXY(0, 30);
			printf("                                                            \n");
			
			setCursorXY(62, 11);
			printf("강서구, 관악구, 구로구, 은평구, ...\n");

			setCursorXY(68, 13);
			printf("      (보통 모드)      ");

			break;
		case 2:
			setCursorXY(0, 2);
			printf("                                                            \n");
			setCursorXY(0, 3);
			printf("                                    □□    □              \n");
			setCursorXY(0, 4);
			printf("                                    □□□□□□            \n");
			setCursorXY(0, 5);
			printf("                                  □□□□□□□            \n");
			setCursorXY(0, 6);
			printf("                                □□□□□□□□            \n");
			setCursorXY(0, 7);
			printf("                                □□□□□□□□            \n");
			setCursorXY(0, 8);
			printf("                      □□□    □□□□□□□□□          \n");
			setCursorXY(0, 9);
			printf("                    □□□□    □□□□□□□□□          \n");
			setCursorXY(0, 10);
			printf("                    □□□□■■□□□□□□□□□          \n");
			setCursorXY(0, 11);
			printf("                    □□□■■■□□□□□□□□□          \n");
			setCursorXY(0, 12);
			printf("                    □□□□■■□□□□□□□□□□        \n");
			setCursorXY(0, 13);
			printf("    □□            □□□□■■□□□□□□□□□          \n");
			setCursorXY(0, 14);
			printf("    □□□      ■□□□□□■■■□□□□□□□□          \n");
			setCursorXY(0, 15);
			printf("    □□□□  ■■■■□□□■■■■□□□□□□            \n");
			setCursorXY(0, 16);
			printf("  □□□□□□  ■■■■□□□■■■■■■□□■      ■■■\n");
			setCursorXY(0, 17);
			printf("  □□□□□□    ■■■■■■■■■■■■■■■■  ■■■■\n");
			setCursorXY(0, 18);
			printf("    □□□□□□        ■■□□□□■■■■■■  ■■■■■\n");
			setCursorXY(0, 19);
			printf("        ■□□■■■■    □□□□□    ■■■■  □■■    \n");
			setCursorXY(0, 20);
			printf("        ■■■■■■■■    □□    □□        □□■■    \n");
			setCursorXY(0, 21);
			printf("        ■■■■■■■■■        □□□□□□□□□□      \n");
			setCursorXY(0, 22);
			printf("        □□□□□■■■■■    □□□□□□□□□□□      \n");
			setCursorXY(0, 23);
			printf("        □□□□□■■□□■■■□□□□□□□□□□□□    \n");
			setCursorXY(0, 24);
			printf("        □□    ■■□□□□■■□□□□□□□□□□□□    \n");
			setCursorXY(0, 25);
			printf("                ■■□□□□□□□□□□□□□□□□□      \n");
			setCursorXY(0, 26);
			printf("                ■■■□□□□□□□□□□□□□□□        \n");
			setCursorXY(0, 27);
			printf("                  ■■□□□□□      □□□□□            \n");
			setCursorXY(0, 28);
			printf("                  ■■  □□            □□□              \n");
			setCursorXY(0, 29);
			printf("                                        □                  \n");
			setCursorXY(0, 30);
			printf("                                                            \n");
			
			setCursorXY(62, 11);
			printf("강동구, 광진구, 마포구, 종로구, ...\n");

			setCursorXY(68, 13);
			printf("     (어려움 모드)     ");

			break;
		case 1:
			setCursorXY(0, 2);
			printf("                                                            \n");
			setCursorXY(0, 3);
			printf("                                    □□    □              \n");
			setCursorXY(0, 4);
			printf("                                    □□□□□□            \n");
			setCursorXY(0, 5);
			printf("                                  □□□□□□□            \n");
			setCursorXY(0, 6);
			printf("                                □□□□□□□□            \n");
			setCursorXY(0, 7);
			printf("                                □□□□□□□□            \n");
			setCursorXY(0, 8);
			printf("                      □□□    □□□□□□□□□          \n");
			setCursorXY(0, 9);
			printf("                    □□□□    □□□□□□□□□          \n");
			setCursorXY(0, 10);
			printf("                    □□□□□□□□□□□□□□□          \n");
			setCursorXY(0, 11);
			printf("                    □□□□□□□□□□□□□□□          \n");
			setCursorXY(0, 12);
			printf("                    □□□□□□□□□□□□□□□□        \n");
			setCursorXY(0, 13);
			printf("    □□            □□□□□□□□□□□□□□□          \n");
			setCursorXY(0, 14);
			printf("    □□□      □□□□□□□□□□□□□□□□□          \n");
			setCursorXY(0, 15);
			printf("    □□□□  □□□□□□□□□□□□□□□□□            \n");
			setCursorXY(0, 16);
			printf("  □□□□□□  □□□□□□□□□□□□□□□□      □□□\n");
			setCursorXY(0, 17);
			printf("  □□□□□□    □□□□□□□□□□□□□□□□  □□□□\n");
			setCursorXY(0, 18);
			printf("    □□□□□□        □□■■■■□□□□□□  □□□□□\n");
			setCursorXY(0, 19);
			printf("        □□□□□□□    ■■■■■    □□□□  ■□□    \n");
			setCursorXY(0, 20);
			printf("        □□□□□□□□    ■■    ■■        ■■□□    \n");
			setCursorXY(0, 21);
			printf("        □□□□□□□□□        ■■■■■■■■■■      \n");
			setCursorXY(0, 22);
			printf("        □□□□□□□□□□    ■■■■■■■■■■■      \n");
			setCursorXY(0, 23);
			printf("        □□□□□□□■■□□□■■■■■■■■■■■■    \n");
			setCursorXY(0, 24);
			printf("        □□    □□■■■■□□■■■■■■■■■■■■    \n");
			setCursorXY(0, 25);
			printf("                □□■■■■■■■■■■■■■■■■■      \n");
			setCursorXY(0, 26);
			printf("                □□□■■■■■■■■■■■■■■■        \n");
			setCursorXY(0, 27);
			printf("                  □□■■■■■      ■■■■■            \n");
			setCursorXY(0, 28);
			printf("                  □□  ■■            ■■■              \n");
			setCursorXY(0, 29);
			printf("                                        ■                  \n");
			setCursorXY(0, 30);
			printf("                                                            \n");

			setCursorXY(62, 11);
			printf("  강남구, 서초구, 송파구, 용산구    \n");

			setCursorXY(70, 13);
			printf("     (헬 모드)     ");

			break;
		default:
			break;
		}

		input = getVirtualKeyCode();

		switch (input.wVirtualKeyCode) {
		case VK_UP:
			if (difficulty > 1)
				difficulty--;
			else
				difficulty = 4;
			break;
		case VK_DOWN:
			if (difficulty < 4)
				difficulty++;
			else
				difficulty = 1;
			break;
		case VK_LEFT:
			if (difficulty > 1)
				difficulty--;
			else
				difficulty = 4;
			break;
		case VK_RIGHT:
			if (difficulty < 4)
				difficulty++;
			else
				difficulty = 1;
			break;
		default:
			return difficulty;
			break;
		}
	} while (1);
}
void show_ui_store_shape(Store* store) {

	int i, j;
	Block b;
	clear_right_rect();
	if (store != NULL) 
		for (i = 0; i < 10; i++) {
			setCursorXY(66, 7 + i);
			for (j = 0; j < 10; j++) {
				b = get_Block(store->shape, i, j);
				if (b == exist)
					printf("■");
				else
					printf("□");
			}
		}

}
void show_ui_rent_command() {
	setCursorXY(58, 26);
	printf("Q: 모양 재설정  W: 시계 방향 회전");

	setCursorXY(58, 27);
	printf("W: 반시계 방향 회전 R: 계약하기");
}
void show_ui_store_info(Store* store) {
	
	if(store == NULL){
		setCursorXY(60, 14);
		printf("해당 층은 입주한 가게가 없습니다");
	}
	else {
		setCursorXY(75, 4);
		printf("▲");
		setCursorXY(75, 25);
		printf("▼");

		setCursorXY(66, 19);
		printf("가게이름 : %9s", store->name);

		setCursorXY(66, 20);
		printf("임대료   : %5d만원", store->rent);

		setCursorXY(66, 21);
		printf("수익     : %5d만원", store->income);

		setCursorXY(66, 22);
		printf("재산     : %5d만원", store->money);
	}
}
void bankrupted_store_info(Store* store) {
	clear_right_rect();
	setCursorXY(64, 10);
	printf("해당 가게가 파산했습니다.");
	setCursorXY(64, 12);
	printf("가게이름 : %9s", store->name);
	setCursorXY(64, 14);
	printf("입주 층  :       %03d", store->level + 1);
	setCursorXY(68, 17);
	printf("<Press Enter>");
}
void show_ui_floor(Player* player,Cell* cell) {

	int i, j;
	int color;
	int width = player->building->floor->width;
	for (i = 0; i<width; i++) {
		for (j = 0; j < width; j++) {
			if (cell[i * width + j].valid == 1)
				color = (cell[i * width + j].store->id % (WHITE - 1)) + 1;/* 1 ~ 14 */
			else 
				color = WHITE;
			textcolor(color,color);
			setCursorXY(10 + 4*j, 5 + i* 2);
			printf("    ");
			setCursorXY(10 + 4*j, 5 + i* 2 + 1);
			printf("    ");
		}
	}
	textcolor(BLACK, WHITE);
}

void show_ui_floor_info(int level) {// 층 선택
	textcolor(WHITE, BLACK);
	setCursorXY(25, 26);
	printf("◀%03d층▶",level);
}
void show_ui_frame() {

	int i;
	textcolor(WHITE, BLACK);
	setCursorXY(4, 2);
	printf("┌─────────────────────────────────────────────────┬───────────────────────────────────────┐");

	for (i = 3; i < 28; i++) {
		setCursorXY(4, i);
		printf("│");
		setCursorXY(54, i);
		printf("│");
		setCursorXY(94, i);
		printf("│");
	}
	setCursorXY(4, 28);
	printf("├─────────────────────────────────────────────────┼───────────────────────────────────────┤");

	for (i = 29; i < 37; i++) {
		setCursorXY(4, i);
		printf("│");
		setCursorXY(54, i);
		printf("│");
		setCursorXY(94, i);
		printf("│");
	}

	setCursorXY(4, 37);
	printf("└─────────────────────────────────────────────────┴───────────────────────────────────────┘");


	setCursorXY(26, 30);
	printf("┌─────────────────────┐");
	setCursorXY(26, 31);
	printf("│");
	setCursorXY(48, 31);
	printf("│");
	setCursorXY(26, 32);
	printf("└─────────────────────┘");


	setCursorXY(26, 33);
	printf("┌─────────────────────┐");
	setCursorXY(26, 34);
	printf("│");
	setCursorXY(48, 34);
	printf("│");
	setCursorXY(26, 35);
	printf("└─────────────────────┘");


	setCursorXY(60, 31);
	printf("┌───────────────────────────┐");
	setCursorXY(60, 32);
	printf("│");
	setCursorXY(88, 32);
	printf("│");
	setCursorXY(60, 33);
	printf("└───────────────────────────┘");

	setCursorXY(13, 30);
	printf("┌───┐");
	setCursorXY(13, 31);
	printf("│   │");
	setCursorXY(13, 32);
	printf("└───┘");
	setCursorXY(10, 33);
	printf(" ┌───────┐");
	setCursorXY(10, 34);
	printf("┌┘       └┐");
	setCursorXY(10, 35);
	printf("└─────────┘");
}
void show_ui_user_info(Player* player) {
	textcolor(WHITE, BLACK);
	setCursorXY(28, 31);
	printf("이름 : %10s",player->name);//추가

	setCursorXY(28, 34);
	printf("전체 건물층수 :%03d층",player->building->level);//추가

	setCursorXY(62, 32);
	printf("현재 재산 : %10d만원", player->money);//추가
}
void show_ui_menu(int menu) {
	textcolor(WHITE, BLACK);
	clear_right_rect();

	setCursorXY(62, menu * 5);
	printf("▶");

	setCursorXY(67, 5);
	printf("1. 시뮬레이션");//추가

	setCursorXY(67, 10);
	printf("2. 세입자 구하기");//추가

	setCursorXY(67, 15);
	printf("3. 건물 확장하기");//추가

	setCursorXY(67, 20);
	printf("4. 입주 가게 정보");//추가

	setCursorXY(67, 25);
	printf("5. 종료하기");//추가
};
void show_ui_rent(Player* player, int* level) {
	KEY_EVENT_RECORD input;
	Cell* cell;
	Store* store;
	int width = player->building->floor->width;

	setCursorVisibility(0);
	setConsoleSize(50, 40);
	setFontSize(12);
	show_ui_frame();

	setCursorXY(0, 37);

	if (player->uncontracted_store.cursor->item == NULL)
		find(&(player->uncontracted_store), -1);

	/* 입력 처리 루틴 */
	while (1) {
		cell = player->building->floor[*level - 1].cell;
		store = (Store*)(player->uncontracted_store.cursor->item);
		show_ui_store_shape(store);
		show_ui_store_info(store);
		show_ui_rent_command();

		print_Rentprocess(player, cell, store->shape);
		show_ui_floor_info(*level);

		show_ui_user_info(player);

		input = getVirtualKeyCode();

		switch (input.wVirtualKeyCode) {
		case VK_UP:
			find(&(player->uncontracted_store), -1);
			break;
		case VK_DOWN:
			rfind(&(player->uncontracted_store), -1);
			break;
		case VK_LEFT:
			*level = *level > 1 ? *level - 1 : *level;
			break;
		case VK_RIGHT:
			*level = *level < player->building->level ? *level + 1 : *level;
			break;
		case VK_Q:
			delete_Shape(store->shape);
			store->shape = make_Shape(WIDTH, WIDTH);
			break;
		case VK_W:
			rotate_Clock(store->shape);
			break;
		case VK_E:
			rotate_CounterClock(store->shape);
			break;
		case VK_R:
			if (rent_store(player, *level, store)) {
				MessageBox(NULL, _T("계약 실패...!"), _T("알림"), MB_OK);
			}
			else {
				MessageBox(NULL, _T("계약 성공!"), _T("알림"), MB_OK);
				return;
			}
			break;
		case VK_RETURN:
			return;
		}
	}
}
void show_ui_info(Player* player, int* level) {
	KEY_EVENT_RECORD input;
	Cell* cell;
	Store* store;
	int width = player->building->floor->width;

	setCursorVisibility(0);
	setConsoleSize(50, 40);
	setFontSize(12);
	show_ui_frame();

	setCursorXY(0, 37);

	if (player->contracted_store.cursor->item == NULL )
		find(&(player->contracted_store), (*level)-1);
	/* 입력 처리 루틴 */
	while (1) {
		if (player->contracted_store.cursor->item->level != *level - 1)
			find(&(player->contracted_store), (*level) - 1);

		cell = player->building->floor[*level - 1].cell;
		store = (Store*)(player->contracted_store.cursor->item);
		show_ui_store_shape(store);
		show_ui_store_info(store);

		print_Focus_shape(player, cell, store);
		show_ui_floor_info(*level);

		show_ui_user_info(player);

		input = getVirtualKeyCode();

		switch (input.wVirtualKeyCode) {
		case VK_UP:
			find(&(player->contracted_store), (*level)-1);
			break;
		case VK_DOWN:
			rfind(&(player->contracted_store), (*level)-1);
			break;
		case VK_LEFT:
			*level = *level > 1 ? *level - 1 : *level;
			refresh_Cursor(&(player->contracted_store));
			find(&(player->contracted_store), (*level)-1);
			break;
		case VK_RIGHT:
			*level = *level < player->building->level ? *level + 1 : *level;
			refresh_Cursor(&(player->contracted_store));
			find(&(player->contracted_store), (*level)-1);
			break;
		case VK_RETURN:
			return;
		}
	}
}
void show_ui(Player* player) {
	
	KEY_EVENT_RECORD input;
	Cell* cell;

	int level = 1;
	int menu = 1;
	int width = player->building->floor->width;

	setCursorVisibility(0);
	setConsoleSize(50, 40);
	setFontSize(12);
	show_ui_frame();
	
	setCursorXY(0, 37);

	/* 입력 처리 루틴 */
	while (1) {
		cell = player->building->floor[level - 1].cell;

		show_ui_menu(menu);

		show_ui_floor(player,cell);
		show_ui_floor_info(level);

		show_ui_user_info(player);

		input = getVirtualKeyCode();

		switch (input.wVirtualKeyCode) {
		case VK_UP:
			menu = menu > 1 ? menu - 1 : menu;
			break;
		case VK_DOWN:
			menu = menu < 5 ? menu + 1 : menu;
			break;
		case VK_LEFT:
			level = level > 1 ? level - 1 : level;
			break;
		case VK_RIGHT:
			level = level < player->building->level ? level + 1 : level;
			break;
		case VK_RETURN:
			/* 고른 메뉴에 따라 스타트 */
			switch (menu) {
			case SIMUL:
				if (simulate(player)) {
					/* game over*/
					MessageBox(NULL, _T("Game Over!"), _T("알림"), MB_OK);
					return;
				}
				break;
			case RENT:
				show_ui_rent(player, &level);
				break;
			case EXPAND:
				expand_BLD(player);
				break;
			case INFO:
				show_ui_info(player, &level);
				break;
			case QUIT:
				return;
			}
			break;
		default:
			break;
		}
	}
}

void clear_all() {
	int i;
	for (i = 0; i < 40; i++) {
		setCursorXY(0, i);
		printf("                                                                                                    ");
	}
	setCursorXY(0, 0);
}
void clear_right_rect() {
	int i;
	for (i = 3; i < 28; i++) {
		setCursorXY(55, i);
		printf("                                       ");
	}

	setCursorXY(0, 0);
}

void print_Rentprocess(Player* player, Cell* cell, Shape* shape) {
	int width = get_Width(shape);
	int height = get_Height(shape);
	int x, y;
	int color;
	for (x = 0; x < width; x++) {
		for (y = 0; y < height; y++) {
			Block tmp = get_Block(shape, x, y);
			if (tmp == exist && cell[x*width + y].valid == 1)
				/* 겹치는 칸 */
				color = RED;
			else if (tmp != exist && cell[x*width + y].valid == 1)
				/* 기존의 상점만 차지하는 칸 */
				color = GREEN;
			else if (tmp == exist && cell[x*width + y].valid != 1)
				/* 새로운 상점만 차지하는 칸 */
				color = BLUE;
			else
				/* 비어있는 칸 */
				color = WHITE;
			textcolor(color, color);
			setCursorXY(10 + 4 * y, 5 + x * 2);
			printf("    ");
			setCursorXY(10 + 4 * y, 5 + x * 2 + 1);
			printf("    ");
		}
	}
	textcolor(WHITE, BLACK);
}
void print_Focus_shape(Player* player, Cell* cell, Store* store) {
	int width = player->building->floor->width;
	int x, y;
	int color;
	if (store == NULL) {	
		for (x = 0; x < width; x++) {
			for (y = 0; y < width; y++) {
				if (cell[x * width + y].valid == 1)
					color = GREEN;/* 1 ~ 14 */
				else
					color = WHITE;
				textcolor(color, color);
				setCursorXY(10 + 4 * y, 5 + x * 2);
				printf("    ");
				setCursorXY(10 + 4 * y, 5 + x * 2 + 1);
				printf("    ");
			}
		}
		textcolor(WHITE, BLACK);
	}

	else {
		for (x = 0; x < width; x++) {
			for (y = 0; y < width; y++) {
				if (cell[x*width + y].store == store)
					color = GREEN;
				else if (cell[x*width + y].store == NULL)
					color = WHITE;
				else 
					color = RED;
				textcolor(color, color);
				setCursorXY(10 + 4 * y, 5 + x * 2);
				printf("    ");
				setCursorXY(10 + 4 * y, 5 + x * 2 + 1);
				printf("    ");
			}
		}
		textcolor(WHITE, BLACK);
	}
}

int get_IntByArrow(int money) {
	int ret = 1;
	KEY_EVENT_RECORD input;
	while (1) {
		setCursorXY(75, 12);
		printf("▲");
		setCursorXY(75, 16);
		printf("▼");
		setCursorXY(75, 14);
		printf("%d",ret);
		setCursorXY(70, 18);
		printf("비용 : %d", FLOOR_PRICE * ret);

		input = getVirtualKeyCode();
		switch (input.wVirtualKeyCode) {
		case VK_UP:
			ret = ret >= 9 ? 1 : ret + 1;
			break;
		case VK_DOWN:
			ret = ret <= 1 ? 9 : ret - 1;
			break;
		case VK_RETURN:
			if (money > FLOOR_PRICE * ret)
				return ret;
			else {
				MessageBox(NULL, _T("돈이 부족합니다!"), _T("알림"), MB_OK);
				return 0;
			}
		}
	}
}
void slow_printf(char *str) {
	unsigned long i, sz = (unsigned long)strlen(str);
	COORD temp = getCursorCoord();
	setCursorXY(CONSOLE_X - sz/2,temp.Y);
	for (i = 0ul; i < sz; i++) {
		if ((str[i] & 0x80) == 0x80) {
			printf("%c%c", str[i], str[i + 1]); //한글이면 2byte 출력
			i++;
		}
		else
			printf("%c",str[i]) ; //아니면 그냥 출력
#ifdef DEBUG
		Sleep(50);
#endif
	}
	return;
}



void introduction(Player* player) {
	char buffer[1024];
	
	clear_all();
	setCursorXY(0, CONSOLE_Y / 2 - 1);
	slow_printf("당신의 이름은? ");
	scanf("%s", player->name);
	sprintf(buffer, "2009년 %s는 과제를 하던 도중\n", player->name);
	slow_printf(buffer);
	slow_printf("우연히 비트코인을 알게 되었다.\n");

	slow_printf("재미삼아 비트코인을 구매하게 되었고...\n\n");
	slow_printf("10년이 지난후 지금, 비트코인을 구매하게 된 사실을 떠올렸다.\n");
	sprintf(buffer, "%s는 불어난 돈으로 작은 건물을 구매하였다.\n", player->name);
	slow_printf(buffer);

}

void intro_building() {
	int i;
	int j;
	for (i = 40; i > 0; i--) {

		j = 40 - i;


		if (j >= 0){
			setCursorXY(6, i);
			printf("                   I");
		}
		if (j >= 1){
			setCursorXY(6, i + 1);
			printf("                   I");
		}
		if (j >= 2) {
			setCursorXY(6, i + 2);
			printf("        .....■■■■■■■..... ");
		}
		if (j >= 3) {
			setCursorXY(6, i + 3);
			printf("      ■■■■■■■■■■■■■■ ");
		}
		if (j >= 4) {
			setCursorXY(6, i + 4);
			printf("  ■■■■■■■■■■■■■■■■■■ ");
		}
		if (j >= 5) {
			setCursorXY(6, i + 5);
			printf("  ■■■■■■■■■■■■■■■■■■ ");
		}
		if (j >= 6) {
			setCursorXY(6, i + 6);
			printf("  ■■■■■■■■■■■■■■■■■■ ");
		}
		if (j >= 7) {
			setCursorXY(6, i + 7);
			printf("■            ■        ■            ■ ");
		}
		if (j >= 8) {
			setCursorXY(6, i + 8);
			printf("■■■■■■■■        ■■■■■■■■ ");
		}
		if (j >= 9) {
			setCursorXY(6, i + 9);
			printf("■■■■■■■■■■■■■■■■■■■■ ");
		}
		if (j >= 10) {
			setCursorXY(6, i + 10);
			printf("■■■■■■■■        ■■■■■■■■ ");
		}
		if (j >= 11) {
			setCursorXY(6, i + 11);
			printf("■            ■■■■■■            ■ ");
		}
		if (j >= 12) {
			setCursorXY(6, i + 12);
			printf("■            ■        ■            ■ ");
		}
		if (j >= 13) {
			setCursorXY(6, i + 13);
			printf("■            ■■■■■■            ■ ");
		}
		if (j >= 14) {
			setCursorXY(6, i + 14);
			printf("■::::::::::::■        ■::::::::::::■ ");
		}
		if (j >= 15) {
			setCursorXY(6, i + 15);
			printf("■■■■■■■■■■■■■■■■■■■■ ");
		}
		if (j >= 16) {
			setCursorXY(6, i + 16);
			printf("■■■■■■■■        ■■■■■■■■ ");
		}
		if (j >= 17) {
			setCursorXY(6, i + 17);
			printf("■■■■■■■■        ■■■■■■■■ ");
		}
		if (j >= 18) {
			setCursorXY(6, i + 18);
			printf("■            ■■■■■■            ■ ");
		}
		if (j >= 19) {
			setCursorXY(6, i + 19);
			printf("■            ■        ■            ■ ");
		}
		if (j >= 20) {
			setCursorXY(6, i + 20);
			printf("■            ■■■■■■            ■ ");
		}
		if (j >= 21) {
			setCursorXY(6, i + 21);
			printf("■            ■        ■            ■ ");
		}
		if (j >= 22) {
			setCursorXY(6, i + 22);
			printf("■::::::::::::■■■■■■::::::::::::■ ");
		}
		if (j >= 23) {
			setCursorXY(6, i + 23);
			printf("■■■■■■■■        ■■■■■■■■ ");
		}
		if (j >= 24) {
			setCursorXY(6, i + 24);
			printf("■■■■■■■■■■■■■■■■■■■■ ");
		}
		if (j >= 25) {
			setCursorXY(6, i + 25);
			printf("■■■■■■■■        ■■■■■■■■ ");
		}
		if (j >= 26) {
			setCursorXY(6, i + 26);
			printf("■            ■        ■            ■ ");
		}
		if (j >= 27) {
			setCursorXY(6, i + 27);
			printf("■            ■■■■■■            ■ ");
		}
		if (j >= 28) {
			setCursorXY(6, i + 28);
			printf("■            ■        ■            ■ ");
		}
		if (j >= 29) {
			setCursorXY(6, i + 29);
			printf("■::::::::::::■■■■■■::::::::::::■ ");
		}
		if (j >= 30) {
			setCursorXY(6, i + 30);
			printf("■■■■■■■■        ■■■■■■■■ ");
		}
		if (j >= 31) {
			setCursorXY(6, i + 31);
			printf("■■■■■■■■■■■■■■■■■■■■ ");
		}
		if (j >= 32) {
			setCursorXY(6, i + 32);
			printf("■■■■■■■■        ■■■■■■■■ ");
		}
		if (j >= 33) {
			setCursorXY(6, i + 33);
			printf("■            ■        ■            ■ ");
		}
		if (j >= 34) {
			setCursorXY(6, i + 34);
			printf("■            ■        ■            ■ ");
		}
		if (j >= 35) {
			setCursorXY(6, i + 35);
			printf("■            ■        ■            ■ ");
		}
		if (j >= 36) {
			setCursorXY(6, i + 36);
			printf("■            ■        ■            ■ ");
		}
		if (j >= 37) {
			setCursorXY(6, i + 37);
			printf("■::::::::::::■■■■■■::::::::::::■ ");
		}
		if (j >= 38) {
			setCursorXY(6, i + 38);
			printf("■■■■■■■■■■■■■■■■■■■■ ");
		}
		if (j >= 39) {
			setCursorXY(6, i + 39);
			printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII ");
		}
		Sleep(50);
	}
}
void intro_title() {

	setCursorXY(50, 6);
	printf("┌────┐");
	setCursorXY(50, 7);
	printf("│  □│");
	setCursorXY(50, 8);
	printf("│    └┐");
	setCursorXY(50, 9);
	printf("│  □ │");
	setCursorXY(50, 10);
	printf("└─────┘");

	setCursorXY(57, 7);
	printf("┌─┐ ┌─┐");
	setCursorXY(57, 8);
	printf("│ │ │ │");
	setCursorXY(57, 9);
	printf("│ └─┘ │");
	setCursorXY(57, 10);
	printf("└─────┘");

	setCursorXY(64, 6);
	printf("┌─┐");
	setCursorXY(64, 7);
	printf("└─┘");
	setCursorXY(64, 8);
	printf("┌─┐");
	setCursorXY(64, 9);
	printf("│ │");
	setCursorXY(64, 10);
	printf("└─┘");

	setCursorXY(67, 6);
	printf("┌─┐");
	setCursorXY(67, 7);
	printf("│ │");
	setCursorXY(67, 8);
	printf("│ │");
	setCursorXY(67, 9);
	printf("│ │");
	setCursorXY(67, 10);
	printf("└─┘");

	setCursorXY(70, 6);
	printf("   ┌─┐");
	setCursorXY(70, 7);
	printf("   │ │");
	setCursorXY(70, 8);
	printf("┌──┘ │");
	setCursorXY(70, 9);
	printf("│ □ │");
	setCursorXY(70, 10);
	printf("└────┘");

	setCursorXY(76, 6);
	printf("┌─┐");
	setCursorXY(76, 7);
	printf("└─┘");
	setCursorXY(76, 8);
	printf("┌─┐");
	setCursorXY(76, 9);
	printf("│ │");
	setCursorXY(76, 10);
	printf("└─┘");

	setCursorXY(79, 7);
	printf("┌─────┐");
	setCursorXY(79, 8);
	printf("│ ┌─┐ │");
	setCursorXY(79, 9);
	printf("│ │ │ │");
	setCursorXY(79, 10);
	printf("└─┘ └─┘");

	setCursorXY(86, 7);
	printf("┌─────┐");
	setCursorXY(86, 8);
	printf("│ ┌┐  │");
	setCursorXY(86, 9);
	printf("│ └┘  │");
	setCursorXY(86, 10);
	printf("└───┐ │");
	setCursorXY(86, 11);
	printf(" ┌──┘ │");
	setCursorXY(86, 12);
	printf(" └────┘");

	setCursorXY(50, 13);
	printf("┌─────┐");
	setCursorXY(50, 14);
	printf("└─┐ ┌─┘");
	setCursorXY(50, 15);
	printf("  │ │   ");
	setCursorXY(50, 16);
	printf("  │ │   ");
	setCursorXY(50, 17);
	printf("  └─┘   ");

	setCursorXY(57, 14);
	printf("┌─┐ ┌─┐");
	setCursorXY(57, 15);
	printf("│ │ │ │");
	setCursorXY(57, 16);
	printf("│ └ ┘ │");
	setCursorXY(57, 17);
	printf("└───┐ │");
	setCursorXY(57, 18);
	printf("    │ │");
	setCursorXY(57, 19);
	printf("    └─┘");

	setCursorXY(64, 14);
	printf("┌─────┐");
	setCursorXY(64, 15);
	printf("│ ┌───┘");
	setCursorXY(64, 16);
	printf("│ └───┐");
	setCursorXY(64, 17);
	printf("└─────┘");

	setCursorXY(71, 14);
	printf("┌─────┐");
	setCursorXY(71, 15);
	printf("│ ┌─┐ │");
	setCursorXY(71, 16);
	printf("│ └─┘ │");
	setCursorXY(71, 17);
	printf("└─────┘");

	setCursorXY(78, 14);
	printf("┌─────┐");
	setCursorXY(78, 15);
	printf("│ ┌─┐ │");
	setCursorXY(78, 16);
	printf("│ └─┘ │");
	setCursorXY(78, 17);
	printf("└─────┘");

	setCursorXY(85, 14);
	printf("┌─────┐");
	setCursorXY(85, 15);
	printf("│ ┌─┐ │");
	setCursorXY(85, 16);
	printf("│ │ │ │");
	setCursorXY(85, 17);
	printf("└─┘ └─┘");

}
void intro_text() {

	GetAsyncKeyState(VK_SPACE);
	while (!GetAsyncKeyState(VK_SPACE)) {
		setCursorXY(60, 25);
		printf("<< PRESS SPACE BAR >>");
		Sleep(400);
		setCursorXY(60, 25);
		printf("                        ");
		Sleep(400);
	}

}
void intro() {
	intro_building();
	intro_title();
	intro_text();
}	
