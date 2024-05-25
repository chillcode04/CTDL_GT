#include <bits/stdc++.h>
using namespace std;
int a[100][100], n, m, cnt = 0;
void ql(int i, int j) {
	if (i == n - 1 && j == m - 1) {
		cnt++;
	}
	if (i + 1 < n && a[i + 1][j]) ql(i + 1, j);
	if (j + 1 < m && a[i][j + 1]) ql(i, j + 1);
}
int main () {
	 cin >> n >> m;
    for(int i = 0 ; i < n;i++)
    {
        for(int j = 0 ; j < m ; j++) cin >> a[i][j];
    }
	ql(0, 0);
	cout << cnt;
}