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
bool check(int a[], int n, int t, int time) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		dem += time / a[i];
	}
	return dem >= t;
}

int main() {
	int n, t;
	cin >> n >> t;
	int a[100];
	for (int i = 0; i < n; i++) cin >> a[i];
	int left = 0,  right = (*min_element(a, a + n)) * t;
	int ans = -1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (check(a, n, t, mid)) {
			ans = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	cout << ans;
}



