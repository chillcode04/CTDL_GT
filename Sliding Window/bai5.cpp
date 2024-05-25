#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; cin >> s;
	int dS[256] = { 0 };
	int l = 0, res = -1e9;
	for (int r = 0; r < s.length(); r++) {
		dS[s[r]]++;
		if (dS[s[r]] == 1) res = max(res, r - l + 1);
		else {
			while (dS[s[r]] > 1) {
				dS[s[l]]--;
				l++;
			}
		}
	}
	cout << res << endl;
}
