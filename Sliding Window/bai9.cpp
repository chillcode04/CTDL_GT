#include <iostream>
#include <string>
#include <map>
#include <utility>
#include<algorithm>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int res = 1e9, a[10000], sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	if (sum < k) {
		cout << -1;
		return 0;
	}
	int d[2] = { 0 };
	for (int i = 0; i < k; i++) {
		d[a[i]]++;
		res = min(res, k - d[1]);
	}
	for (int i = k; i < n; i++) {
		d[a[i]]++;
		d[a[i - k]]--;
		res = min(res, k - d[1]);
	}
	cout << res;
} 

