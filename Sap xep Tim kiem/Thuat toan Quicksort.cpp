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

//Phan hoach Lomuto
int partition1(int a[], int l, int r) {
	int x = a[r]; // x la chot
	int i = l - 1;
	for (int j = l; j < r; j++) {
		if (a[j] < x) {
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[r]); // dua chot ve giua
	return i + 1;
}
void quicksort1(int a[], int l, int r) {
	if (l >= r) return;
	int p = partition1(a, l, r);
	quicksort1(a, l, p - 1);
	quicksort1(a, p + 1, r);
}

// Phan hoach Hoare
int partition2(int a[], int l, int r) {
	int pivot = a[l];
	int i = l - 1, j = r + 1;
	while (1) {
		do {
			++i;
		} while (a[i] < pivot);
		do {
			--j;
		} while (a[j] > pivot);
		if (i < j) swap(a[i], a[j]);
		else return j;
	}
}
void quicksort2(int a[], int l, int r) {
	if (l >= r) return;
	int p = partition2(a, l, r);
	quicksort2(a, l, p); // luu y lay ca p
	quicksort2(a, p + 1, r);
}



int main() {
	int a[7] = { 11, 14, 25, 78, 23, 35, 15 };
	quicksort2(a, 0, 6);
	for (int x : a) cout << x << ' ';
}
