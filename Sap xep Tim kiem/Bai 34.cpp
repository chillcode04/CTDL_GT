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

int main() {
	int n, m, k; cin >> n >> m >> k;
	int a[100], b[100];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	int i = 0, j = 0, cnt = 0;
	sort(a, a + n);
	sort(b, b + m);
	while (i < n && j < m) {
		int tmp = abs(a[i] - b[j]);
		if (tmp <= k) {
			i++; j++;
			cnt++;
		}
		else if (a[i] < b[j]) i++;
		else j++;
	}
	cout << cnt;
}


