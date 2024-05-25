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
int nguyen_am(char c) {
	return c == 'A' || c == 'E';
}
void xly1() {
	for (int i = 2; i <= n - 1; i++) {
		if (nguyen_am(char(a[i] + 'A' - 1))
			&& !nguyen_am(char(a[i - 1] + 'A' - 1))
			&& !nguyen_am(char(a[i + 1] + 'A' - 1))) return;
	}
	for (int i = 1; i <= n; i++) cout << char(a[i] + 'A' - 1);
	cout << endl;
}
void ql_hoan_vi(int i){
	for (int j = 1; j <= n; j++) {
		if (!used[j]) {
			a[i] = j;
			used[j] = true;
			if (i == n) xly1();
			else ql_hoan_vi(i + 1);
			used[j] = false;
		}
	}
}

int main() {
	char c;
	cin >> c;
	n = c - 'A' + 1;
	ql_hoan_vi(1);
}

