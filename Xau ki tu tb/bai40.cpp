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
int chiaDu(string s) {
	int h = 1, sum = 0;
	for (int i = s.size() - 1; i >= 0; i--) {
		sum += sum + (s[i] - '0') * h;
		h *= 2;
		h %= 5;
		sum %= 5;
	}
	return sum;
}
int main() {
	string s; cin >> s;
	if (chiaDu(s)) cout << "YES";
	else cout << "NO";
}

