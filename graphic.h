#pragma once
#include "prototype.h"
#include <tchar.h>
#define CONSOLE_X 50
#define CONSOLE_Y 40

#define SIMUL	1 
#define RENT	2
#define EXPAND	3
#define INFO	4
#define QUIT	5

int select_level();
void show_BLD(Building* b_addr);
void show_floor(Player* player, Store* store, int level);
void print_Rentprocess(Player* player, Cell* cell, Shape* shape);
void print_Focus_shape(Player* player, Cell* cell, Store* store);
void introduction(Player* player);
void show_ui(Player* player);
void clear_all();
void clear_right_rect();
int get_IntByArrow(int money);