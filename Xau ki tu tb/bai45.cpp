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
	string n; cin >> n;
	long long mod = chiaDu(n); // bac chia du cho 4
	if (n == "0") cout << 1;
	else if (mod == 0) cout << 6;
	else if (mod == 1) cout << 8;
	else if (mod == 2) cout << 4;
	else if (mod == 3) cout << 2;
}
	

