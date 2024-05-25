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
bool cmp(string a, string b) {
	return a + b > b + a;
}
//123abcda234kkf11
int main() {
	string s, tmp; cin >> s;
	vector<string> v;
	int sum = 0;
	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i]) && sum != 0) {
			tmp = to_string(sum);
			v.push_back(tmp);
			sum = 0;
		}
		else if (isdigit(s[i])) {
			sum = sum * 10 + s[i] - '0';
			if (i == s.size() - 1) {
				tmp = to_string(sum);
				v.push_back(tmp);
			}
		}
	}
	sort(v.begin(), v.end(), cmp);
	for (string it : v) cout << it;
}

