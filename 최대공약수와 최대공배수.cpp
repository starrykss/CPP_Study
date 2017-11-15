/*
#include <iostream>

using namespace std;

// GCD : 최대공약수
int gcd(int m, int n)                                                                   
{
	if (m == 0) return n;
	else return gcd(n % m, m);
}

// LCM : 최소공배수
int lcm(int m, int n) {
	return (m * n) / gcd(m, n);
}

int main()
{
	int m, n;

	cin >> m >> n;

	cout << gcd(m, n) << endl;
	cout << lcm(m, n) << endl;

	return 0;
}
*/