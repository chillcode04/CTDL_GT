#include <iostream>
#include <string>
#include <map>
#include <utility>
#include<algorithm>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.first != b.first) return a.first < b.first;
	return a.second < b.second;
}
int main() {
	int n, k; cin >> n >> k;
	//int cnt[10000] = { 0 };
	//for (int i = 0; i <= k; i++) {
	//	cnt[a[i]]++;
	//	if (cnt[a[i]] == 2) {
	//		cout << "YES"; return 0;
	//		}
	//}
	//for (int i = k +1; i < n; i++) {
	//	cnt[a[i]]++;
	//	cnt[a[i - k - 1]]--;
	//	if (cnt[a[i]] == 2) {
	//		cout << "YES"; return 0;
	//	}
	//}
	//cout << "NO";
	pair <int, int> a[10000];
	for (int i = 0; i < n; i++) {
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a, a + n, cmp);
	for (int i = 1; i < n; i++) {
		if (a[i].first == a[i - 1].first) {
			if (a[i].second - a[i - 1].second <= k) {
				cout << "YES"; return 0;
			}
		}
	}
	cout << "NO"; return 0;
}

