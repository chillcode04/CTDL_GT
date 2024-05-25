#include <bits/stdc++.h>
using namespace std;
int a[100], x[100], n, s, cnt; 
vector<vector<int>> v;
void ql(int i, int bd, int sum) {
	for (int j = bd; j <= n; j++) {
		if (sum + a[j] <= s) {
			x[i] = a[j];
			if (sum + a[j] == s) {
				vector<int> tmp(x + 1, x + i + 1);
				v.push_back(tmp);
			}
			else ql(i + 1, j, sum + a[j]);
		}
	}
}
int main () {
	cin >> n >> s;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort (a + 1, a + n + 1);
	ql(1, 1, 0);
	if (!v.size()) cout << -1;
	else {
		cout << v.size() << endl;
		for (int i = 0; i < v.size(); i++) {
			cout << "{";
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j];
			if (j < v[i].size() - 1) cout << ' ';
		}
			cout << "}" << endl;
		}
	}
}