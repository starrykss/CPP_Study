/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	vector <pair<int, int>> a(n);

	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i].first);
		a[i].second = i;
	}

	sort(a.begin(), a.end());
	int ans = 0;

	for (int i = 0; i<n; i++)
	{
		if (ans < a[i].second - i)
			ans = a[i].second - i;
	}

	printf("%d", ans + 1);
	return 0;
}
*/
/*
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
const int INF = -987654321;
int n;
int num[500002];
vector<int> v;
int main() {
	scanf("%d", &n);
	for (int i = 0; i<n; ++i) {
		scanf("%d", &num[i]);
		v.push_back(num[i]);
	}
	sort(v.begin(), v.end());
	int ans = INF;
	for (int i = 0; i<n; ++i) {
		int idx = upper_bound(v.begin(), v.end(), num[i]) - v.begin() - 1;
		int k = i - idx;
		ans = max(ans, k);
	}
	printf("%d",(ans>=n-1?n-1:ans)+1);
}
*/
/* 시간 초과
#include <iostream>

#define N 500000

using namespace std;

int main()
{
	int n, i, j, temp, change, A[N];

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
	}

	for (i = 1; i < n; i++) {
		change = 0;
		for (j = 1; j <= n - i; j++) {
			if (A[j] > A[j + 1]) {
				change = 1;
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
		if (change == 0) {
			break;
		}
	}
	cout << i << endl;

	return 0;
}
*/