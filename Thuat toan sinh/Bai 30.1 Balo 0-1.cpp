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

int n;
int a[100];
int w[100], v[100];
int max_weith;
int max_value = -1e9;

void ql(int i, int totalWeith, int totalValue) {
	if (totalWeith > max_weith) return;
	for (int j = 0; j <= 1; j++) {
		a[i] = j;
		if (i == n) {
			if (a[i]) {
				if (totalWeith + w[i] <= max_weith) {
					max_value = max(totalValue + v[i], max_value);
				}
			}
			else {
				if (totalWeith <= max_weith) {
					max_value = max(totalValue, max_value);
				}
			}
		}
		else {
			if (a[i]) ql(i + 1, totalWeith + w[i], totalValue + v[i]);
			else ql(i + 1, totalWeith, totalValue);
		}
	}
}

int main() {
	cin >> n >> max_weith;
	for (int i = 1; i <= n; i++) cin >> w[i];
	for (int i = 1; i <= n; i++) cin >> v[i];
	ql(1, 0, 0);
	cout << max_value;

}