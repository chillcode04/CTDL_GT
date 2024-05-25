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
int ham1(int a[], int n, int x) {
	int l = 0, r = n - 1, res = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] == x) {
			res = mid;
			r = mid - 1;
		}
		else if (a[mid] > x) r = mid - 1;
		else l = mid + 1;
	}
	return res;
}

int ham2(int a[], int n, int x) {
	int l = 0, r = n - 1, res = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] == x) {
			res = mid;
			l = mid + 1;
		}
		else if (a[mid] > x) r = mid - 1;
		else l = mid + 1;
	}
	return res;
}

int ham3(int a[], int n, int x) {
	int l = 0, r = n - 1, res = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] >= x) {
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	return res;
}

int ham3(int a[], int n, int x) {
	int l = 0, r = n - 1, res = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] > x) {
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	return res;
}
int ham5(int a[], int n, int x) {
	int d = ham1(a, n, x);
	int c = ham2(a, n, x);
	if (d != -1) return c - d + 1;
	return 0;
}
int main() {

}



