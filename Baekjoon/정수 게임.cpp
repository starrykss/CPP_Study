/*
#include <iostream>
#include <stdlib.h>	// malloc()

#define K 15

using namespace std;

int main()
{
	int n, k, cnt = 0, x = 0, ary[K], *num;

	cin >> n >> k;

	num = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < k; i++) {
		cin >> ary[i];
	}

	for (int i = 0; i < n; i++) {
		num[i] = i + 1;
	}
	
	for (int i = 0; i < k; i++) {
		x = ary[i];
		for (int j = 0; j < n; j++) {
			if (num[j] % x == 0) {
				num[j] = 0;
			}
		}
	}

	for (int i = 0; i < k; i++) {
		ary[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		if (num[i] != 0) {
			cnt++;
		}
	}

	cout << cnt << endl;

	free(num);

	return 0;
}
*/
/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k, it, cnt = 0, num;
	vector<int> list1, list2;

	cin >> n >> k;

	for (int i = 0; i < k; i++) {
		cin >> it;
		list1.push_back(it);
	}

	for (int i = 0; i < n; i++) {
		list2.push_back(i + 1);
	}

	for (int i = 0; i < k; i++) {
		num = list2.at(i);
		for (int j = 0; j < n; j++) {
			if ((list1.at(j) % num) == 0) {
				list1.at(j) = 0;
			}
		}
	}

	
	for (unsigned i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			if ((list2.at(i) % list1.at(j)) == 0) {
				list2.at(i) = 0;
			}
		}
	}
	for (int i = 0; i < k; i++) {
		list1.pop_back();
	}

	for (unsigned i = 0; i < n; i++) {
		if (list2.at(i) != 0) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
*/
/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k, it, cnt = 0, num;
	vector<int> list1, list2;

	cin >> n >> k;

	for (int i = 0; i < k; i++) {
		cin >> it;
		list1.push_back(it);
	}

	for (int i = 0; i < n; i++) {
		list2.push_back(i + 1);
	}

	for (unsigned i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			if ((list2.at(i) % list1.at(j)) == 0) {
				list2.at(i) = 0;
			}
		}
	}
	for (int i = 0; i < k; i++) {
		list1.pop_back();
	}

	for (unsigned i = 0; i < n; i++) {
		if (list2.at(i) != 0) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
*/
/*
#include <iostream>
#include <stdlib.h>	// malloc()

#define N 1000000000
#define K 15

using namespace std;

int main()
{
	int n, k, cnt = 0, flag = 0, ary[K];
	int num[N];

	cin >> n >> k;

	for (int i = 0; i < k; i++) {
		cin >> ary[i];
	}

	for (int i = 0; i < n; i++) {
		num[i] = i + 1;
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			if ((num[i] % ary[j]) == 0) {
				if (num[i] != 0) {
					num[i] = 0;
				}
				else {
					break;
				}
			}
		}
	}

	for (int i = 0; i < k; i++) {
		ary[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		if (num[i] != 0) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
*/

/*
#include <iostream>
#include <stdlib.h>	// malloc()

#define K 15

using namespace std;

int main()
{
	int n, k, cnt = 0, ary[K], *num;

	cin >> n >> k;

	for (int i = 0; i < k; i++) {
		cin >> ary[i];
	}

	num = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		num[i] = i + 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int p = 0; p < k; p++) {
				if (num[i] == ary[p] * (j + 1)) {
					num[i] = 0;
				}
			}
		}
	}

	// 연산이 끝나면, 배열 A에 들어 있는 수를 지움.
	for (int i = 0; i < k; i++) {
		ary[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		if (num[i] != 0) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
*/
