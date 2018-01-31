/*
#include <iostream>

using namespace std;

int main()
{
	long long k;

	cin >> k;

	for (long long i = 0; i < k; i++) cout << "1";
	for (long long i = 1; i < k; i++) cout << "0";
	cout << endl;

	return 0;
}
*/
/*
#include <iostream>
#include <cmath>		// pow()

using namespace std;

void DectoBin(unsigned long long a)
{
	if (a != 1) DectoBin(a / 2);
	cout << (a % 2);
}

int main()
{
	long long k, num = 0, sum = 0;
	cin >> k;

	num = pow(2, k) - 1;

	for (int i = 1; i <= num; i++) {
		sum += i;
	}

	DectoBin(sum);
	cout << endl;

	return 0;
}

// Âü°í »çÀÌÆ® : http://blog.naver.com/sukwoo0711/220928092022
*/
