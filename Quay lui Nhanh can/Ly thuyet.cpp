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

int X[100], n, k, daxet[1000];
void in() {
	for (int i = 1; i <= k; i++) cout << X[i];
}
void Try(int i) {
	// Gan cac gia tri co the cho bit thu i
	for (int j = 0; j <= 1; j++) {
		X[i] = j;
		if (i == n) {
			in();
			cout << endl;
		}
		else Try(i + 1);
	}
}
// Hoan vi
void Try2(int i) {
	for (int j = 1; j <= n; j++) {
		// kiem tra xem co the gan j  cho X[i]
		if (!daxet[j]) {
			X[i] = j;
			daxet[j] = 1;
			if (i == n) {
				in();
				cout << endl;
			}
			else Try2(i + 1);
			//sau khi in ra cau hinh thi bo ghi nhan
			daxet[j] = 0;
		}
	}
}
// To hop chap k cua n
void Try3(int i) {
	for (int j = 1; j <= n; j++) {
			X[i] = j;
			if (i == k) {
				in();
				cout << endl;
			}
			else Try3(i + 1);
	}
}
int main() {
	cin >> n >> k;
	Try3(1);
}