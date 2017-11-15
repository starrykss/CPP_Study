/*
#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < ((2 * n) - 1); i++) {
		if (i < n) {
			for (int j = i; j < (n - 1); j++) cout << " ";
			for (int k = 0; k <= i; k++) cout << "*";
			cout << endl;
		}
		else {
			for (int l = 0; l <= (i % n); l++) cout << " ";
			for (int p = 0; p < (n - (i % n) - 1); p++) cout << "*";
			cout << endl;
		}
	}
	
	return 0;
}
*/