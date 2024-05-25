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
bool check(int a[], int n, int k, double mid) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		dem += (int)(a[i] / mid);
	}
	return dem >= k;
}

int main() {
	int n, k, a[100];
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	double left = 0, right = 9e18;
	double ans = -1;
	for (int i = 0; i <= 100; i++) {
		double mid = (left + right) / 2;
		if (check(a, n, k, mid)) {
			ans = mid;
			left = mid;
		}
		else {
			right = mid;
		}
	}
	 cout << fixed << setprecision(6) << ans;
}

