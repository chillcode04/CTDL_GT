#include <bits/stdc++.h>
using namespace std;
int a[100], x[100], n, s, cnt; 
int allsum = 0 ;
bool check = true;
void ql(int i, int bd, int sum) {
	if (!check) return;
	for (int j = bd; j <= n; j++) {
		if (sum + a[j] <= allsum / 2) {
		  if (sum + a[j] == allsum / 2) {
			check = false;
		  } 
		  else  ql(i + 1, j + 1, sum + a[j]);
	     }
	}
}
int main () {
	 cin >> n;
	 for (int i = 1; i <= n; i++) {
	 	cin >> a[i];
	 	allsum += a[i];
	 }
	 sort(a + 1, a + n + 1);
	 ql(1, 1, 0);
	 if (check) cout << 0;
	 else cout << 1;
}