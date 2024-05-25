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

int n, k; int a[100]; int final = 0, cnt;
void ktao() {
	cnt = 1;
	a[1] = n;
}
//Y tuong: 
//- Duyet tu bit n tim so hang dau tien co the giam duoc (a[i] != 1)
//- Xet xem can bu bao nhieu don vi vao dang sau, bieu dieu cac so dang sau thong qua a[i]--
//- neu con phan du thi so cuoi la so du 
void sinh() {
	//bat dau tu so hang cuoi cung va tim so hang dau tien khac 1
	int i = cnt;
	while (i >= 1 && a[i] == 1) {
		i--;
	}
	if (i == 0) final = 1;
	else {
		a[i]--;
		int d = cnt - i + 1; // luong don vi can bu
		cnt = i;
		int q = d / a[i];
		int r = d % a[i];
		for (int j = 1; j <= q; j++) {
			a[i + j] = a[i];
			++cnt;
		}
		if (r != 0) {
			cnt++;
			a[cnt] = r;
		}
	}

}
int main() {
	cin >> n;
	ktao();
	int ans = 0;
	vector<string> v;
	while (final == 0) {
		string s = "";
		for (int i = 1; i <= cnt; i++) {
			s += to_string(a[i]);
			if (i != cnt) s += "+";
		}
		ans++;
		v.push_back(s);
		sinh();
	}
	cout << ans << endl;
	for (auto x : v) cout << x << endl;
}
