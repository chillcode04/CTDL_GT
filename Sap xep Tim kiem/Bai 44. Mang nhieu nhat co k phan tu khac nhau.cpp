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
	int n, a[100], k; cin >> n >> k;
	int cnt = 0, l = 0, ans = 0;
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]]++;
		if (mp[a[i]] == 1) {
			cnt++;
		}
		while (cnt > k) {
			mp[a[l]]--;
			if (mp[a[l]] == 0) cnt--;
			l++;
		}
		ans += i - l + 1;
	}
	cout << ans;
}
