/*
#include <iostream>

using namespace std;

int Rev(int n)
{
	int a, b, c, d, rev = 0;

	if (n >= 1000) {
		a = n / 1000;							// 1000의 자리수
		b = (n - 1000 * a) / 100;				// 100의 자리수
		c = (n - 1000 * a - 100 * b) / 10;	// 10의 자리수
		d = n % 10;								// 1의 자리수

		rev = 1000 * d + 100 * c + 10 * b + a;
	}
	else if ((n >= 100) && (n <= 999)) {
		a = n / 100;								// 100의 자리수
		b = (n - 100 * a) / 10;				// 10의 자리수
		c = n % 10;								// 1의 자리수

		rev = 100 * c + 10 * b + a;
	}
	else if ((n >= 10) && (n <= 99)) {
		a = n / 10;								// 10의 자리수
		b = n % 10;								// 1의 자리수

		rev = 10 * b + a;
	}
	else if ((n >= 1) && (n <= 9)) {
		a = n % 10;								// 1의 자리수

		rev = a;
	}

	return rev;
}

int main()
{
	int X, Y, result;

	cin >> X >> Y;
	cout << Rev(Rev(X) + Rev(Y)) << endl;

	return 0;
}
*/

////////////////// 다른 풀이법 //////////////////////////
/*
#include <iostream>
using namespace std;

int Rev(int n) {
	int result = 0;
	while (n) {
		result *= 10;
		result += n % 10;
		n /= 10;
	}
	return result;
}

int main() {

	int X, Y;
	cin >> X >> Y;
	cout << Rev(Rev(X) + Rev(Y)) << endl;

	return 0;
}
*/

/*
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string.h>
using namespace std;

char ch1[5], ch2[5];
int k;
int main()
{
	scanf("%s %s", ch1, ch2);
	int len = strlen(ch1);

	for (int i = 0; i < len; i++)
		k += (ch1[i] - 48)*pow(10, i);

	len = strlen(ch2);
	for (int i = 0; i <len; i++)
		k += (ch2[i] - 48)*pow(10, i);

	if (k >= 1000)
		k = (k / 1000) + ((k % 1000) / 100) * 10 + ((k % 100) / 10) * 100 + (k % 10) * 1000;
	else if (k >= 100)
		k = (k / 100) + ((k % 100) / 10) * 10 + (k % 10) * 100;
	else if (k >= 10)
		k = (k / 10) + (k % 10) * 10;

	cout << k;
}
*/
/*
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int Rev(int a)
{
	char ans[5];
	int tmp;
	sprintf(ans, "%d", a);
	for (int i = 0; i < strlen(ans) / 2; i++)
	{
		swap(ans[i], ans[strlen(ans) - 1 - i]);
	}
	tmp = atoi(ans);
	return tmp;
}
int main() {
	int X, Y;
	int cnt = 0;

	cin >> X >> Y;
	cout << Rev(Rev(X) + Rev(Y));
}
*/
