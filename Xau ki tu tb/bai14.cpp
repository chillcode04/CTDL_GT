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
bool cmp(pair<string, int> a, pair<string, int> b) {
	if (a.second != b.second) return a.second < b.second;
	return a.first > b.first;
}
int main() {
	string s1; getline(cin, s1);
	stringstream ss(s1);
	map <string, int> mp;
	vector<pair<string, int>> v;
	string word;
	while (ss >> word) {
		mp[word]++;
	}
	for (auto x : mp) v.push_back(x);
	sort(v.begin(), v.end(), cmp);
	cout << v[v.size() - 1].first << ' ' << v[v.size() - 1].second << endl;
	cout << v[0].first << ' ' << v[0].second << endl;
}

