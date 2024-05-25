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
#define ll long long 
//abcd123aad22a05
int main() {
	string s; cin >> s;
	int ok = 0;
	int l = 0, r = s.size() - 1;
	while (l < r) {
		if (s[l] != s[r]) {
			cout << "NO";
			return 0;
		}
		else {
			if (s[l] = '6') ok = 1;
			l++; r--;
		}
	}
	if (ok) cout << "YES";
}

