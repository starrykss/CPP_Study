/*
#include <iostream>

#define N 1000

using namespace std;

int main()
{
	int n, ary[N];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ary[i];
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ary[j] < ary[i]) {		// ¿À¸§Â÷¼ø Á¤·Ä
				int tmp = ary[j];
				ary[j] = ary[i];
				ary[i] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << ary[i] << endl;
	}

	return 0;
}
*/
