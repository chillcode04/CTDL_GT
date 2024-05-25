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
	cin >> n >> m;
	nhap(n, m, a);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			f[i][j] = a[i][j] + max(f[i - 1][j], f[i][j - 1]);
		}
	}
	cout << f[n][m];
}


