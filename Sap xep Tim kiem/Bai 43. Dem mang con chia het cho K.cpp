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
	int tong = 0, ans = 0;
	map<int, int> mp;
	mp[0] = 1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		tong = (tong + a[i] % n + n) % n;
		if (mp.count(tong)) ans+= mp[tong];
		mp[tong]++;
	}
	cout << ans;
}
