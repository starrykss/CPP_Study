/*
#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < (n - 1); j++) cout << " ";
		if (i != (n - 1)) {
			cout << "*";
			for (int k = 0; k < ((2 * i) - 1); k++) cout << " ";
			if (i >= 1) cout << "*";
		}
		else {
			for (int i = 0; i < ((2 * n) - 1); i++) {
				cout << "*";
			}
		}
		cout << endl;
	}

	return 0;
}
*/