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
	int n, x, a[100]; cin >> n >> x;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	int l = 0, r = 0;
	int ok = -1;
	while (r < n) {
		if (a[r] - a[l] == x) {
			ok = 1; break;
		}
		else if (a[r] - a[l] < x) r++;
		else l++;
	}
	cout << ok;
}