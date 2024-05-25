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

int n, k;  int final = 0;
bool used[1000];
int a[100], res[5];
int max1 = -1e9;
void xly() {
	int sum = res[1];
	for (int i = 1; i <= n; i++) {
		if (a[i]) sum += res[i + 1];
		else sum -= res[i + 1];
	}
	max1 = max(sum, max1);
}

void ql(int i) {
	for (int j = 0; j <= 1; j++) {
		a[i] = j;
		if (i == n) xly();
		else ql(i + 1);
	}
}

int main() {
	n = 3;
	for (int i = 1; i <= 4; i++) cin >> res[i];
	ql(1);
	cout << max1;
}

