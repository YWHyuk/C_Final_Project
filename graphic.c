#include "MyConsole.h"
#include "prototype.h"
#include "graphic.h"
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int select_level (int x, int y) {

	KEY_EVENT_RECORD input;
	int level = 4;
	setCursorXY(x + 5, 3);
	printf("──────────────────");
	setCursorXY(x + 8, 4);
	printf("난이도  설정");
	setCursorXY(x + 5, 5);
	printf("──────────────────");

	setCursorXY(x + 4, 9);
	printf("◀");
	setCursorXY(x + 22, 9);
	printf("▶");
	
	do {
		setCursorXY(x + 9, 9);
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

			setCursorXY(x - 7, 11);
			printf("  강북구, 금천구, 노원구, 도봉구, 중랑구       \n");

			setCursorXY(x + 3, 13);
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
			
			setCursorXY(x - 7, 11);
			printf("강서구, 관악구, 구로구, 동대문구, 은평구, ...\n");

			setCursorXY(x + 3, 13);
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
			
			setCursorXY(x - 7, 11);
			printf(" 강동구, 광진구, 동작구, 마포구, 종로구, ...   \n");

			setCursorXY(x + 3, 13);
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

			setCursorXY(x - 7, 11);
			printf("      강남구, 서초구, 송파구, 용산구                \n");

			setCursorXY(x + 3, 13);
			printf("     (헬조선 모드)     ");

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
		printf("%c", str[i]);
		Sleep(100);
	}
	getchar();
}
