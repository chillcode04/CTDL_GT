#include <stdio.h>
#include <stdlib.h> 
struct node {
	int data;
	struct node* next;
};
typedef struct node node;
node* makeNode(int x) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
void pushBack(node** head, int x) {
    node* newNode = makeNode(x);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    node* tmp = *head;
    while (tmp->next != NULL) tmp = tmp->next;
    tmp->next = newNode;
}
void erase(node **head, int x) {
    while ((*head) != NULL && (*head)->data == x) {
        node* tmp = *head;
        *head = (*head)->next;
        free(tmp);
    }
    node* tmp = *head;
    node* prev = tmp;
    while (tmp != NULL) {
        if (tmp->data == x) {
            prev->next = tmp->next;
            free(tmp);
            tmp = prev;
        }
        else {
            prev = tmp;
            tmp = tmp->next;
        }
    }
}
void duyet(node* head) {
	int ok = 0;
    node* tmp = head;
    while (tmp != NULL) {
        printf("%d ", tmp->data);
        ok = 1;
        tmp = tmp->next;
    }
    if (!ok) printf("EMPTY");
}
int main() {
    node* head = NULL;
    int n, x; scanf("%d %d", &n, &x);
    int i = 0;
    for (i = 0; i < n; i++) {
        int y; scanf("%d", &y);
        pushBack(&head, y);
    }
    erase(&head, x);
    duyet(head);
}



