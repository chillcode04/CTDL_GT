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
using ll = long long;
using namespace std;
int main() {
	int n, m, a[100], b[100];
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	int ans = 0;
	sort(a, a + n);
	sort(b, b + m);
	int i = 0, j = 0;
	while (i < n && j < m) {
		if (a[i] > b[j]) {
			ans++;
			i++; j++;
		}
		else {
			i++;
		}
	}
	cout << ans;
}
\
