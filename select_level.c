#include "MyConsole.h"
#include <stdio.h>
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

/*int main() {
	int test;

	test = select_level(SIZE,SIZE);
	printf("%d", test);
}*/
