/*
#include <iostream>

using namespace std;

int min(int a, int b)
{
	if (a > b) return b;
	else if (b > a) return a;
	else return a;
}

int gcd(int m, int n)
{
	int g;
	for (g = min(m, n); g >= 1; g--) {
		if ((m % g == 0) && (n % g == 0)) {
			return g;
		}
	}
}

int fac(int num)
{
	int f = 1;
	for (int i = 1; i <= num; i++) {
		f *= i;
	}

	return f;
}

int main()
{
	int a, b;

	cin >> a >> b;
	cout << gcd(fac(a), b) << endl;

	return 0;
}
*/