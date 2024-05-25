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
#define ll long long 
int check(string s, int k) {
	int cnt = 0;
	for (int i = s.size() - 1; i >= 0; i--) {
		if (cnt < k && s[i] == '1') {
			return 0; // kiem tra k ki tu cuoi trong s, neu co ki tu khac 0 thi khong chia het
		}
		cnt++;
	}
	return 1;
}
int main() {
	string s;
	int k;
	cin >> s >> k;
	if (check(s, k)) cout << "YES";
	else cout << "NO";
}

