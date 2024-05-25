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
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
}
int main() {
	string s1; getline(cin, s1);

	map <string, int> mp;
	vector<string> v;

	stringstream ss(s1);
	string word;
	string new_name = "";
	while (ss >> word) {
		v.push_back(word);
	}
	for (char& x : v[v.size() - 1]) {
		x = toupper(x);
	}
	for (int i = 0; i < v.size() - 1; i++) {
		chuanHoa(v[i]);
	}
	for (int i = 0; i < v.size() ; i++) {
		if (i != v.size() - 2) cout << v[i] << " ";
		else cout << v[i] << ", ";
	}
	cout << endl;
	cout << v[v.size() - 1] << ", ";
	for (int i = 0; i < v.size() - 1; i++) {
		cout << v[i] << " ";
	}
}
