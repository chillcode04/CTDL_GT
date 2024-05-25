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
	ll n; cin >> n;;
	ll sum = 0;
	for (int i = 0; i < s.size(); i++) {
		sum = sum * 10 + s[i] - '0';
		sum %= n;
	}
	cout << sum; 
}

