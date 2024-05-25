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
	int n, l; cin >> n >> l;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	double res = max(a[0], l - a[n - 1]);
	for (int i = 1; i < n; i++) {
		res = max(res, (a[i] - a[i - 1]) / 2.0);
	}
	cout << fixed << setprecision(10) << res << endl;
}


