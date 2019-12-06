#include "MyConsole.h"
#include "prototype.h"
#include "graphic.h"
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int select_level () {

	KEY_EVENT_RECORD input;
	int level = 4;
	
	setConsoleSize(50, 40);
	setFontSize(12);

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
		printf("%d분위 지역", level);

		switch (level) {
		case 4:
			setCursorXY(0, 0);
			printf("                                                            \n");
			setCursorXY(0, 1);
			printf("                                    ■■    ■              \n");
			setCursorXY(0, 2);
			printf("                                    ■■■■■■            \n");
			setCursorXY(0, 3);
			printf("                                  ■■■■■■■            \n");
			setCursorXY(0, 4);
			printf("                                ■■■■■■■■            \n");
			setCursorXY(0, 5);
			printf("                                ■■■■■■■■            \n");
			setCursorXY(0, 6);
			printf("                      □□□    ■■■■■■■■■          \n");
			setCursorXY(0, 7);
			printf("                    □□□□    ■■■■■■■■■          \n");
			setCursorXY(0, 8);
			printf("                    □□□□□□□□■■■■■■■          \n");
			setCursorXY(0, 9);
			printf("                    □□□□□□□□■■□■■■■          \n");
			setCursorXY(0, 10);
			printf("                    □□□□□□□□□□□□■■■■        \n");
			setCursorXY(0, 11);
			printf("    □□            □□□□□□□□□□□□■■■          \n");
			setCursorXY(0, 12);
			printf("    □□□      □□□□□□□□□□□□□□□■■          \n");
			setCursorXY(0, 13);
			printf("    □□□□  □□□□□□□□□□□□□□□□■            \n");
			setCursorXY(0, 14);
			printf("  □□□□□□  □□□□□□□□□□□□□□□□      □□□\n");
			setCursorXY(0, 15);
			printf("  □□□□□□    □□□□□□□□□□□□□□□□  □□□□\n");
			setCursorXY(0, 16);
			printf("    □□□□□□        □□□□□□□□□□□□  □□□□□\n");
			setCursorXY(0, 17);
			printf("        □□□□□□□    □□□□□    □□□□  □□□    \n");
			setCursorXY(0, 18);
			printf("        □□□□□□□□    □□    □□        □□□□    \n");
			setCursorXY(0, 19);
			printf("        □□□□□□□□□        □□□□□□□□□□      \n");
			setCursorXY(0, 20);
			printf("        □□□□□□□□□□    □□□□□□□□□□□      \n");
			setCursorXY(0, 21);
			printf("        □□□□□□□□□□□□□□□□□□□□□□□□    \n");
			setCursorXY(0, 22);
			printf("        □□    ■■□□□□□□□□□□□□□□□□□□    \n");
			setCursorXY(0, 23);
			printf("                ■■□□□□□□□□□□□□□□□□□      \n");
			setCursorXY(0, 24);
			printf("                ■■■□□□□□□□□□□□□□□□        \n");
			setCursorXY(0, 25);
			printf("                  ■■□□□□□      □□□□□            \n");
			setCursorXY(0, 26);
			printf("                  ■■  □□            □□□              \n");
			setCursorXY(0, 27);
			printf("                                        □                  \n");
			setCursorXY(0, 28);
			printf("                                                            \n");

			setCursorXY(62, 11);
			printf("강북구, 금천구, 노원구, 중랑구, ...\n");

			setCursorXY(68, 13);
			printf("      (쉬움 모드)      ");

			break;
		case 3:
			setCursorXY(0, 0);
			printf("                                                            \n");
			setCursorXY(0, 1);
			printf("                                    □□    □              \n");
			setCursorXY(0, 2);
			printf("                                    □□□□□□            \n");
			setCursorXY(0, 3);
			printf("                                  □□□□□□□            \n");
			setCursorXY(0, 4);
			printf("                                □□□□□□□□            \n");
			setCursorXY(0, 5);
			printf("                                □□□□□□□□            \n");
			setCursorXY(0, 6);
			printf("                      ■■■    □□□□□□□□□          \n");
			setCursorXY(0, 7);
			printf("                    ■■■■    □□□□□□□□□          \n");
			setCursorXY(0, 8);
			printf("                    ■■■■□□■■□□□□□□□          \n");
			setCursorXY(0, 9);
			printf("                    ■■■□□□■■□□■□□□□          \n");
			setCursorXY(0, 10);
			printf("                    ■■■■□□■■■■■■□□□□        \n");
			setCursorXY(0, 11);
			printf("    ■■            ■■■■□□■■■■■■□□□          \n");
			setCursorXY(0, 12);
			printf("    ■■■      □■■■■■□□□■■■■■■□□          \n");
			setCursorXY(0, 13);
			printf("    ■■■■  □□□□■■■□□□□■■■■■□            \n");
			setCursorXY(0, 14);
			printf("  ■■■■■■  □□□□■■■□□□□□□■■□      □□□\n");
			setCursorXY(0, 15);
			printf("  ■■■■■■    □□□□□□□□□□□□□□□□  □□□□\n");
			setCursorXY(0, 16);
			printf("    ■■■■■■        □□□□□□□□□□□□  □□□□□\n");
			setCursorXY(0, 17);
			printf("        □■■□□□□    □□□□□    □□□□  □□□    \n");
			setCursorXY(0, 18);
			printf("        □□□□□□□□    □□    □□        □□□□    \n");
			setCursorXY(0, 19);
			printf("        □□□□□□□□□        □□□□□□□□□□      \n");
			setCursorXY(0, 20);
			printf("        ■■■■■□□□□□    □□□□□□□□□□□      \n");
			setCursorXY(0, 21);
			printf("        ■■■■■□□■■□□□□□□□□□□□□□□□    \n");
			setCursorXY(0, 22);
			printf("        ■■    □□■■■■□□□□□□□□□□□□□□    \n");
			setCursorXY(0, 23);
			printf("                □□■■■■■□□□□□□□□□□□□      \n");
			setCursorXY(0, 24);
			printf("                □□□■■■■■□□□□□□□□□□        \n");
			setCursorXY(0, 25);
			printf("                  □□■■■■■      □□□□□            \n");
			setCursorXY(0, 26);
			printf("                  □□  ■■            □□□              \n");
			setCursorXY(0, 27);
			printf("                                        □                  \n");
			setCursorXY(0, 28);
			printf("                                                            \n");
			
			setCursorXY(62, 11);
			printf("강서구, 관악구, 구로구, 은평구, ...\n");

			setCursorXY(68, 13);
			printf("      (보통 모드)      ");

			break;
		case 2:
			setCursorXY(0, 0);
			printf("                                                            \n");
			setCursorXY(0, 1);
			printf("                                    □□    □              \n");
			setCursorXY(0, 2);
			printf("                                    □□□□□□            \n");
			setCursorXY(0, 3);
			printf("                                  □□□□□□□            \n");
			setCursorXY(0, 4);
			printf("                                □□□□□□□□            \n");
			setCursorXY(0, 5);
			printf("                                □□□□□□□□            \n");
			setCursorXY(0, 6);
			printf("                      □□□    □□□□□□□□□          \n");
			setCursorXY(0, 7);
			printf("                    □□□□    □□□□□□□□□          \n");
			setCursorXY(0, 8);
			printf("                    □□□□■■□□□□□□□□□          \n");
			setCursorXY(0, 9);
			printf("                    □□□■■■□□□□□□□□□          \n");
			setCursorXY(0, 10);
			printf("                    □□□□■■□□□□□□□□□□        \n");
			setCursorXY(0, 11);
			printf("    □□            □□□□■■□□□□□□□□□          \n");
			setCursorXY(0, 12);
			printf("    □□□      ■□□□□□■■■□□□□□□□□          \n");
			setCursorXY(0, 13);
			printf("    □□□□  ■■■■□□□■■■■□□□□□□            \n");
			setCursorXY(0, 14);
			printf("  □□□□□□  ■■■■□□□■■■■■■□□■      ■■■\n");
			setCursorXY(0, 15);
			printf("  □□□□□□    ■■■■■■■■■■■■■■■■  ■■■■\n");
			setCursorXY(0, 16);
			printf("    □□□□□□        ■■□□□□■■■■■■  ■■■■■\n");
			setCursorXY(0, 17);
			printf("        ■□□■■■■    □□□□□    ■■■■  □■■    \n");
			setCursorXY(0, 18);
			printf("        ■■■■■■■■    □□    □□        □□■■    \n");
			setCursorXY(0, 19);
			printf("        ■■■■■■■■■        □□□□□□□□□□      \n");
			setCursorXY(0, 20);
			printf("        □□□□□■■■■■    □□□□□□□□□□□      \n");
			setCursorXY(0, 21);
			printf("        □□□□□■■□□■■■□□□□□□□□□□□□    \n");
			setCursorXY(0, 22);
			printf("        □□    ■■□□□□■■□□□□□□□□□□□□    \n");
			setCursorXY(0, 23);
			printf("                ■■□□□□□□□□□□□□□□□□□      \n");
			setCursorXY(0, 24);
			printf("                ■■■□□□□□□□□□□□□□□□        \n");
			setCursorXY(0, 25);
			printf("                  ■■□□□□□      □□□□□            \n");
			setCursorXY(0, 26);
			printf("                  ■■  □□            □□□              \n");
			setCursorXY(0, 27);
			printf("                                        □                  \n");
			setCursorXY(0, 28);
			printf("                                                            \n");
			
			setCursorXY(62, 11);
			printf("강동구, 광진구, 마포구, 종로구, ...\n");

			setCursorXY(68, 13);
			printf("     (어려움 모드)     ");

			break;
		case 1:
			setCursorXY(0, 0);
			printf("                                                            \n");
			setCursorXY(0, 1);
			printf("                                    □□    □              \n");
			setCursorXY(0, 2);
			printf("                                    □□□□□□            \n");
			setCursorXY(0, 3);
			printf("                                  □□□□□□□            \n");
			setCursorXY(0, 4);
			printf("                                □□□□□□□□            \n");
			setCursorXY(0, 5);
			printf("                                □□□□□□□□            \n");
			setCursorXY(0, 6);
			printf("                      □□□    □□□□□□□□□          \n");
			setCursorXY(0, 7);
			printf("                    □□□□    □□□□□□□□□          \n");
			setCursorXY(0, 8);
			printf("                    □□□□□□□□□□□□□□□          \n");
			setCursorXY(0, 9);
			printf("                    □□□□□□□□□□□□□□□          \n");
			setCursorXY(0, 10);
			printf("                    □□□□□□□□□□□□□□□□        \n");
			setCursorXY(0, 11);
			printf("    □□            □□□□□□□□□□□□□□□          \n");
			setCursorXY(0, 12);
			printf("    □□□      □□□□□□□□□□□□□□□□□          \n");
			setCursorXY(0, 13);
			printf("    □□□□  □□□□□□□□□□□□□□□□□            \n");
			setCursorXY(0, 14);
			printf("  □□□□□□  □□□□□□□□□□□□□□□□      □□□\n");
			setCursorXY(0, 15);
			printf("  □□□□□□    □□□□□□□□□□□□□□□□  □□□□\n");
			setCursorXY(0, 16);
			printf("    □□□□□□        □□■■■■□□□□□□  □□□□□\n");
			setCursorXY(0, 17);
			printf("        □□□□□□□    ■■■■■    □□□□  ■□□    \n");
			setCursorXY(0, 18);
			printf("        □□□□□□□□    ■■    ■■        ■■□□    \n");
			setCursorXY(0, 19);
			printf("        □□□□□□□□□        ■■■■■■■■■■      \n");
			setCursorXY(0, 20);
			printf("        □□□□□□□□□□    ■■■■■■■■■■■      \n");
			setCursorXY(0, 21);
			printf("        □□□□□□□■■□□□■■■■■■■■■■■■    \n");
			setCursorXY(0, 22);
			printf("        □□    □□■■■■□□■■■■■■■■■■■■    \n");
			setCursorXY(0, 23);
			printf("                □□■■■■■■■■■■■■■■■■■      \n");
			setCursorXY(0, 24);
			printf("                □□□■■■■■■■■■■■■■■■        \n");
			setCursorXY(0, 25);
			printf("                  □□■■■■■      ■■■■■            \n");
			setCursorXY(0, 26);
			printf("                  □□  ■■            ■■■              \n");
			setCursorXY(0, 27);
			printf("                                        ■                  \n");
			setCursorXY(0, 28);
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
			if (level > 1)
				level--;
			else
				level = 4;
			break;
		case VK_DOWN:
			if (level < 4)
				level++;
			else
				level = 1;
			break;
		case VK_LEFT:
			if (level > 1)
				level--;
			else
				level = 4;
			break;
		case VK_RIGHT:
			if (level < 4)
				level++;
			else
				level = 1;
			break;
		default:
			return level;
			break;
		}
	} while (1);
}

