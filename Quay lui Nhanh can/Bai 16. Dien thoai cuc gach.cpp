#include <bits/stdc++.h>
using namespace std;
int k, n, cnt; 
string s;
char x[15];
vector<char> v[10];
void xly(){
	int idx = 2;
	for (char c = 'a'; c <= 'z'; c++){
		v[idx].push_back(c);
		if (idx == 7 || idx == 9) {
			if (v[idx].size() == 4) idx++;
		} 
		else {
			if (v[idx].size() == 3) idx++;
		}
	}
}
void ql(int i, string res) {
	int num = s[i] - '0';
	for (char c : v[num]) {
		x[i] = c;
		if (i == n) {
			cout << res + c << ' ';
		}
		else ql(i + 1, res + c);
	}
}
int main () {
	xly();
	cin >> s;
	sort(s.begin(),s.end());
	n = s.size();
	s = '0' + s;
	string tmp = "";
	ql(1, tmp);
} 