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
long long chiaDu(string n) {
	long long sum = 0;
	for (int i = 0; i < n.size(); i++) {
		sum = sum * 10 + n[i] - '0';
		sum %= 4;
	}
	return sum;
}
int main() {
	string s; cin >> s;
	long long tmp = chiaDu(s);
	long long res = pow(1, tmp) + pow(2, tmp) + pow(3, tmp) + pow(4, tmp);
	cout << res % 5;
}
	

