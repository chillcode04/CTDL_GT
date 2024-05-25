#include <bits/stdc++.h>
using namespace std;
int k, n, cnt; 
string s, res;

void ql(int i, string cur_str, int cnt) {
	if (cnt > k || i > n - 1) return;
	res = max(res, cur_str);
	char max_val = cur_str[i];
	for (int j = i + 1; j < n; j++) {
		max_val = max(max_val, cur_str[j]);
	}
	if (max_val == cur_str[i]) 	ql(i + 1, cur_str, cnt);
	else {
		for (int j = i + 1; j < n; j++) {
			if (cur_str[j] == max_val) {
			string tmp = cur_str;
			swap(tmp[i], tmp[j]);
			ql(i + 1, tmp, cnt + 1);
		    }
		}

	}
}
int main () {
	cin >> k >> s;
	n = s.size();
	res = s;
 	ql(0, s, 0);
 	cout << res;
} 