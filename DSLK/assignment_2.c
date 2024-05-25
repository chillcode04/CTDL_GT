#include <stdlib.h>
#include <stdio.h>

typedef int LLIST_DATA;
struct _LIST_ELEM;
typedef struct _LIST_ELEM LIST_ELEM, * LLIST;

struct _LIST_ELEM {
	LLIST_DATA data;
	LIST_ELEM* next;
};
// tao node moi
LIST_ELEM* makeNode(LLIST_DATA x) {
	LIST_ELEM* newNode = (LIST_ELEM*)malloc(sizeof(LIST_ELEM));
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}
// them vao dau
void pushFront(LLIST* l, int x) {
	LIST_ELEM* newNode = makeNode(x);
	newNode->next = *l;
	*l = newNode;
}
// duyet dslk
void duyet(LIST_ELEM* l) {
	LIST_ELEM* tmp = l;
	while (tmp != NULL) {
		printf("%d ", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}
// ham giai phong bo nho
void freell(LLIST* l) {
	LIST_ELEM* cur = *l;
	LIST_ELEM* next;
	while (cur != NULL) {
		next = cur->next;
		free(cur);
		cur = next;
	}
	*l = NULL;
}
//ham dao DSLK
void daoDSLK(LLIST* l) {
	LIST_ELEM* next = NULL;
	LIST_ELEM* cur = *l;
	LIST_ELEM* prev = NULL;
	while (cur != NULL) {
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	*l = prev;
}
int main() {
	LIST_ELEM* l1 = NULL;
	pushFront(&l1, 9); 
	pushFront(&l1, 8); 
	pushFront(&l1, 7); 
	pushFront(&l1, 6); 
	pushFront(&l1, 5);
	pushFront(&l1, 4);
	pushFront(&l1, 3);
	pushFront(&l1, 2);
	pushFront(&l1, 1);

	printf("DSLK l1 truoc khi dao: ");
	duyet(l1);
	
	daoDSLK(&l1);
	printf("DSLK l1 sau khi dao:   ");
	duyet(l1);

	freell(&l1);
}


