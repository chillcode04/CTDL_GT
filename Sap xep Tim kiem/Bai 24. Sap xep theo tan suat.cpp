#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <math.h>
#include <algorithm>
#include <set>
#include <sstream>
#include <iomanip>
#include <vector>
using ll = long long;
using namespace std;
int d[100005], first_pos[100005];
bool cmp1(int a, int b) {
	if (d[a] != d[b]) return d[a] > d[b];
	return a < b;
}
bool cmp2(int a, int b) {
	if (d[a] != d[b]) return d[a] > d[b];
	return first_pos[a] < first_pos[b];
}
int main() {
	int n, a[100], b[100]; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
		d[a[i]]++;
		if (d[a[i]] == 1) first_pos[a[i]] = i;
	}
	sort(b, b + n, cmp1);
	for (int i = 0; i < n; i++) cout << b[i] << ' ';
	cout << endl;
	sort(a, a + n, cmp2);
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
}