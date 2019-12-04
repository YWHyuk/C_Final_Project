#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 실제 모양을 회전시키는 것이 아니라,
 * 보는 방향만 바꾼다.
 *
 *            NORTH
 *              ↓
 *          ㅁㅁㅁㅁㅁ
 *  WEST → ㅁㅁㅁㅁㅁ ← EAST
 *          ㅁㅁ  ㅁㅁ  
 *              ↑
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

typedef enum block {
	nexist = NEXIST,
	exist = EXIST
}Block;

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
	Block* map;
}Shape; // 모양과 크기를 정의함 ======== > 양원혁

/* 방향에 따른 높이를 리턴 */
unsigned int get_Height(Shape* shape);
/* 방향에 따른 너비를 리턴 */
unsigned int get_Width(Shape* shape);

/*
 * 방향을 기준으로 x,y 좌표의 셀을 리턴 
 * example) 데모 코드 참조 
 */
Block get_Block(Shape* shape, unsigned int x, unsigned int y);
/* 시계 방향으로 회전 */
void rotate_Clock(Shape* shape);
/* 반시계 방향으로 회전 */
void rotate_CounterClock(Shape* shape);

/* Shape 생성 */
Shape * make_Shape(int row, int size); //============ = > 양원혁
/* Shape 제거 */
void delete_Shape(Shape* shape);
/* 데모용 프린트 */
void print_Shape(Shape* shape);
