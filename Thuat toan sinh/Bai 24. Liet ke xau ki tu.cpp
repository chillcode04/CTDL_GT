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

int n, k; int a[100]; int final = 0;
void qlui(int i) {
	for (int j = 1; j <= n; j++) {
		a[i] = j;
		if (i == k) {
			for (int u = 1; u <= k; u++) cout << char (a[u] + 'A' - 1);
			cout << endl;
		}
		else qlui(i + 1);
	}
}
void sinh() {
	int i = k;
	while (i >= 1 && a[i] == n) {
		i--;
	}
	if (i == n) final = 1;
	else {
		a[i]++;
		for (int j = i + 1; j <= k; j++) a[j] = 1;
	}
}
int main() {
	char c;
	cin >> c >> k;
	n = c - 'A' + 1;
	qlui(1);
}

