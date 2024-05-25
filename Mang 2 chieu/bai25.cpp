#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <math.h>
#include <algorithm>
#include <set>
#include <sstream>
#include <iomanip>
#include <vector>
using namespace std;
int dx[8] = { -1, 0, 0, 1 };
int dy[8] = { 0, -1, 1, 0 };
int n, m;
int a[100][100];
int cnt[100];
int dem = 0;
void nhap() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
}
void loang(int i, int j){
	a[i][j] = 0;
	dem++;
	for (int k = 0; k < 4; i++) {
		int i1 = i + dx[k], j1 = j + dy[k];
		if (i1 > 0 && i1 <= n && j1 > 0 && j1 <= m && a[i1][j1]) {
			loang(i1, j1);
		}
	}
}
int main() {
	nhap();
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j]) {
				dem = 0;
				loang(i, j);
				ans = max(ans, dem);
			}
		}
	}
	cout << ans;
}



