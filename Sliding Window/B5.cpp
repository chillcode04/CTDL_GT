#include <iostream>
#include <string>
#include <map>
#include <utility>
#include<math.h>
#include<algorithm>
#include<set>
using namespace std;
int main() {
	int cnt[256] = { 0 };
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++) {
		cnt[tolower(s[i])] = 1;
	}
	for (int i = 'a'; i <= 'z'; i++) {
		if (cnt[i] == 0) {
			cout << "NO"; return 0;
		}
	}
	cout << "YES";
} 
