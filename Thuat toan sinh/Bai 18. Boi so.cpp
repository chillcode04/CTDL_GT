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
typedef long long ll;
int n; int a[100]; int final = 0;
string s;
ll res[1000];
void sinh() {
	int i = n;// bat dau tu bit cuoi cung
	while (i >= 0 && s[i] == '8') {
		s[i] = '0';
		i--;
	}
	if (i == -1) final = 1;
	else s[i] = '8';
}

int main() {
	s = "000000000000";
	n = s.size() - 1;
	vector<string> v;
	while (!final) {
		v.push_back(s);
		sinh();
	}
	for (int i = 1; i <= 500; i++) {
		for (auto x : v) {
			ll tmp = stoll(x);
			if (tmp != 0 && tmp % i == 0) {
				res[i] = tmp;
				break;
			}
		}
	}
	int t; cin >> t;
	while (t--) {
		int x; cin >> x;
		cout << res[x] << endl;
	}
}


