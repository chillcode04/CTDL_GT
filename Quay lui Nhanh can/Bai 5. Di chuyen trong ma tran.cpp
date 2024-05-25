#include <bits/stdc++.h>
using namespace std;
int t[100], x[100], n, s, cnt;
int min1 = 1e9;
void ql (int i, int bd, int cnt, int sum) {
	for (int j = bd; j <= n; j++) {
		x[i] = t[j];
		if (sum + t[j] == s) {
			cnt = min(cnt, min1);
		}
		else if (sum < s) ql(i + 1, j + 1, cnt + 1, sum);
	}
}
int main () {
	 cin >> n >> s;
	 for (int i = 1; i <= n; i++) cin >> t[i];
	 ql(1, 1, 0, 0);
	 cout << cnt;
}