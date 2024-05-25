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
	int n; cin >> n;
	pair<int, int> a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a + n);
	ll t = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].first > t) {
			t = a[i].first + a[i].second;
		}
		else {
			t += a[i].second;
		}
	}
	cout << t;
}
