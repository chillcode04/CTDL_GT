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
bool check(int a[], int n, int k, int s) {
	int sum = 0, dem = 1;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		if (sum > s) {
			sum = a[i];
			dem++;
		}
	}
	return dem <= k;
}

int main() {
	int n, k, a[100], right = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		right += a[i];
	}
	int left = (*max_element(a, a + n));
	int ans = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (check(a, n, k, mid)) {
			ans = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}
	cout << ans;
}
