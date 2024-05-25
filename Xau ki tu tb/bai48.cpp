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
int soMayMan(string s) {
	int sum = 0;
	for (int i = 0; i < s.size(); i++) sum += s[i] - '0';
	return sum;
}
int main() { 
	string s; cin >> s;
	while (s.size() > 1) {
		int sum = soMayMan(s);
		s = to_string(sum);
	}
	if (s == "9") cout << "YES";
	else cout << "NO";
}



