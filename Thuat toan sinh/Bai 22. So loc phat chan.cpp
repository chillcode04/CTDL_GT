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

int n, k; int a[100]; int final = 0;
void ktao() {
	for (int i = 1; i <= n; i++) {
		a[i] = 6;
	}
}
void sinh() {
	int i = n;
	while (i >= 1 && a[i] == 8) {
		a[i] = 6;
		i--;
	}
	if (i == 0) final = 1;
	else a[i] = 8;
}

int main() {
	int k;  cin >> k;
	vector<string> v;
	for (n = 1; v.size() < k; n++) {
		ktao();
		final = 0;
		while (!final && v.size() < k) {
			string res = "";
			for (int i = 1; i <= n; i++) {
				res += to_string(a[i]);
			}
			for (int i = n; i >= 1; i--) {
				res += to_string(a[i]);
			}
			v.push_back(res);
			sinh();
		}
	}
	for (auto x : v) cout << x << ' ';
}

