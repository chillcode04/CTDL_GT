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
int n, m;
int a[100][100];
int cnt[100];
void nhap() {
	cin >> n ;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}
int main() {
	nhap();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (cnt[a[i][j]] == i) {
				cnt[a[i][j]]++;
			}
		}
	}
	int ok = 0;
	for (int i = 0; i < 100; i++) {
		if (cnt[i] == n) cout << i << ' ';
		ok = 1;
	}
	if (!ok) cout << "NOT FOUND";
}



