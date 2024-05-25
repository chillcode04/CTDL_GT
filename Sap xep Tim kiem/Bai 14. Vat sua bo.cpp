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
	int n, a[100]; cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n, greater<int>());
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] - i > 0) sum += a[i] - i;
	}
	cout << sum;
}
