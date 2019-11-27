#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * ���� ����� ȸ����Ű�� ���� �ƴ϶�,
 * ���� ���⸸ �ٲ۴�.
 *
 *            NORTH
 *              ��
 *          ����������
 *  WEST �� ���������� �� EAST
 *          ����  ����  
 *              ��
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
}Shape; // ���� ũ�⸦ ������ ======== > �����

/* ���⿡ ���� ���̸� ���� */
unsigned int get_Height(Shape* shape);
/* ���⿡ ���� �ʺ� ���� */
unsigned int get_Width(Shape* shape);

/*
 * ������ �������� x,y ��ǥ�� ���� ���� 
 * example) ���� �ڵ� ���� 
 */
Cell get_Cell(Shape* shape, unsigned int x, unsigned int y);
/* �ð� �������� ȸ�� */
void rotate_Clock(Shape* shape);
/* �ݽð� �������� ȸ�� */
void rotate_CounterClock(Shape* shape);

/* Shape ���� */
Shape * make_Shape(); //============ = > �����
/* Shape ���� */
void delete_Shape(Shape* shape);
/* ����� ����Ʈ */
void print_Shape(Shape* shape);