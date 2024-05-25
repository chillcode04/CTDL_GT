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
using ll = long long;
int main() {
	int a, b, n;
	cin >> a >> b >> n;
	ll left = 1, right = 1e18;
	ll ans = 0;
	while (left <= right) {
		ll mid = (left + right) / 2;
		ll cnt = (mid / a) * (mid / b);
		if (cnt >= n || cnt < 0) { // cnt = 1e36 bi tran nen thanh so < 0
			ans = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}
	cout << ans;
}
