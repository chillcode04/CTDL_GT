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

int main() {
	string s; cin >> s;
	int res = -1e9, sum;
	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i])) sum = 0;
		else {
			sum = sum * 10 + s[i] - '0';
			res = max(res, sum);
		}
		cout << sum << ' ' << res << endl;
	}
	cout << res;
}

