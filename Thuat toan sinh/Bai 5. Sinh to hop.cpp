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

int n, k; int a[100]; int final = 0;
void ktao() {
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
}
// Y tuong: 
//- Tim bit dau tien chua dat cuc dai tai vi tri  cua no (max = n - k + 1)
//- neu a[i] < n - k + 1 thi a[i]++ va tang dan tu bit i + 1 den n 
void sinh() {
	int i = k;
	while (i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if (i == 0) final = 1;
	else {
		a[i]++;
		for (int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}

int main() {
	cin >> n >> k;
	ktao();
	while (final == 0) {
		for (int i = 1; i <= k; i++) {
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
}