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
#define ll long long 
int n, m, u, v, s, t;
int a[100][100];
void nhap() {
	cin >> n >> m >> s >> t >> u >> v;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
}

//int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
//int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

int dx[4] = { 0, -1, 0, 1 };
int dy[4] = { -1, 0, 1, 0 };
int loang(int i, int j) {
	a[i][j] = 0; // danh dau da di qua
	cout << "Di qua o: " << i << ' ' << j << endl;
	for (int k = 0; k < 4; k++) {
			int i1 = i + dx[k], j1 = j + dy[k];
			if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1]) {
				loang(i1, j1);
			}
		}
	return 0;
}
int main() {
	nhap();
	loang(s, t);
	if (a[u][v] == 0) cout << "YES"; // loang den a[u][v]
	else cout << "NO";
}

