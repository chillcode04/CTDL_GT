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
	int n, a[100]; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	int l = 0;
	map<int, int> mp;
	for (int r = 0; r < n; r++) {
		mp[a[r]]++;
		while (mp[a[r]] > 1) {
			mp[a[l]]--;
			l++;
		}
		ans = max(ans, r - l + 1);
	}
	cout << ans;
}
