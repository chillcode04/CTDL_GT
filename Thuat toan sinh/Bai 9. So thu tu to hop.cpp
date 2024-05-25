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
vector<vector<int>> res;
int main() {
	cin >> n >> k;
	int b[100];
	for (int i = 0; i < k; i++) cin >> b[i];
	ktao();
	while (final == 0) {
		vector<int> tmp(a + 1, a + k + 1);
		res.push_back(tmp);
		sinh();
	}
	for (int i = 0; i < res.size(); i++) {
		bool check = true;
		for (int j = 0; j < k; j++) {
			if (res[i][j] != b[j]) {
				check = false;
				break;
			}
		}
		if (check) {
			cout << res.size() - i;
			return 0;
		}
	}
}
