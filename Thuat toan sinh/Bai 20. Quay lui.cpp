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

int n, m; int a[100]; int final = 0;
void qlui(int i) {
	for (int j = 0; j <= 1; j++) {
		a[i] = j;
		if (i <= m / 2) {
			for (int u = 1; u <= i; u++) cout << a[u];
			for (int u = i; u >= 1; u--) cout << a[u];
			cout << endl;
		}
		if (i < m / 2) qlui(i + 1);
	}
}


int main() {
	cin >> m;
	qlui(1);
}


