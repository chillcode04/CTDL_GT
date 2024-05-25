#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <math.h>
#include <algorithm>
#include <set>
#include <sstream>
#include <vector>
using namespace std;

int n; int a[100]; int final = 0;
int check() {
	if (a[1] != 8 || a[n] != 6) return 0;
	for (int i = 2; i <= n; i++) {
		if (a[i] == 8 && a[i - 1] == 8) return 0;
		if (i >= 4 && a[i] == 6 && a[i - 1] == 6 && a[i - 2] == 6 && a[i - 3] == 6) return 0;
	}
	return 1;
}
void ktao() {
	for (int i = 1; i <= n; i++) {
		a[i] = 6;
	}
}
// Y tuong: 
//- Di tim bit 0 dau tien tinh tu ben phai
//- Gap bit 1 se chuyen thanh bit 0
void sinh() {
	int i = n; // bat dau tu bit cuoi cung
	while (i >= 1 && a[i] == 8) {
		a[i] = 6;
		i--;
	}
	if (i == 0) final = 1;
	else a[i] = 8;
}

int main() {
	ktao();
	cin >> n;
	while (final == 0) {
		if (check()) {
			for (int i = 1; i <= n; i++) {
				cout << a[i];
			}
			cout << endl;
		}
			sinh();
	}
}
