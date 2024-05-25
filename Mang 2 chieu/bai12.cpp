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

int main() {
	int n, m;
	cin >> n >> m;
	int a[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[j][i]; // nhap vao ma tran chuyen vi
		}
	}
	
	for (int i = 0; i < n; i++) sort(a[i], a[i] + n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[j][i] << ' '; // in ra ma tran chuyen vi
		}
		cout << endl;
	}
}


