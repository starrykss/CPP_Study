/*
#include <iostream>
#include <cstring>	// strlen()
#include <string>		// stoll()

#define N 14	// A(C), B(D) 가 모두 1,000,000일 경우 -> 7자리 * 2 = 14자리

using namespace std;

int main()
{
	char A[N] = " ", B[N] = " ", C[N] = " ", D[N] = " ";
	char ary1[N * 4], ary2[N * 4];
	int lena, lenc;
	long long res1, res2;		// 입력값이 1000000 1000000 1000000 1000000일 경우, 결과값을 출력하기 위해서 long long 자료형 선언

	cin >> A >> B >> C >> D;

	lena = strlen(A);
	lenc = strlen(C);

	for (int i = 0; i < N; i++) {
		if (A[i] != ' ') {
			ary1[i] = A[i];
		}
		if (C[i] != ' ') {
			ary2[i] = C[i];
		}
	}

	for (int i = 0; i < N; i++) {
		if (B[i] != ' ') {
			ary1[i + lena] = B[i];
		}
		if (D[i] != ' ') {
			ary2[i + lenc] = D[i];
		}
	}

	res1 = stoll(ary1);	// C++11
	res2 = stoll(ary2);

	cout << res1 + res2 << endl;

	return 0;
}
*/
/* 입력 : 1000000 1000000 1000000 1000000  
 * 출력 : 20000002000000 (int 자료형 범위 초과)
 */
