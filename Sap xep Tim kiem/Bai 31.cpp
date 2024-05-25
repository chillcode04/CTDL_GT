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

int main() {
	vector<pair<long long, long long>> v;
	long long n, s;
	cin >> n >> s;
	for (long long i = 0; i < n; i++) {
		long long x, y;
		cin >> x >> y;
		v.push_back({x, y});
	}
	sort(v.begin(), v.end());
	for (long long i = 0; i < n; i++) {
		if (s <= v[i].first) {
			cout << "NO";
			return 0;
		}
		else s += v[i].second;
	}
	cout << "YES";
}


