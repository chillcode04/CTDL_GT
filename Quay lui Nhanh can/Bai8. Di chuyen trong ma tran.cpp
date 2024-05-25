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

int X[100], n, k, sum = 0, cnt = 0, daxet[1000];
int a[100][100];
string s = "";

void Try(int i, int j) {
	if (i == n && j == n) cout << s << ' ';
	if (i + 1 <= n && a[i + 1][j] == 1) {
		s += "D";
		a[i + 1][j] = 0; // danh dau nuoc da di
		Try(i + 1, j);
		s.pop_back(); // xoa nuoc cuoi
		a[i + 1][j] = 1;
	}
	if (j + 1 <= n && a[i][j + 1] == 1) {
		s += "R";
		a[i][j + 1] = 0;
		Try(i, j + 1);
		s.pop_back();
		a[i][j + 1] = 1;
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) cin >> a[i][j];
		}
		Try(1, 1);
	}
}