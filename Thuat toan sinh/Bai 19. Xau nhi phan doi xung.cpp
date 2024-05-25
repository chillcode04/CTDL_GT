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

void sinh() {
	int i = n / 2; // bat dau tu bit cuoi cung
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
	if (n % 2 == 0) {
		while (!final) {
			for (int i = 1; i <= n / 2; i++) cout << a[i];
			for (int i = n / 2; i >= 1; i--) cout << a[i];
			cout << endl;
			sinh();
		}
	}
	else {
		while (!final) {
			for (int u = 0; u <= 1; u++) {
				for (int i = 1; i <= n / 2; i++) cout << a[i];
				cout << u;
				for (int i = n / 2; i >= 1; i--) cout << a[i];
				cout << endl;
			}
				sinh();
		}
	}
}


