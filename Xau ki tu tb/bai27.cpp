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
	string cur_str = string(1, s[0]);
	string max_val = string(1, s[0]);
	int max_len = 1;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] != s[i - 1]) {
			cur_str += s[i];
		}
		else {
			cur_str = string(1, s[i]);
		}
		if (cur_str.size() > max_len || cur_str.size() == max_len && cur_str > max_val) {
			max_len = cur_str.size();
			max_val = cur_str;
		}
	}
	cout << max_val;
}

