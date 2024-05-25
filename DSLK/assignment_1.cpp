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
// ham chen l2 vao l1 sau vi tri p
void daoDSLk(LLIST* l1, LLIST* l2, LIST_ELEM* p) {
	LIST_ELEM* cur2 = *l2;
	while (cur2->next != NULL) {
		cur2 = cur2->next;
	}
	cur2->next = p->next;
	p->next = *l2;
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
int main() {
	LIST_ELEM* l1 = NULL, * l2 = NULL;
	pushFront(&l1, 20); pushFront(&l2, 7);
	pushFront(&l1, 18); pushFront(&l2, 5);
	pushFront(&l1, 16); pushFront(&l2, 3);
	pushFront(&l1, 14); pushFront(&l2, 1);
	pushFront(&l1, 12);
	pushFront(&l1, 10);
	pushFront(&l1, 8);
	pushFront(&l1, 6);
	pushFront(&l1, 4);
	pushFront(&l1, 2);

	printf("DSLK l1 truoc khi chen: ");
	duyet(l1);
	printf("DSLK l2 truoc khi chen: ");
	duyet(l2);
	// tao con tro p tro den gia tri 10
	LIST_ELEM* p = l1;
	while (p->data != 10) {
		p = p->next;
	}

	printf("Con tro p dang tro toi: %d\n", p->data);
	daoDSLk(&l1, &l2, p);
	printf("DSLK l1 sau khi chen l2: ");
	duyet(l1);

	freell(&l1);
	freell(&l2);
}


