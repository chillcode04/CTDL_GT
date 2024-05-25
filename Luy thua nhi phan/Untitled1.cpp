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
long long binpow(long long a, longAC long b) {
	if (b == 0) return 1;
	long long X = binpow(a, b / 2);
	if (b % 2 == 0) {
		return X * X;
	}
	else {
		return X * X * a;
	}
}
int main() {
	cout << binpow(2, 10);
}
