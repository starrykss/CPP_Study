/*
#include <iostream>
#include <algorithm>	// sort()

#define N 9

using namespace std;

int main()
{
	int ary[N], cmp[N], max, num;
	for (int i = 0; i < N; i++) {
		cin >> ary[i];
		cmp[i] = ary[i];
	}

	sort(cmp, cmp + N);
	max = cmp[N - 1];

	for (int i = 0; i < N; i++) {
		if (ary[i] == max) {
			num = i + 1;		// 인덱스는 0부터 시작하므로 1을 더함.
			break;
		}
	}

	cout << max << endl << num << endl;

	return 0;
}
*/