/*
#include <iostream>

using namespace std;

int main()
{
	int n = 0, a = 0, b = 1;

	cin >> n;

	// n번 동안 a와 b를 swap하여 더한 수를 b에 저장. 
	// 0 1 1 2 3 5 8 13 21 34 ...
	for (int i = 0; i < n - 1; ++i) {
		int tmp = b;
		b = a + b;
		a = tmp;
	}

	cout << b << endl;

	return 0;
}
*/
/*
#include <iostream>

using namespace std;

int cache[50];

// 피보나치 점화식 Fn = Fn-1 + Fn-2
int fibo(int n)
{
	if (n < 2)
		return n;
	int& ret = cache[n];
	if (ret)
		return ret;
	ret = fibo(n - 1) + fibo(n - 2);
	return ret;
}

int main()
{
	int n;
	scanf("%d", &n);
	cout << fibo(n) << endl;
}
*/
// 시간 초과
/*
#include <iostream>

using namespace std;

int fib(int n)
{
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return (fib(n - 1) + fib(n - 2));
}

int main()
{
	int n, result;

	cin >> n;
	result = fib(n);

	cout << result << endl;

	return 0;
}
*/
