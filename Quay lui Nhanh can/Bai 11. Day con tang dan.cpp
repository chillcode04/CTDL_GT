#include <bits/stdc++.h>
using namespace std;
int a[100], x[100], n, s, cnt;
vector<string> v;
void ql(int i, int bd) {
	for (int j = bd; j <= n; j++) {
		if (a[j] > x[i - 1]) {
			x[i] = a[j];
			if (i >= 2) {
				string res = "";
				for (int u = 1; u <= i; u++) {
					res += to_string(x[u]) + ' ';
				}
				v.push_back(res);
			}
			ql(i + 1, j + 1);
		}
	}
}
int main () {
	 cin >> n;
	 for (int i = 1; i <= n; i++) cin >> a[i];
	 ql(1, 1);
	sort(v.begin(),v.end());
	for(auto x : v) cout << x << endl;
}