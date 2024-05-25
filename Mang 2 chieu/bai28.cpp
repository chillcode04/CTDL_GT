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
int f[100][100];
int main() {
	int n, m; cin >> n;
	m = n;
	int a[100][100];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
		}
	}
	int res = 0;
	for (int i = 3; i <= n; i++) {
		for (int j = 3; j <= m; j++) {
			int tmp = f[i][j] - f[i - 3][j] - f[i][j - 3] + f[i - 3][j - 3];
			res = max(res, tmp);
		}
	}
	cout << res;
}



