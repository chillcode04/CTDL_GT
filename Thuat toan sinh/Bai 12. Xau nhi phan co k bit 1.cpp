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
		a[i] = 0;
	}
}
// Y tuong: 
//- Di tim bit 0 dau tien tinh tu ben phai
//- Gap bit 1 se chuyen thanh bit 0
void sinh() {
	int i = n; // bat dau tu bit cuoi cung
	while (i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i == 0) final = 1;
	else a[i] = 1;
}
bool check() {
	int cnt = 0, res = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] == 1) cnt++;
		else cnt = 0;
		if (cnt > res) res = cnt;
		else if (cnt == res && res == k) return false;
	}
	return res == k;
}
int main() {
	ktao();
	cin >> n >> k;
	vector<string> v1, v2;
	while (final == 0) {
		int cnt = 0;
		int dem1 = 1;
		string res = "";
		for (int i = 1; i <= n; i++) {
			cnt += a[i];
			res += to_string(a[i]);
		}
		if (cnt == k) v1.push_back(res);
		if (check()) v2.push_back(res);
		sinh();
	}
	for (auto x : v1) cout << x << ' ';
	cout << endl;
	for (auto y : v2) cout << y << ' ';
}

