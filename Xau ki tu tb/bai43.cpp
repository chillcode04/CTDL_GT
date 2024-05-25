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
long long gcd(long long a, long long b) {
	while (b) {
		long long t = a % b;
		a = b;
		b = t;
	}
	return a;
}

long long chiaDu(string s, long long k) {
	long long sum = 0;
	for (ll i = 0; i < s.size(); i++) {
		sum = sum * 10 + s[i] - '0';
		sum %= 10;
	}
	return sum;
}
int main() {
	string s; cin >> s;
	ll k; cin >> k;
	ll tmp = chiaDu(s, k);
	cout << gcd(tmp, k);
	
}

