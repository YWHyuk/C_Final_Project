#pragma once
#include "prototype.h"
#define CONSOLE_X 50
#define CONSOLE_Y 40

int select_level();
void show_BLD(Building* b_addr);
void scan_store(Store* store, int id);
void show_floor(Player* player, Store* store, int level);
void print_Rentprocess(Cell* cell, Shape* shape);
void introduction(Player* player);
void clear_all();
void show_ui(Player* player);
