#include "DoublyCircularLinkedList.h"
#include "prototype.h"

void list_init(List* target)
{
	target->head.after = &(target->tail);
	target->head.before = &(target->tail);
	target->head.item = NULL;

	target->tail.after = &(target->head);
	target->tail.before = &(target->head);
	target->tail.item = NULL;

	target->cursor = &(target->head);
}
void add_first(List* target, void* item) 
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	Node* next = target->head.after;
	
	newNode->item = item;

	target->head.after = newNode;
	next->before = newNode;

	newNode->after = next;
	newNode->before = &(target->head);
}

void push_back(List* target, void* item) //head는 고정 tail이 계속 newNode를 가리키게됨
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	Node* prev = target->tail.before;

	newNode->item = item;

	target->tail.before = newNode;
	
	prev->after = newNode;

	newNode->after = &(target->tail);
	newNode->before = prev;
}
void delete_All(List* target, void (*del_item)(void*)) {
	Node* iter;
	Node* temp;
	for (iter = target->head.after; iter != &(target->tail);) {
		/*메모리 해제*/
		if (del_item != NULL)
			del_item(iter->item);
		temp = iter->after;
		free(iter);
		iter = temp;
	}
	list_init(target);
}
int delete_ById(List* target, void(*del_item)(void*), int id)
{
	Node* iter;
	Node* prev, *next;
	Store* temp;
	for (iter = target->head.after; iter != &(target->tail); iter = iter->after) {
		temp = (Store*)(iter->item);
		if (temp->id == id) {
			prev = iter->before;
			next = iter->after;
			/* 자료구조 일관성 유지 */
			prev->after = next;
			next->before = prev;
			if (iter == target->cursor)
				target->cursor = target->cursor->before;
			/*메모리 해제*/
			if(del_item != NULL)
				del_item(iter->item);
			free(iter);
			return 0;
		}
	}
	return -1;
}

void check(int ret) {
	if (ret == 0) {
		printf("가게와의 계약을 취소했습니다.\n");
	}else {
		printf("해당 아이디를 가진 가게가 존재하지 않습니다\n");
	}
}

void find(List* target, int level) 
{
	Node* iter;
	Store* temp;
	for (iter = target->cursor->after; iter != target->cursor; iter = iter->after) {
		temp = (Store*)(iter->item);
		if (temp != NULL && (temp->level == level || level == -1)){
			target->cursor = iter;
			return;
		}
	}
}
void rfind(List* target, int level)
{
	Node* iter;
	Store* temp;
	for (iter = target->cursor->before; iter != target->cursor; iter = iter->before) {
		temp = (Store*)(iter->item);
		if (temp != NULL && (temp->level == level || level == -1)) {
			target->cursor = iter;
			return;
		}
	}
}
void refresh_Cursor(List* target) {
	target->cursor = &(target->head);
}