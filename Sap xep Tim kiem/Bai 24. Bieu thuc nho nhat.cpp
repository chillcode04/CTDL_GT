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
	int n, k, a[100]; cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int sum = a[0];
	sort(a + 1, a + n, greater<int> ());
	for (int i = 1; i < n; i++) {
		if (i <= k) {
			sum += a[i];
		}
		else {
			sum -= a[i];
		}
	}
	cout << sum;
}
