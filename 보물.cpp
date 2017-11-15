/*
#include <iostream>
#include <algorithm>	// sort()
#include <functional>	// 내림차순

#define N 51

using namespace std;

int main()
{
	int n, ary[N], cmp[N], tmp[N], sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ary[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> cmp[i];
		tmp[i] = cmp[i];
	}

	sort(ary, ary + n);	// 오름차순 정렬
	sort(cmp, cmp + n, greater<int>());	// 내림차순 정렬

	for (int i = 0; i < n; i++) {
		sum += ary[i] * cmp[i];
	}

	cout << sum << endl;

	return 0;
}
*/