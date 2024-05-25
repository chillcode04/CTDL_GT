#include <bits/stdc++.h>
using namespace std;
int t[100], x[100], n, s, cnt;
int res = 1e9;
void ql(int i, int bd, int sum) {
	for (int j = bd; j <= n; j++) {
		if (sum + t[j] <= s) {
			x[i] = t[j];
			if (sum + t[j] == s) {
				res = min(res, i);
			}
			else ql(i + 1, j + 1, sum + t[j]);
		}
		else return;
	}
}
int main () {
	 cin >> n >> s;
	 for (int i = 1; i <= n; i++) cin >> t[i];
	 sort(t + 1, t + n + 1);
	 ql(1, 1, 0);
	 if (res == 1e9) cout << -1;
	 else cout << res;
}