#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int data;
    struct node *next; // node truoc
    struct node *prev; // node sau
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
    node* cur = * head;
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
void reverse(node **head) {
    if (*head == NULL) return;
    node* i = *head;
    node* j = *head;
    while (j->next != NULL) {
        j = j->next;
    }
    for (int k = 1; k <= size(*head) / 2; k++) {
        int tmp = i->data;
        i->data = j->data;
        j->data = tmp;
        i = i->next;
        j = j->prev;
    }
}
void duyet(node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}
int main(){
    node *head = NULL;
    int n; 
    scanf("%d", &n);
    while(n--){
        int x; scanf("%d", &x);
        pushBack(&head, x);
    }
    reverse(&head);
    duyet(head);
}
