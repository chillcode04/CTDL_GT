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
	int n, k, a[100]; cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] - a[i - 1] > k) cnt++;
	}
	cout << cnt;
}
