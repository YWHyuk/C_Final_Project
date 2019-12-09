#include "prototype.h"
#include "graphic.h"
int main() {
	int level = select_level();
	Player* player = init_player(level);
	init_BLD(player);

	introduction(player);

	refresh_store(player);
	clear_all();
	show_ui(player);

	delete_BLD(player);
 	delete_player(player);
}
