#include <stdio.h>
#include <stdlib.h>
struct node{
    char msv[100];
    char hoten[100];
    double gpa;
    struct node *next;
};
typedef struct node node;
node* makeNode() {
    node *newNode = (node*)malloc(sizeof(node));
    getchar();
    gets(newNode->msv);
     gets(newNode->hoten);
    scanf("%lf", &(newNode->gpa));
    newNode->next = NULL;
    return newNode;
}
void pushFront(node **head) {
    node* newNode = makeNode();
    newNode->next = *head;
    *head = newNode;
}
void pushBack(node **head) {
    node* newNode = makeNode();
    if (*head == NULL) {
        *head = newNode;
        return;
    }
        node* tmp = *head;
        while (tmp->next != NULL) tmp = tmp->next;
        tmp->next = newNode;
}
int size(node *head) {
    int cnt = 0;
    node* tmp = head;
    while (tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert(node** head, int k) {
    if (k == 1) pushFront(head);
    else if (k == size(*head) + 1) pushBack(head);
    else {
        node* tmp = *head;
        node* newNode = makeNode();
        for (int i = 1; i < k - 1; i++) {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
}
void duyet(node* head) {
    node* tmp = head;
    while (tmp != NULL) {
        printf("%s %s %.2lf\n", tmp->msv, tmp->hoten, tmp->gpa);
        tmp = tmp->next;
    }
}
int main() {
    node* head = NULL;
    int n; scanf("%d", &n);
    while (n--) {
        int x; scanf("%d", &x);
        if (x == 1) {
            pushFront(&head);
        }
        else if (x == 2) pushBack(&head);
        else {
            int k; scanf("%d", &k);
            insert(&head, k);
        }
    }
    duyet(head);
    return 0;
}
