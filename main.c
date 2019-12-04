#include "prototype.h"

int main() {
	int level = select_level(60,20);
	system("cls");
	Player* player = init_player();
	init_BLD(player);
	show_BLD(player->building);
	//expand_BLD(player, player->building);
	//show_BLD(player->building);
	refresh_store(player);
	for(int i=0;i<10;i++)
		scan_store(player->uncontracted_store,i+1);
	rent_store(player, player->uncontracted_store, 0);
	rent_store(player, player->uncontracted_store+1, 0);
	system("pause");	
}
