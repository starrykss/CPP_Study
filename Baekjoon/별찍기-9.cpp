/*
#include <iostream>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	for (int i = 0; i <= (2 * n - 1); i++) {
		if (i < n) {
			for (int j = 0; j < i; j++) cout << " ";
			for (int k = 0; k < ((2 * n) - (2 * i) - 1); k++) cout << "*";
			cout << endl;
		}
		else if (i > n) {
			for (int j = 0; j < (n - ((i % n) + 1)); j++) cout << " ";
			for (int k = 0; k <= (2 * (i % n)); k++) cout << "*";
			cout << endl;
		}
	}

	return 0;
}
*/
