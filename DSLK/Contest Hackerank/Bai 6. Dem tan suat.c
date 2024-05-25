#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	int data;
	struct node *next; // node truoc
	struct node *prev; // node sau
};
typedef struct node node;
node *makeNode(char c[]) {
    node* newNode = (node*)malloc(sizeof(node));
    strcpy(newNode->data, c);
    newNode->tansuat = 1; // lan dau gap
    newNode->next = NULL;
    return newNode;
}
void them(node **head, char data[]) {
    if (*head == NULL) {
        node* newNode = makeNode(data);
        *head = newNode;
        return;
    }
    node* tmp = *head;
    node* prev = tmp;
    while (tmp != NULL) {
        if (strcmp(tmp->data, data) == 0) {
            tmp->tansuat += 1;
            return;
        }
        prev = tmp;
        tmp = tmp->next;
    } 
    // 
    node* newNode = makeNode(data);
    prev->next = newNode;
}
void duyet(node *head) {
    while (head != NULL) {
        printf("%s %d\n", head->data, head->tansuat);
        head = head->next;
    }
}
int main(){
    node *head = NULL;
    char c[100]; 
    while(scanf("%s", c) != -1){
        them(&head, c);
    }
    duyet(head);
}
