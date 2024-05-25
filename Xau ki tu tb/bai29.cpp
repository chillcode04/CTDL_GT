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
	int sum = 0, res = 0;
	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i]) && sum != 0) {
			res += sum;
			sum = 0;
		}
		else if (isdigit(s[i])) {
			sum = sum * 10 + s[i] - '0';
			if (i == s.size() - 1) {
				res += sum;
				sum = 0;
			}
		}
	}
	cout << res;
}

