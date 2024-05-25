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

int n; int a[100]; int final = 0;
void ktao() {
	for (int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}

void sinh() {
	int i = n; // bat dau tu bit cuoi cung
	while (i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i == 0) final = 1;
	else a[i] = 1;
}

int main() {
	ktao();
	vector<string> v;
	int k; cin >> k;
	for (n = 1; n <= k / 2; n++) {
		final = 0;
		while (!final) {
			string s = "";
			for (int i = 1; i <= n; i++) s += to_string(a[i]);
			for (int i = n; i >= 1; i--) s += to_string(a[i]);
			v.push_back(s);
			sinh();
		}
	}
	sort(v.begin(), v.end());
	for (auto x : v) cout << x << endl;
}


