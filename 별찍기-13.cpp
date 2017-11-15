/*
#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;
	for (int i = 0; i < ((2 * n) - 1); i++) {
		if (i < n) {
			for (int j = 0; j <= i; j++) {
				cout << "*";
			}
			cout << endl;
		}
		else {
			for (int k = 0; k < (n - (i % n) - 1); k++) {
				cout << "*";
			}
			cout << endl;
		}
	}

	return 0;
}
*/