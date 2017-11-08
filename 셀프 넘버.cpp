/*
#include <iostream>
#include <algorithm>

using namespace std;

int a[10010];
int d(int n);

int main()
{
	for (int i = 1; i < 10000; i++) {
		d(i);
	}
	return 0;
}

int d(int n)
{
	int k = n;
	int sum = 0;
	if (n > 10000) return 0;
	if (!a[k]) cout << k << endl;
	a[k] = 1;
	sum += k;
	while (k) {
		sum += (k % 10);
		k = k / 10;
	}

	a[sum] = 1;
}
*/