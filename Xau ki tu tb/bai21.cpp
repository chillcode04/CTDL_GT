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
void chuanHoa(string& s) {
	for (int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
}
int main() {
	string s1, s2;
	set<string> se;
	vector<string> v;
	getline(cin, s1);
	getline(cin, s2);
	chuanHoa(s1); chuanHoa(s2);
	stringstream ss1(s1);
	string word;
	while (ss1 >> word) {
		se.insert(word);
	}
	stringstream ss2(s2);
	while (ss2 >> word) {
		v.push_back(word);
	}
	for (string x : v) {
		if (se.count(x)) {
			cout << x << ' ';
			se.erase(x);
		}
	}
}  

