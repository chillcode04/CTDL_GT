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

int noGiam(string s) {
	for (int i = 1; i < s.size(); i++) {
		if (s[i] + '0' < s[i - 1] + '0') return 0;
	}
	return 1;
}
int noTang(string s) {
	for (int i = 1; i < s.size(); i++) {
		if (s[i] + '0' > s[i - 1] + '0') return 0;
	}
	return 1;
}
int main() {
	string s; cin >> s;
	if (noGiam(s) || noTang(s)) {
		cout << "YES";
	}
	else cout << "NO";
}

