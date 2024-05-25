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
// Y tuong
//- Duyet bit tu n - 1, tim cap dau tien a[i] < a[i] + 1 (So dung truoc nho hon so dung sau)
//- Khi tim duoc cap nhu tren, tim tu i + 1 den n so be nhat > a[i] 
// swap a[i] va a[j], cuoi cung sort tang dan tu i + 1 den n
void sinh() {
	int i = n - 1;
	while (i >= 1 && a[i] > a[i + 1]) {
		i--;
	}
	if (i == 0) final = 1;
	else {
		// tim a[i] > a[j], nhung nho nhat co the
		int j = n;
		while (a[i] > a[j]) j--;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1); // sap xep tu be den lon
	}
}
vector<vector<int>> res;
int main() {
	cin >> n;
	string b[100];
	for (int i = 1; i <= n; i++) cin >> b[i];
	ktao();
	while (final == 0) {
		vector<int> tmp(a + 1, a + n + 1);
		res.push_back(tmp);
		sinh();
	}
	for (int i = 0; i < res.size(); i++) {
		/*for (int j = 0; j < n; j++) {
			cout << res[i][j] << ' ';
		}*/
		for (int x : res[i]) cout << b[x] << ' ';
		cout << endl;
	}
}