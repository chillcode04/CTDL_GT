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
int dem = 0;
int a[100][100];
void nhap() {
	cin >> n >> s >> t ;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}
// nuoc di cua con ma
int dx[4] = { -1, -1, 1, 1 };
int dy[4] = { -1, 1, -1, 1 };

//int dx[4] = { 0, -1, 0, 1 };
//int dy[4] = { -1, 0, 1, 0 };

int loang(int i, int j) {
	a[i][j] = 1;
	dem++;
	cout << "Di qua o: " << i << ' ' << j << endl;
	for (int k = 0; k < 4; k++) {
			int i1 = i + dx[k], j1 = j + dy[k];
			if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && a[i1][j1] == 0) {
				loang(i1, j1);
			}
		}
	return 0;
}
int main() {
	nhap();
	loang(s - 1, t - 1);
	cout << dem;
}

