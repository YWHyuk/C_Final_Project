#pragma once
#include <Windows.h>
#define CASE_HELP(X,Y,Z) case X: \
							writeCharWithColor(Y,Z);\
							break;
#define VK_Q	0x51
#define VK_W	0x57
#define VK_E	0x45
#define VK_R	0x52
#define SIZE 75

// color»ó¼ö ÁöÁ¤ 
#define BLACK 15
#define BLUE 1 
#define GREEN 2 
#define CYAN 3 
#define RED 4 
#define MAGENTA 5 
#define BROWN 6 
#define LIGHTGRAY 7 
#define DARKGRAY 15 
#define LIGHTBLUE 9 
#define LIGHTGREEN 10 
#define LIGHTCYAN 11 
#define LIGHTRED 12 
#define LIGHTMAGENTA 13 
#define YELLOW 14 
#define WHITE 8 

void setConsoleSize(int x, int y);
void setCarrotSize(int x);
void setFontSize(int size);
void Background1(int x, int y);
void Background2(int x, int y);
void setCursorXY(int x, int y);
void writeBlockColorXY(int x, int y);
void writeBlockWithColorXY(int x, int y, WORD in_attr);
void writeCharWithColor(char* str, DWORD color);
int KeyEventProc(KEY_EVENT_RECORD ker);
KEY_EVENT_RECORD getVirtualKeyCode();
COORD getCursorCoord();
void setCursorVisibility(int i);
void textcolor(int foreground, int background);
