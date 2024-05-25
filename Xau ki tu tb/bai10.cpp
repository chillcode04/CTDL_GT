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
int main() {
	string s1; getline(cin, s1);
	set<string> se;
	vector<string> v;
	stringstream ss(s1);
	string word;
	while (ss >> word) {
		if (se.count(word) == 0) {
			v.push_back(word);
		}
		se.insert(word);
	}
	for (auto it : se) cout << it << ' ';
	cout << endl;
	for (auto it : v) cout << it << ' ';
}

