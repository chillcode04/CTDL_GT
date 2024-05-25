#include <bits/stdc++.h>
using namespace std;
int x[100], a[100] n, k, s, cnt = 0;
string res = "";
bool check = true;
void ql(int i, int sum) {
	for (int j = 1; j <= n; i++) {
		x[i] = a[j];
		if (sum + a[j] == k) {
				cout << "[";
				for (int u = 1; u <= i; u++) {
					cout << x[u] << ' ';
				} 
				cout << "]" << endl;
			}
		ql(i + 1, sum + a[j]);
	}
}
int main () {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> a[i];
	ql(1, 0);
}