void show_ui_store_shape() {

	int i, j;

	for (i = 0; i < 10; i++) {

		setCursorXY(66, 7 + i);

		for (j = 0; j < 10; j++) {
			printf("□");
		}
	}

}
void show_ui_store_info() {

	setCursorXY(66, 19);
	printf("가게이름 : 횟집");

	setCursorXY(66, 20);
	printf("임대료 :          원");

	setCursorXY(66, 21);
	printf("수익 :            원");

	setCursorXY(66, 22);
	printf("재산 :            원");
}
void show_ui_floor() {

	int i, j;

	for (i = 0; i < 20; i++) {

		setCursorXY(10, 5 + i);

		for (j = 0; j < 20; j++) {
			printf("□");
		}
	}
}
void show_ui_floor_info() {// 층 선택


	setCursorXY(25, 26);
	printf("▲00층▼");

}
void show_ui_frame() {

	int i;

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
	printf("┌────────────────────────┐");
	setCursorXY(60, 32);
	printf("│");
	setCursorXY(85, 32);
	printf("│");
	setCursorXY(60, 33);
	printf("└────────────────────────┘");

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

	/*
	setCursorXY(14, 30);
	printf("■■");
	setCursorXY(14, 31);
	printf("■■");

	setCursorXY(12, 33);
	printf("■■■■");
	setCursorXY(10, 34);
	printf("■■■■■■");
	setCursorXY(10, 35);
	printf("■■■■■■");
	*/

	setCursorXY(75, 4);
	printf("▲");
	setCursorXY(75, 25);
	printf("▼");

}
void show_ui_user_info() {

	setCursorXY(28, 31);
	printf("이름 : user name");//추가

	setCursorXY(28, 34);
	printf("현재 건물층수 : 01층");//추가

	setCursorXY(62, 32);
	printf("현재 재산 : 123456789원");//추가

	

}

