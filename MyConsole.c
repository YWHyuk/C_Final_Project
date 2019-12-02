#include "MyConsole.h"

void setConsoleSize(int x, int y) {
	HANDLE hcsb = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFOEX tt;

	tt.cbSize = sizeof(tt);
	GetConsoleScreenBufferInfoEx(hcsb, &tt);
	tt.dwSize.X = 2 * x; // 2 * x
	tt.dwSize.Y = y + 1;
	tt.srWindow.Bottom = y + 1; // y + menu
	SetConsoleScreenBufferInfoEx(hcsb, &tt);
}

void setCarrotSize(int x) {
	HANDLE hcsb = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info;
	GetConsoleCursorInfo(hcsb, &cursor_info);
	cursor_info.dwSize = 100;
	cursor_info.bVisible = TRUE;
	SetConsoleCursorInfo(hcsb, &cursor_info);
}
void Background1(int x, int y) {
	double temp[4];
	double tt = x * x + y * y;
	temp[3] = sqrt(tt);
	temp[0] = temp[3] / 4;
	temp[1] = temp[3] / 3;
	temp[2] = temp[3] / 2;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			double r = sqrt((x / 2 - i) * (x / 2 - i) + (y / 2 - j) * (y / 2 - j));
			if (r < temp[0])
				writeBlockWithColorXY(i, j, BACKGROUND_RED);
			else if (r < temp[1])
				writeBlockWithColorXY(i, j, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
			else
				writeBlockWithColorXY(i, j, BACKGROUND_RED);
		}
	}
}

/* 안의 4*4 박스를 제외하고 꾸민다. */
void Background2(int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y + 2; j++) {
			if ((i * 2 >= x - 4) && (i * 2 < x + 4) && (j >= (y / 2 - 1)) && (j < (y / 2 + 3)))
				continue;
			writeBlockColorXY(i, j);
		}
	}
}
COORD getCursorCoord() {
	HANDLE hcsb = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFOEX tt;
	tt.cbSize = sizeof(tt);
	GetConsoleScreenBufferInfoEx(hcsb, &tt);
	return tt.dwCursorPosition;
}
void setCursorXY(int x, int y) {
	HANDLE hcsb = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD co = { x,y };
	SetConsoleCursorPosition(hcsb, co);
}
void writeBlockColorXY(int x, int y) {
	HANDLE hcsb = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD co = { x * 2,y };
	WORD attr[2];
	DWORD num;
	int temp = rand() % 4;
	if (!temp) {
		attr[0] = BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED;
		attr[1] = attr[0];
	}
	else {
		attr[0] = 0;
		attr[1] = attr[0];

	}
	WriteConsoleOutputAttribute(hcsb, attr, 2, co, &num);
}
void writeCharWithColor(char* str, DWORD color) {
	HANDLE hcsb = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	WORD* attr;
	DWORD num;
	DWORD len;
	pos = getCursorCoord();
	len = strlen(str);
	attr = malloc(sizeof(WORD) * len);
	for (unsigned int i = 0; i < len; i++)
		attr[i] = (WORD)color;
	WriteConsole(hcsb, str, len, &num, NULL);
	WriteConsoleOutputAttribute(hcsb, attr, len, pos, &num);
	free(attr);
}
void writeBlockWithColorXY(int x, int y, WORD in_attr) {
	HANDLE hcsb = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD co = { x * 2,y };
	WORD attr[2];
	DWORD num;
	attr[0] = in_attr;
	attr[1] = in_attr;
	WriteConsoleOutputAttribute(hcsb, attr, 2, co, &num);
}
void setFontSize(int size)
{
	HANDLE hcsb = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_FONT_INFOEX cfi = { sizeof(cfi) };

	GetCurrentConsoleFontEx(hcsb, FALSE, &cfi);
	cfi.dwFontSize.Y = size;

	BOOL temp = SetCurrentConsoleFontEx(hcsb, FALSE, &cfi);
}
int KeyEventProc(KEY_EVENT_RECORD ker)
{
	switch (ker.wVirtualKeyCode) {
		/* 후킹할 키만 세팅 */
	case VK_LEFT:
	case VK_RIGHT:
	case VK_UP:
	case VK_DOWN:
	case VK_RETURN:
	case VK_Q:
	case VK_W:
	case VK_E:
	case VK_R:
		if (ker.bKeyDown)
			return 1;
		else
			return 0;
	default:
		return 0;
	}
}
KEY_EVENT_RECORD getVirtualKeyCode() {
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD cNumRead;
	INPUT_RECORD irInBuf[128];
	while (1)
	{
		ReadConsoleInput(
			hStdin,      // input buffer handle 
			irInBuf,     // buffer to read into 
			128,         // size of read buffer 
			&cNumRead); // number of records read 
		for (unsigned int i = 0; i < cNumRead; i++)
		{
			switch (irInBuf[i].EventType)
			{
			case KEY_EVENT: // keyboard input 
				if (KeyEventProc(irInBuf[i].Event.KeyEvent))
					return irInBuf[i].Event.KeyEvent;
				break;
			default:
				break;
			}
		}
	}
}
void setCursorVisibility(int i) {
	HANDLE hcsb = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info;
	GetConsoleCursorInfo(hcsb, &cursor_info);
	cursor_info.bVisible = i;
	SetConsoleCursorInfo(hcsb, &cursor_info);
}
void drawTool(int x, int y) {
	HANDLE hcsb = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	WORD* attr;
	DWORD num;
	LPCTSTR temp = "←↑↓→ QWE";
	DWORD len = strlen(temp);

	pos = getCursorCoord();
	attr = malloc(sizeof(WORD) * x * 2);
	for (int i = 0; i < x * 2; i++)
		attr[i] = 0x70;

	pos.X = x - (SHORT)len / 2;
	pos.Y = (SHORT)y;
	WriteConsoleOutputCharacter(hcsb, temp, len, pos, &num);
	pos.X = 0;
	WriteConsoleOutputAttribute(hcsb, attr, x * 2, pos, &num);
	free(attr);
}