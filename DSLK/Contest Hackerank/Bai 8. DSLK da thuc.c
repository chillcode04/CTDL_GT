#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int heso, bac;
    struct node* next;
};
typedef struct node node;
node* makeNode(int heso, int bac) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->heso = heso;
    newNode->bac = bac;
    newNode->next = NULL;
    return newNode;
}
void them(node** head, int heso, int bac) {
    node* tmp = *head;
    node* prev = *head;
    while (tmp != NULL) {
        if (tmp->bac == bac) {
            tmp->heso += heso;
            return;
        }
        prev = tmp;
        tmp = tmp->next;
    }
    node* newNode = makeNode(heso, bac);
    if (prev == NULL) {
        *head = newNode;
        return;
    }
    prev->next = newNode;
}
void sort(node** head) {
    for (node* i = *head; i != NULL; i = i->next) {
        node* max = i;
        for (node* j = i->next; j != NULL; j = j->next) {
            if (j->bac > max->bac) max = j;
        }
        int tmp = i->bac; i->bac = max->bac; max->bac = tmp;
        tmp = i->heso; i->heso = max->heso; max->heso = tmp;
    }
}
void duyet(node* head) {
    while (head != NULL) {
        printf("%dx^%d", head->heso, head->bac);
        head = head->next;
        if (head != NULL) printf(" + ");
    }
}
int main() {
    node* head = NULL;
    char c[100];
    while (scanf("%s", c) != -1) {
        if (strcmp(c, "+") != 0) {
            int heso = 0, bac = 0;
            int i = 0;
            while (c[i] != 'x') heso += heso * 10 + c[i++] - '0';
            i += 2;
            while (c[i]) bac += bac * 10 + c[i++] - '0';
            them(&head, heso, bac);
        }
    }
    sort(&head);
    duyet(head);
}
