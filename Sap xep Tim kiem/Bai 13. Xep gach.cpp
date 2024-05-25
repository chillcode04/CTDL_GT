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
	int dem = 0;
	int gioiHan = 1e9;
	for (int i = 0; i < n; i++) {
		gioiHan = min(gioiHan - 1, a[i]);
		dem++;
		if (!gioiHan) break;
	}
	cout << dem;
}