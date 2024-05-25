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
using namespace std;
int pos[100];
int main() {
	int n; cin >> n;
	int a[100];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		pos[a[i]] = i;
	}
	pos[0] = 1e9;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (pos[a[i] - 1] > pos[a[i]]) ans++; // VD: neu so 1 xep sau so 2 thi ans++
	}
	cout << ans;
}



