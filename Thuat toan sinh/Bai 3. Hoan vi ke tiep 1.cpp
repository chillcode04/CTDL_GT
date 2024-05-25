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
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
}

void sinh() {
	int i = n - 1;
	while (i >= 1 && a[i] > a[i + 1]) {
		i--;
	}
	if (i == 0) {
		for (int j = 1; i <= n; j++) cout << a[j] << ' ';
	}
	else {
		// tim a[i] > a[j], nhung nho nhat co the
		int j = n;
		while (a[i] > a[j]) j--;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1); // sap xep tu be den lon
		for (int j = 1; j <= n; j++) cout << a[j] << ' ';
	}
}
vector<vector<int>> res;
int main() {
	cin >> n;
	for (int j = 1; j <= n; j++) cin >> a[j];
	sinh();
}

