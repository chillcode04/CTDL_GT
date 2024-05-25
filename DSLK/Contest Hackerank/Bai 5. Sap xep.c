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
int size(node* head) {
    int cnt = 0;
    node* tmp = head;
    while (tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void duyet(node* head) {
    node* tmp = head;
    while (tmp != NULL) {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
}
void sort_tang_dan(node **head) {
    for (node* i = *head; i!= NULL; i = i->next) {
        node *min = i;
        for (node* j = i->next; j != NULL; j = j->next) {
            if (j->data < min->data) {
                min = j;
            }
        }
        int tmp = i->data;
        i->data = min->data;
        min->data = tmp;
    }
}
void sort_giam_dan(node **head) {
    for (node* i = *head; i!= NULL; i = i->next) {
        node *min = i;
        for (node* j = i->next; j != NULL; j = j->next) {
            if (j->data > min->data) {
                min = j;
            }
        }
        int tmp = i->data;
        i->data = min->data;
        min->data = tmp;
    }
}
int main() {
    node *head = NULL;
    int n; scanf("%d", &n);
    while (n--) {
        int x; scanf("%d", &x);
        pushBack(&head, x);
    }
    sort_tang_dan(&head);
    duyet(head);
    printf("\n");
    sort_giam_dan(&head);
    duyet(head);
}



