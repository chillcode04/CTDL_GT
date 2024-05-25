#include <stdio.h>
#include <stdlib.h> 
struct node {
    char *id; 
    char *name;
    double gpa;
    struct node* next;
};
typedef struct node node;
double max_gpa = 0;
node* makeNode() {
    node *newNode = (node*)malloc(sizeof(node));
    newNode->id = (char*)malloc(100);
    newNode->name = (char*)malloc(100);
    getchar();
    gets(newNode->id);
    gets(newNode->name);
    scanf("%lf", &newNode->gpa);
    max_gpa = fmax(max_gpa, newNode->gpa);
    newNode->next = NULL;
    return newNode;
}
void pushBack(node** head) {
    node* newNode = makeNode();
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

int main() {
    node *head = NULL;
    int n; scanf("%d", &n);
    while (n--) {
        pushBack(&head);
    }
    while (head != NULL) {
    	if (head->gpa == max_gpa) {
    		printf("%s %s %.2lf\n", head->id, head->name, head->gpa);
	    }
	    head = head->next;
    }
}



