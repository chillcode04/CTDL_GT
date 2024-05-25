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
long long gcd(long long a, long long b) {
	while (b) {
		long long tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
int main() { 
	long long a, x, y;
	cin >> a >> x >> y;
	long long k = gcd(x, y);
	while (k--) cout << a;
}


