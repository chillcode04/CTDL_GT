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
//4! = 3! *2 !* 2!
//5! = 5! 
//6! = 3! * 5!
//7! = 7!
//8! = 2! * 2! * 2! * 7!
//9! = 3! * 3! * 2! * 7!
int main() { 
	string s; cin >> s;
	string a[] = { "", "", "2", "3", "322", "5", "53", "7", "2227", "3327" };
	string res = "";
	for (int i = 0; i < s.size(); i++) {
		res += a[s[i] - '0'];
	}
	multiset<char> se;	
	for (char x : res) se.insert(x);
	for (auto it = se.rbegin(); it != se.rend(); it++) cout << *it;
}


