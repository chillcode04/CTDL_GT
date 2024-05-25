#include <iostream>
#include <string>
#include <map>
#include <utility>
#include<math.h>
#include<algorithm>
#include<set>
using namespace std;
int main() {
	string s1, s2; cin >> s1 >> s2;
	int cnt1[256] = { 0 }, cnt2[256] = { 0 };
	for (int i = 0; i < s1.size(); i++) cnt1[s1[i]]++;
	for (int i = 0; i < s2.size(); i++) cnt2[s2[i]]++;
	for (int i = 0; i < 256; i++) {
		if (cnt1[i] && cnt2[i] == 0) cout << (char)i;
	}
	cout << endl;
	for (int i = 0; i < 256; i++) {
		if (cnt1[i] == 0 && cnt2[i]) cout << (char)i;
	}
} 

