/*
#include <iostream>
using namespace std;
int main() {
	int num, small = 101, sum = 0, cnt = 0;
	for (int i = 0; i < 7; i++)
	{
		cin >> num;
		if (num % 2 == 1)//홀수일때
		{
			cnt++;
			sum += num;
			if (small > num)
			{
				small = num;
			}
		}

	}
	if (cnt == 0)
	{
		cout << "-1" << '\n';
		return 0;
	}
	cout << sum << '\n' << small << '\n';
}
*/

/* X
#include <iostream>

#define N 7

using namespace std;

int main()
{
	int ary[N], sum = 0, min = 0, cnt = 0;

	for (int i = 0; i < N; i++) {
		cin >> ary[i];
		if (ary[i] >= 100) {
			return 0;
		}
	}

	// 배열 정렬 (버블 정렬)
	for (int s = 0; s < N - 1; s++) {
		for (int t = s + 1; t < N; t++) {
			if (ary[t] >= ary[s]) {     // 내림차순 정렬
				int tmp = ary[t];
				ary[t] = ary[s];
				ary[s] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		if ((ary[i] % 2) != 0) {	// 2로 나누어지지 않는다면 => 홀수
			sum += ary[i];
			min = ary[i];
			cnt++;
		}
	}

	cout << cnt << endl;

	if (cnt == 0) {		// 홀수가 없으면
		cout << "-1" << endl;
	}
	else {
		cout << sum << endl << min << endl;
	}
	
	return 0;
}
*/