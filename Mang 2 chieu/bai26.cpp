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

int n, m, p;
int a[100][100], f[100][100];
void nhap(int n, int m, int a[100][100]) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
}
int main() {
	cin >> n;
	m = n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			f[i][j] = a[i][j] + max({ f[i - 1][j], f[i - 1][j + 1], f[i - 1][j - 1] });
		}
	}
	cout << *max_element(f[n] + 1, f[n] + m + 1); // so lon nhat trong hang n
}
