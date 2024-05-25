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

int k; int a[100]; int final = 0;
string s;

void sinh() {
	int i = s.size() - 1; // bat dau tu bit cuoi cung
	while (i >= 0 && s[i] == '1') {
		s[i] = '0';
		i--;
	}
	if (i == -1) {
		cout << string(s.size(), '0');
	}
	else {
		s[i] = '1';
		cout << s;
	}
}

int main() {
	cin >> s;
	sinh();
}