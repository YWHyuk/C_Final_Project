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
void show_ui_store_shape(Store* store);
void show_ui_rent_command();
void show_ui_store_info(Store* store);
void bankrupted_store_info(Store* store);
void show_ui_floor(Player* player, Cell* cell);

void show_ui_floor_info(int level);
void show_ui_frame();
void show_ui_user_info(Player* player);
void show_ui_menu(int menu);
void show_ui_rent(Player* player, int* level);
void show_ui_info(Player* player, int* level);
void show_ui(Player* player);

void clear_all();
void clear_right_rect();

void print_Rentprocess(Player* player, Cell* cell, Shape* shape);
void print_Focus_shape(Player* player, Cell* cell, Store* store);
int get_IntByArrow(int money);
void slow_printf(char *str);

void introduction(Player* player);