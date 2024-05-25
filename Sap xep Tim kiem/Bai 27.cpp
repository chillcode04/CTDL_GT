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
	int n; cin >> n;
	int a[100], b[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		auto it = upper_bound(a, a + n, b[i]);
		if (it == a + n) cout << "_ ";
		else cout << *it << ' ';
	}
}

