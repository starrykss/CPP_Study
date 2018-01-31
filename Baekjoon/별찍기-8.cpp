/*
#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;
	for (int i = 1; i <= (2 * n - 1); i++) {
		if (i <= n) {
			for (int j = 0; j < i; j++) cout << "*";
			for (int k = 0; k < (2 * n) - (2 * i); k++) cout << " ";
			for (int l= 0; l < i; l++) cout << "*";
			cout << endl;
		}
		else if (i > n) {
			for (int j = 0; j < n - (i % n); j++) cout << "*";
			for (int k = 0; k < (i % n) * 2; k++) cout << " ";
			for (int j = 0; j < n - (i % n); j++) cout << "*";
			cout << endl;
		}
	}
	
	return 0;
}
*/
