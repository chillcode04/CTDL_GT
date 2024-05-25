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

int ngto(int n) {
	if (n <= 1) return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}
int main() {
	int n;
	cin >> n;
	int a[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	set<int> se;
	for (int i = 0; i < n; i++) {
		if (ngto(a[i][i])) se.insert(a[i][i]);
	}
	for (int i = 0; i < n; i++) {
		if (ngto(a[i][n - 1 - i])) se.insert(a[i][i]);
	}
	cout << se.size();
}


