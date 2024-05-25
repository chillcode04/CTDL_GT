#include <bits/stdc++.h>
using namespace std;
int a[100], x[100], n, s, cnt; 
bool used[10];
void ql(int i) {
	for (int j = 1; j <= n; j++) {
		if (!used[j] && abs(j - x[i - 1]) != 1) {
			x[i] = j;
			used[j] = true;
			if (i == n) {
				for (int u = 1; u <= n; u++) cout << x[u];
					cout << endl;
			}
			else ql(i + 1);
			used[j] = false;
		}
	}
}
int main () {
	 cin >> n;
	 x[0] = -1e9;
	 ql(1);
}