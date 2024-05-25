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
	int n, stt = 2; cin >> n;
	cin.ignore();
	pair<string, string> p[100];
	set<string> se;
 	for (int i = 0; i < n; i++) {
		string s1; getline(cin, s1);
		for (char& x : s1) x = tolower(x);
		stringstream ss(s1);
		vector<string> v;

		string word;
		string email = "", ten_mien = "@xyz.edu.vn", mat_khau = "";
		while (ss >> word) {
			v.push_back(word);
		}
		email += v[v.size() - 2];
		for (int i = 0; i < v.size() - 2; i++) {
			email += v[i][0];
		}
		if (se.count(email)) {
			email += to_string(stt);
			stt++;
		}

		se.insert(email);
		email += ten_mien;
		p[i].first = email;

		string mk = "";
		mk += to_string(stoi(word.substr(0, 2)));
		mk += to_string(stoi(word.substr(3, 2)));
		mk += to_string(stoi(word.substr(6, 4)));
		p[i].second = mk;
	}
	for (int i = 0; i < n; i++) {
		cout << p[i].first << "\n" << p[i].second << endl;
	}
}  
