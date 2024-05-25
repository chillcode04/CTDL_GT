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
string nhoNhat(int m, int sum) {
	string res = string(m, '0');
	for (int i = m - 1; i >= 0; i--) {
		if (sum > 9) {
			res[i] = '9';
			sum -= 9;
		}
		else {
			if (i == 0) res[i] = sum + '0';
			else {
				res[0] = '1';
				res[i] = sum - 1 + '0';
				break;
			}
		}
	}
	return res;
}
string lonNhat(int m, int sum) {
	string res = string(m, '0');
	for (int i = 0; i < m; i++) {
		if (sum >= 9) {
			res[i] = '9';
			sum -= 9;
		}
		else {
			res[i] = sum + '0';
			break;
		}
	}
	return res;
}
int main() {
	int m, s;
	cin >> m >> s;
	if (9 * m < s || s == 0 & m > 1) {
		cout << "NO FOUND";
		return 0;
	}
	else {
		cout << nhoNhat(m, s) << "\n" << lonNhat(m, s);
	}
}

