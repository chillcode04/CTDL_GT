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
	int n, x, a[100];
	cin >> n >> x;
	for (int i = 0; i < n; i++) cin >> a[i];
	ll tong = 0, ans = 0;
	map<ll, int> mp;
	for (int i = 0; i < n; i++) {
		tong += a[i];
		if (tong == x) ans++;
		if (mp.count(tong - x)) ans += mp[tong - x];
		mp[tong]++;
	}
	cout << ans;
}

