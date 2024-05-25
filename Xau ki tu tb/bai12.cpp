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
	stringstream ss(s1);
	string word;
	while (ss >> word) {
		if (check1(word) && se.count(word) == 0) {
			v.push_back(word);
		}
		se.insert(word);
	}
	stable_sort(v.begin(), v.end(), cmp);
	for (auto it : v) cout << it << ' ';
}
\
