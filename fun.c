#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include"struct.h"
#include<time.h>
#define SNUM 10//가게개수
#define TAX 10//층당 세금

int makeHeight(Building*** b_addr) {
	int height = 0;
	int i = 0;
	printf("층수를 입력하세요 : ");
	scanf("%d", &height);
	printf("====================================================== =\n");
	*b_addr = (Building **)malloc(sizeof(Building*)*height + 1);
	memset(*b_addr, 0x0, sizeof(Building*)*height);
	return height;
}

int makeWidth(int height, Building*** b_addr) {
	int i = 0;
	int width = 0;
	for (i = 0; i < height; i++) {
		printf("%d층 크기 : ", i + 1);
		scanf("%d", &width);
		*(*b_addr + i) = (Building **)malloc(sizeof(Building*)*width);
		printf("\t%d 층에  %d칸을 생성했습니다. : %d bytes\n", i + 1, width, sizeof(Building*)*width);
	}
	printf("====================================================== =\n");
	return width;
}
void init_BLD(Player* player) {
	Building **building;
	int height = 0;
	height = makeHeight(&building);
	makeWidth(height,&building);
	player->tax = height * TAX;
	player->building = &building; 
}
