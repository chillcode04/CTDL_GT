#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
	int n, k; cin >> n >> k;
	int a[1000];
	for (int i = 0; i < n; i++) cin >> a[i];
	int l = 0, sum = 0, res = 1e9, st = 0;
	for (int r = 0; r < n; r++) {
		sum += a[r];
		if (sum >= k) {
			while (1) {
				if (sum - a[l] < k) break;
				else {
					sum -= a[l];
					l++;
				}
			}
			if (r - l + 1 < res) {
				res = r - l + 1;
				st = l;
			}
		}
	}
	for (int i = st; i < st + res; i++) cout << a[i] << ' ';
}

