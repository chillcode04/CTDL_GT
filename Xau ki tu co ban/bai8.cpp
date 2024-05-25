#include <iostream>
#include <string>
#include <map>
#include <utility>
#include<math.h>
#include<algorithm>
#include<set>
using namespace std;

int main() {
	string s; cin >> s;
	int a = 0;
	string res = "";
	for (int i = 0; i < s.size(); i++) {
		if (isdigit(s[i])) a = a * 10 + (s[i] - '0');
		else res += s[i];
	}
	cout << a << endl << res;
} 

