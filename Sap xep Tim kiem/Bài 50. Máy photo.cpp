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
bool check(int n, int x, int y, int time) {
	time -= min(x, y);
	return (time / x + time / y) >= n - 1;
}

int main() {
	int n, x, y;
	cin >> n >> x >> y;
	int left = 0, right = min(x, y) * n;
	int ans = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (check(n, x, y, mid)) {
			ans = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}
	cout << ans;
}



