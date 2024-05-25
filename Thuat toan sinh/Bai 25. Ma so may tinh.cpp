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
bool used[1000];
vector<string> v1, v2;
void xly1() {
	string s = "";
	for (int i = 1; i <= n; i++) s = s + char(a[i] + 'A' - 1);
	v1.push_back(s);
}
void ql_hoan_vi(int i){
	for (int j = 1; j <= n; j++) {
		if (!used[j]) {
			a[i] = j;
			used[j] = true;
			if (i == n) xly1();
			else ql_hoan_vi(i + 1);
			used[j] = false;
		}
	}
}
void xly2() {
	string s;
	for (int i = 1; i <= n; i++) s = s + to_string(a[i]);
	v2.push_back(s);
}
void ql_chinh_hop(int i) {
	for (int j = 1; j <= n; j++) {
		a[i] = j;
		if (i == n) xly2();
		else ql_chinh_hop(i + 1);
	}
}
int main() {
	cin >> n;
	ql_hoan_vi(1);
	ql_chinh_hop(1);
	for (auto x : v1) {
		for (auto y : v2) {
			cout << x << y << endl;
		}
	}

}

