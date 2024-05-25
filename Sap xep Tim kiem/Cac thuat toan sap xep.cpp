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
    if ((*head) == NULL) {
        (*head) = newNode;
    }
    node* tmp = *head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
int size(node* head) {
    int cnt = 0;
    node* tmp = head;
    while (tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void pop(node** head) {
    if (!size(*head)) return;
    node* tmp = *head;
    *head = tmp->next;
    free(tmp);
}
void duyet(node* head) {
    node* tmp = head;
    while (tmp != NULL) {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
}
int main() {
    node* head = NULL;
    int n; scanf("%d", &n);
    while (n--) {
        int x; scanf("%d", &x);
        pushBack(&head, x);
    }
    duyet(head);
}



