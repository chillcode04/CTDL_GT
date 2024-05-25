#include <iostream>

using namespace std;
struct node {
	int data;
	struct node* next; // link
};
typedef struct node node;
node* makeNode(int x) {
	//Cap phat dong 1 node
	node* newNode = new node;
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

void duyet(node* head) {
	while (head != NULL) {
		cout << head->data << ' ';
		//dich head sang node ben phai
		head = head->next;
	}
}

int size(node* head) {
	int cnt = 0;
	while (head != NULL) {
		cnt++;
		head = head->next;
	}
	return cnt;
}
void pushFront(node** head, int x) {
	node* newNode = makeNode(x);
	newNode->next = (*head); // toan tu giai tham chieu 
	(*head) = newNode;
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

void insert(node** head, int k, int x) {
	int n = sizeof(*head); // n la so node
	if (k < 1 || k > n + 1) return;
	else if (k == 1) {
		pushFront(head, x);
	}
	else if (k == n + 1) {
		pushBack(head, x);
	}
	else {
		node* tmp = *head;
		for (int i = 1; i < k - 1; i++) {
			tmp = tmp->next;
		}
		node* newNode = makeNode(x);
		// Buoc 1: phan next cua newNode luu dia chi cua node thu k
		newNode->next = tmp->next;
		// Buoc 2: phan next cua Node thu k - 1 luu dai chi cua newNode
		tmp->next = newNode;
	}
}

void popFront(node** head) {
	if (*head == NULL) return;
	node* tmp = *head;
	*head = (*head)->next;
	free(tmp); // giai phong Node dau tien
}

void popBack(node** head) {
	if (*head == NULL) return; // co 0 node
	node* tmp = *head;
	if (tmp->next == NULL) { // co 1 node
		(*head) = NULL;
		free(tmp);
		return;
	}
	while (tmp->next->next != NULL) { // tim phan tu node thu 2 tu cuoi
		tmp = tmp->next;
	}
	node* last = tmp->next;
	tmp->next = NULL;
	free(last);
}

void erase(node** head, int k) {
	int n = size(*head);
	if (k < 1 || k > n) return;
	node* tmp = *head;
	for (int i = 1; i < k - 1; i++) {
		tmp = tmp->next;
	}
	node* del = tmp->next; // node thu k
	tmp->next = del->next; // nhay qua node del
	free(del);
}
void sort(node** head) {
	for (node* i = (*head); i != NULL; i = i->next) {
		node* min = i;
		for (node* j = i->next; j != NULL; j = j->next) {
			if (min->data > j->data) {
				min = j;
			}
		}
		int tmp = min->data;
		min->data = i->data;
		i->data = tmp;
	}
}
int main() {
	node* head = NULL;
	while (1) {
		cout << "-------------------------" << endl;
		cout << "1. Them vao cuoi" << endl;
		cout << "2. Them vao dau" << endl;
		cout << "3. Them vao giua" << endl;
		cout << "4. Duyet DSLK" << endl;
		cout << "5. Xoa dau" << endl;
		cout << "6. Xoa cuoi" << endl;
		cout << "7. Xoa giua" << endl;
		cout << "8. Sap xep" << endl;
		cout << "0. Thoat" << endl;
		cout << "-------------------------" << endl;
		cout << "Nhap lua chon: ";
		int lc; cin >> lc;
		if (lc == 1) {
			cout << "Nhap gia tri can them: ";
			int x; cin >> x;
			pushBack(&head, x);
		}
		else if (lc == 2) {
			cout << "Nhap gia tri can them: ";
			int x; cin >> x;
			pushFront(&head, x);
		}
		else if (lc == 3) {
			cout << "Nhap vi tri chen va gia tri chen: ";
			int pos, val; cin >> pos >> val;
			insert(&head, pos, val);
		}
		else if (lc == 4) {
			duyet(head);
		}
		else if (lc == 5) {
			popFront(&head);
		}
		else if (lc == 6) {
			popBack(&head);
		}
		else if (lc == 7) {
			cout << "Nhap vi tri xoa: ";
			int x; cin >> x;
			erase(&head, x);
		}
		else if (lc == 8) {
			sort(&head);
		}
		else if (lc == 0) {
			break;
		}
	}
	return 0;
}
