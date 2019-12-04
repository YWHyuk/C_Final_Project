#include "prototype.h"

void show_BLD(Building* b_addr) {
	int i = 0;
	int j, k;
	int height = b_addr->level;
	int floorSize;
	printf("-------------------------------------\n");
	for (i = height; i > 0; i--) {
		printf("%2d층\n", i);

		floorSize = b_addr->floor[i - 1].width;
		
		for (j = 0; j < floorSize; j++) {
			for (k = 0; k < floorSize; k++)
				printf("■");
			printf("\n");
		}
	}
}
