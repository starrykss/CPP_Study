/*
#include<cstdio>
#include<algorithm>
int n, a[1000000];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", a + i);
	std::sort(a, a + n);
	for (int i = 0; i < n; i++) printf("%d\n", a[i]);
	return 0;
}
*/
// 시간 초과
/*
#include <iostream>
#include <cstdio>
#include <algorithm>	// sort()

#define N 1000000

using namespace std;

int main()
{
	int n, ary[N];

	scanf("%d", &n);	// cin보다 scanf가 속도 더 빠름.
	for (int i = 0; i < n; i++) {
		scanf("%d", ary);
	}

	sort(ary, ary + n);	// O(N*log₂N)

	for (int i = 0; i < n; i++) {
		printf("%d\n", ary[i]);
	}

	return 0;
}
*/