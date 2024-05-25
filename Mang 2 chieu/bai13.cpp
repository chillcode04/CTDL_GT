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

int n, m, p;
int a[100][100], b[100][100], c[100][100];
void nhap(int n, int m, int a[100][100]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
}
int main() {
	cin >> n >> m >> p;
	nhap(n, m, a); nhap(m, p, b);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			for (int k = 0; k < m; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			cout << c[i][j] << ' ';
		}
		cout << endl;
	}
}


