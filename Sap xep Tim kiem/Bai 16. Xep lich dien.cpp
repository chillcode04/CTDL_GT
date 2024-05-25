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
bool cmp(pair<int, int> a, pair <int, int> b) {
	return a.second < b.second;
}
int main() {
	int n; cin >> n;
	vector<pair<int, int>> v;
	while (n--) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x, y });
	}
	sort(v.begin(), v.end(), cmp);
	int ans = 1, time_End = v[0].second;
	for (int i = 1; i < n; i++) {
		if (v[i].first > time_End) {
			ans++;
			time_End = v[i].second;
		}
	}
	cout << ans;
 }
}
