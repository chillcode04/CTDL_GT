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
int a[100];
vector<string> v1, v2;
void xly() {
	for (int i = 2; i <= n; i++) {
		if (abs(a[i - 1] - a[i]) == 1) return;
	}
	for (int i = 1; i <= n; i++) cout << a[i];
	cout << endl;
}
void ql_hoan_vi(int i){
	for (int j = 1; j <= n; j++) {
		if (!used[j]) {
			a[i] = j;
			used[j] = true;
			if (i == n) xly();
			else ql_hoan_vi(i + 1);
			used[j] = false;
		}
	}
}

int main() {
	cin >> n;
	ql_hoan_vi(1);
}

