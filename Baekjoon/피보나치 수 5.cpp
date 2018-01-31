/*
#include <iostream>
using namespace std;
int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
int main() {
	int n;
	cin >> n;
	cout << fibonacci(n) << '\n';
	return 0;
}
*/

// 시간 초과
/* 
#include <iostream>

using namespace std;

int main()
{
	unsigned int n = 0, a = 0, b = 1;
	// int n = 0, a = 0, b = 1; 도 됨. 
	// unsigned는 높은 번째의 피보나치 수를 양수로 표현하기 위함.
	// unsigned를 사용하지 않을 경우 큰 피보나치 수가 음수로 표현됨. (그러나 정답 처리됨.)

	cin >> n;

	// n번 동안 a와 b를 swap하여 더한 수를 b에 저장. 
	// 0 1 1 2 3 5 8 13 21 34 ...
	for (int i = 0; i < n - 1; ++i) {
		unsigned int tmp = b;
		b = a + b;
		a = tmp;
	}

	cout << b << endl;

	return 0;
}
*/
