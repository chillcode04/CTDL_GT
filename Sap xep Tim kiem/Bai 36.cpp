#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <math.h>
#include <algorithm>
#include <set>
#include <sstream>
#include <iomanip>
#include <vector>
using namespace std;
int cnt[1000000];
int main() {
	int n, m; cin >> n >> m;
	multiset<int> ms;
	int a[100], b[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		ms.insert(a[i]);
	}
	for (int i = 0; i < m; i++) cin >> b[i];
	for (int i = 0; i < m; i++) {
		auto it = ms.upper_bound(b[i]); // tim so be nhat lon hon b[i]
		if (it != ms.begin()) {
			    --it; // *it la so lon nhat be hon b[i]
					cout << *it << endl;
					auto it1 = ms.find(*it);
					ms.erase(it1); // xoa so *it
				}
		else cout << -1 << endl;
	}
}



