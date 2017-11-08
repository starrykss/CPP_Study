/*
#include <iostream>

#define LIMITS 100

using namespace std;

int main()
{
	int num, a = 0, b = 0, c = 0, d = 0, sum = 0, tmp = 0, cnt = 0;

	cin >> num;
	tmp = num;

	for (int i = 0; i < LIMITS; i++) {
		
		a = tmp / 10;
		b = tmp % 10;
		sum = a + b;
		cnt++;

		c = sum / 10;
		d = sum % 10;
		sum = (10 * b) + d;
		
		if (sum == num) {
			break;
		}

		tmp = sum;
	}

	cout << cnt << endl;

	return 0;
}
*/