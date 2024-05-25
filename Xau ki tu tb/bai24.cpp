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
int cnt[256];
int main() {
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++)  cnt[s[i]]++;
	ll sum = s.size();
	for (int i = 0; i < 256; i++) {
		if (cnt[i] > 1) {
			sum += 1ll * cnt[i] * (cnt[i] - 1) / 2;
		}
	}
	cout << sum;
}  