void show_ui() {
	setConsoleSize(50, 40);
	setFontSize(12);

	show_ui_frame();
	
	show_ui_store_shape();
	show_ui_store_info();

	show_ui_floor();
	show_ui_floor_info();
	
	show_ui_user_info();

	setCursorXY(0, 37);
}

void clear_all() {
	int i;
	for (i = 0; i < 40; i++) {
		setCursorXY(0, i);
		printf("                                                                                                    ");
	}
	setCursorXY(0, 0);
}

void show_BLD(Building* b_addr) {
	int i = 0;
	int j, k;
	int height = b_addr->level;
	int floorSize;
	printf("-------------------------------------\n");
	for (i = height; i > 0; i--) {
		printf("%2d층\n", i);

		floorSize = b_addr->floor[i - 1].width;

		for (j = 0; j < floorSize; j++) {
			for (k = 0; k < floorSize; k++)
				printf("■");
			printf("\n");
		}
	}
}

void scan_store(Store* store, int id) {
	printf("%s      %d      %d      %d      %d\n", \
		store[id - 1].name, store[id - 1].money, store[id - 1].rent, store[id - 1].income, store[id - 1].id);
}//가게 정보를 불러온다.

void show_floor(Player* player, Store* store, int level) {
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
		for (y = 0; y < height; y++) {
			Block tmp = get_Block(shape, x, y);
			if (tmp == exist && cell[x*width + y].valid == 1) {
				/* 겹치는 칸 */
				textcolor(RED, BLACK);
				printf("■");
			}
			else if (tmp != exist && cell[x*width + y].valid == 1) {
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

void slow_printf(char *str) {
	unsigned long i, sz = strlen(str);
	COORD temp = getCursorCoord();
	setCursorXY(CONSOLE_X - sz/2,temp.Y);
	for (i = 0ul; i < sz; i++) {
		if ((str[i] & 0x80) == 0x80) {
			printf("%c%c", str[i], str[i + 1]); //한글이면 2byte 출력
			i++;
		}
		else
			printf("%c",str[i]) ; //아니면 그냥 출력
		Sleep(50);
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