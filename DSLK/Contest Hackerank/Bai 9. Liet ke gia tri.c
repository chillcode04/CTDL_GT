#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int data;
    struct node *next; // node tiep theo
    struct node *prev; // node dang truoc
};
typedef struct node node;
node *makeNode(int x) {
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
void pushBack(node **head, int x) {
    node* newNode = makeNode(x);
    if (*head == NULL) {
        *head = newNode; return;
    }
    node* cur = *head;
    while (cur->next != NULL) cur = cur->next;
    cur->next = newNode;
    newNode->prev = cur;
}
int size(node* head) {
    int cnt = 0;
    while (head != NULL) {
        cnt++;
        head = head->next;
    }
    return cnt;
}


int main(){
    node *head = NULL;
    int n; 
    scanf("%d", &n);
    while(n--){
        int x; scanf("%d", &x);
        pushBack(&head, x);
    }
    node* tmp = head;
    while (tmp !=  NULL) {
    	node* p = tmp->prev;
    	int check = 1;
    	while (p != NULL) {
    		if (p->data == tmp->data) {
    			check = 0;
    			break;
	       }
	       p = p->prev;
	}
    if (check) printf("%d ", tmp->data);
    tmp = tmp->next;
    }
}
