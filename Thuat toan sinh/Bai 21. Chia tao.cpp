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

int n, k; int a[100]; int final = 0;

void sinh() {
	int i = n;
	while (i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i == 0) final = 1;
	else a[i] = 1;
}

int main() {
	cin >> n;
	int res[100];
	for (int i = 1; i <= n; i++) cin >> res[i];
	long long ans = 1e9;
	while (!final) {
		long long sum1 = 0, sum2 = 0;
		for (int i = 1; i <= n; i++) {
			if (!a[i]) sum1 += res[i];
			else sum2 += res[i];
		}
		ans = min(ans, abs(sum1 - sum2));
		sinh();
	}
	cout << ans;
}

