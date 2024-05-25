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
	string s2; getline(cin, s2);

	map <string, int> mp;
	vector<pair<string, int>> v;

	stringstream ss(s1);
	string word;
	string new_name = "";
	while (ss >> word) {
		new_name += toupper(word[0]);
		for (int i = 1; i < word.size(); i++) {
			new_name += tolower(word[i]);
		}
		new_name += " ";
	}
		if (s2[2] != '/') s2 += "0";
		if (s2[5] != '/') s2.insert(3, "0");
		cout << new_name << endl << s2;
}
