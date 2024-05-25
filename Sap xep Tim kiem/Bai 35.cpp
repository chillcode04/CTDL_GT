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
	int n, x, cnt = 0; cin >> n >> x;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int l = 0, r = n - 1;
	while (l < r) {
		int tmp = a[l] + a[r];
		if (tmp > x) {
			cnt++;
			--r;
		}
		else  {
			l++; --r;
			cnt++;
		}
	}
	if (l == r) cnt++;
	cout << cnt;
}


