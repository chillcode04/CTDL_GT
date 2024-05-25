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

int n;
int a[100];
int w[100], v[100];
int max_weith;
int max_value = -1e9;
void xly() {
	int weith = 0, value = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i]) {
			weith += w[i];
			value += v[i];
		}
	}
	if (weith <= max_weith) max_value = max(max_value, value);
}
void ql(int i) {
	for (int j = 0; j <= 1; j++) {
		a[i] = j;
		if (i == n) xly();
		else ql(i + 1);
	}
}

int main() {
	cin >> n >> max_weith;
	for (int i = 1; i <= n; i++) cin >> w[i];
	for (int i = 1; i <= n; i++) cin >> v[i];
	ql(1);
	cout << max_value;

}