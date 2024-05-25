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
void ktao() {
	for (int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}
// Y tuong: 
//- Di tim bit 0 dau tien tinh tu ben phai
//- Gap bit 1 se chuyen thanh bit 0
void sinh() {
	int i = n; // bat dau tu bit cuoi cung
	while (i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i == 0) final = 1;
	else a[i] = 1;
}

int main() {
	ktao();
	cin >> n;
	while (final == 0) {
		for (int i = 1; i <= n; i++) {
			if (a[i]) cout << 'A';
			else cout << 'B';
		}
		cout << endl;
		sinh();
	}
}


