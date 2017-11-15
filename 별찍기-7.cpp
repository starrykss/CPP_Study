/*
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= (2 * n - 1); i++) {
		if (i <= n) {
			for (int j = 0; j < n - i; j++) cout << " ";
			for (int k = 1; k <= (2 * i - 1); k++) cout << "*";
			cout << endl;
		}

		if (i > n) {
			for (int j = 0; j < (i - n); j++) cout << " ";
			for (int k = 1; k <= 2 * (2 * n - i) - 1; k++) cout << "*";
			cout << endl;
		}
		
	}

	return 0;
}
*/