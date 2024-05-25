#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <math.h>
#include <algorithm>
#include <set>
#include <sstream>
#include <vector>
using namespace std;

int main() { 
	string s; cin >> s;
	int ok = 0;
	for (int i = 0; i < s.size(); i++) {
		if (i <= s.size() - 3 && s.substr(i, 3) == "111") {
			i += 2;
		}
		else {
			ok = 1;
			cout << s[i];
		}
	}
	if (!ok) cout << "EMPTY";
}


