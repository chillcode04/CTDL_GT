#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <math.h>
#include <algorithm>
#include <set>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int a[100]; 
	for (int i = 0; i < n; i++) cin >> a[i];
	long long res = 0;
	for (int i = 0; i < n; i++) {
		auto it = lower_bound(a + i + 1, a + n, k - a[i]);
		res += --it - (a + i);
	}
	cout << res;
}


