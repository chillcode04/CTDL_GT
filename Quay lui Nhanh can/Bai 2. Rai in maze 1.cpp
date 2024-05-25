#include <bits/stdc++.h>
using namespace std;
int x[100][100], n, k, s, cnt = 0;
string res = "";
bool check = true;
void ql(int i, int j) {
	if (i == n && j == n) {
	cout << res << endl;
	check = false;
	}
	if (x[i + 1][j] && i + 1 <= n) {
		x[i + 1][j] = 0;
		res += "D";
		ql(i + 1, j);
		res.pop_back();
		x[i + 1][j] = 1;
	}
    if (x[i][j + 1] && j + 1 <= n) {
		x[i][j + 1] = 0;
		res += "R";
		ql(i, j + 1);
		res.pop_back();
		x[i][j + 1] = 1;
	}
}
int main () {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) cin >> x[i][j];
	}
	ql(1, 1);
	if (check) couut << -1;
}