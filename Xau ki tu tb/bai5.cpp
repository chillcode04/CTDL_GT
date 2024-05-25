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
	map<char, int> mp;
	for (int i = 0; i < s1.size(); i++) mp[s1[i]]++;
	for (int i = 0; i < s1.size(); i++) mp[s2[i]]++;
	for (auto it : mp) {
		if (it.second > 1) cout << it.first;
	}
	cout << endl;
	for (auto it : mp) {
		cout << it.first;
	}
} 

