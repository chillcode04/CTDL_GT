#include <iostream>
#include <string>
#include <map>
#include <utility>
#include<math.h>
#include<algorithm>
#include<set>
#include <sstream>
using namespace std;
int main() {
	string s1; getline(cin, s1);
	int cnt = 0;
	stringstream ss(s1);
	string word;
	while (ss >> word) {
		cnt++;
	}
	cout << cnt;
}

