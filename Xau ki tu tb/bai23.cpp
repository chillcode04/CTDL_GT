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
	set<string> se;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string tmp; cin >> tmp;
		se.insert(tmp);
	}
	for (auto it = se.rbegin(); it != se.rend(); it++) {
		cout << (*it);
	}
}  

