#pragma once
#include <stdlib.h>
#include <stdio.h>
typedef struct node //노드 개별을 의미
{
	struct store* item;
	struct node* before;
	struct node* after;
}Node;

typedef struct list //리스트 
{
	Node head;
	Node tail;
	Node* cursor;
}List;

void list_init(List* target);
void add_first(List* target, void* item);
void push_back(List* target, void* item);
void delete_All(List* target, void(*del_item)(void*));
int delete_ById(List* target, void(*del_item)(void*), int id);
void check(int ret);
void find(List* target, int level);
void rfind(List* target, int level);
void refresh_Cursor(List* target);
