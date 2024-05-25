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

int X[100], n, k, sum = 0, cnt = 0, daxet[1000];
int a[100];

void Try(int i, int pos) {
	for (int j = pos; j <= n; j++) {
		X[i] = a[j];
		sum += a[j];
		if (sum == k) {
			cout << "[";
			for (int l = 1; l <= i; l++) {
				cout << a[l];
				if (l < i) cout << ' ';
			}
			cout << "]" << " ";
		}
		else Try(i + 1, j + 1);
		sum -= a[j];
	}
}

int main() {
		cin >> n >> k;
		for (int i = 1; i <= n; i++) cin >> a[i];
		Try(1, 1);
}