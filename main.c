#include "prototype.h"
#include "graphic.h"
int main() {
	int level = select_level(60,20);
	system("cls");
	Player* player = init_player();
	introduction(player);
	init_BLD(player);
	show_BLD(player->building);
	//expand_BLD(player, player->building);
	//show_BLD(player->building);
	refresh_store(player);
	for(int i=0;i<10;i++)
		scan_store(player->uncontracted_store,i+1);
	rent_store(player, player->uncontracted_store);
	rent_store(player, player->uncontracted_store+1);
	system("pause");
}
