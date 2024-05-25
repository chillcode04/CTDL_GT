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
string s;
// Y tuong
//- Duyet bit tu n - 1, tim cap dau tien a[i] < a[i] + 1 (So dung truoc nho hon so dung sau)
//- Khi tim duoc cap nhu tren, tim tu i + 1 den n so be nhat > a[i] 
// swap a[i] va a[j], cuoi cung sort tang dan tu i + 1 den n
void sinh() {
	int i = n - 1;
	while (i >= 0 && s[i] >= s[i + 1]) {
		i--;
	}
	if (i == -1) cout << "NOT EXIST";
	else {
		// tim a[i] > a[j], nhung nho nhat co the
		int j = n;
		while (s[i] >= s[j]) j--;
		swap(s[i], s[j]);
		reverse(s.begin() + i + 1, s.end()); // sap xep tu be den lon
		cout << s;
	}
}
vector<vector<int>> res;
int main() {
	cin >> s;
	n = s.size() - 1;
	sinh();
}

