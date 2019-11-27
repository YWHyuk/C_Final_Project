#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * 叔薦 乞丞聖 噺穿獣徹澗 依戚 焼艦虞,
 * 左澗 号狽幻 郊菓陥.
 *
 *            NORTH
 *              ♂
 *          けけけけけ
 *  WEST ≧ けけけけけ ∞ EAST
 *          けけ  けけ  
 *              ∴
 *            SOUTH(Default)
 *
 */
/* For Direction definition */
#define NORTH	0
#define EAST	1
#define SOUTH	2
#define WEST	3
/* Cekk definition */
#define NEXIST	0
#define EXIST	1

typedef enum cell {
	nexist = NEXIST,
	exist = EXIST
}Cell;

typedef enum direction {
	north = NORTH,
	east = EAST,
	south = SOUTH,
	west = WEST
}Direction;

typedef struct shape {
	unsigned int width;
	unsigned int height;
	Direction direction;
	Cell* map;
}Shape; // 乞丞引 滴奄研 舛税敗 ======== > 丞据舶

/* 号狽拭 魚献 株戚研 軒渡 */
unsigned int get_Height(Shape* shape);
/* 号狽拭 魚献 格搾研 軒渡 */
unsigned int get_Width(Shape* shape);

/*
 * 号狽聖 奄層生稽 x,y 疎妊税 漆聖 軒渡 
 * example) 汽乞 坪球 凧繕 
 */
Cell get_Cell(Shape* shape, unsigned int x, unsigned int y);
/* 獣域 号狽生稽 噺穿 */
void rotate_Clock(Shape* shape);
/* 鋼獣域 号狽生稽 噺穿 */
void rotate_CounterClock(Shape* shape);

/* Shape 持失 */
Shape * make_Shape(); //============ = > 丞据舶
/* Shape 薦暗 */
void delete_Shape(Shape* shape);
/* 汽乞遂 覗鍵闘 */
void print_Shape(Shape* shape);