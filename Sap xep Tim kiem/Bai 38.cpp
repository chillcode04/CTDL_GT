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
bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}
int main() {
	int n; cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		v.push_back({ x, y });
	}
	sort(v.begin(), v.end(), cmp);
	int ans = 1, end_time = v[0].second;
	for (int i = 1; i < n; i++) {
		if (v[i].first <= end_time) {
			ans++;
			end_time = v[i].second;
		}
	}
	cout << ans;
}



