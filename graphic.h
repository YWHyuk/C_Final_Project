#pragma once
#include "prototype.h"

int select_level(int x, int y);
void show_BLD(struct building* b_addr);
void scan_store(struct store* store, int id);
void show_floor(struct player* player, struct store* store, int level);
void print_Rentprocess(struct cell* cell, struct shape* shape);