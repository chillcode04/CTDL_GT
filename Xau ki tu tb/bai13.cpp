#include <iostream>
#include <string>
#include <map>
#include <utility>
#include<math.h>
#include<algorithm>
#include<set>
#include <sstream>
#include <vector>
using namespace std;
bool cmp(string a, string b) {
	 return a.size() < b.size();
}
int check1(string s) {
	int l = 0, r = s.size() - 1;
	while (l <= r) {
		if (s[l] != s[r]) {
			return 0;
		}
		l++;  r--;
	}
	return 1;
}
int main() {
	string s1; getline(cin, s1);
	set<string> se;
	vector<string> v;
	map<string, int> mp;
	stringstream ss(s1);
	string word;
	while (ss >> word) {
		v.push_back(word);
		mp[word]++;
	}
	for (auto it : mp) {
		cout << it.first << ' ' << it.second << endl;
	}
	cout << endl;
	for (auto it : v) {
		if (mp[it]) {
			cout << it << ' ' << mp[it] << endl;
			mp[it] = 0;
		}
	}
}

