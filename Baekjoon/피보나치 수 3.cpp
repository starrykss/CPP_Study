/*
#include <iostream>
using namespace std;
const int mod = 1000000;
const int p = mod/10*15;
int fibo[p] = {0,1};
int main() {
    long long n;
    cin >> n;
    for (int i=2; i<p; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
        fibo[i] %= mod;
    }
    cout << fibo[n%p] << '\n';
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

// 2749번: 피보나치 수 3
// 피보나치 수는 어차피 앞 두 항의 합으로 뒷항이 결정된다.
// (a+b) mod c = ( a mod c + b mod c ) mod c 임을 이용하여 풀음
// k(10^n) = 15×10^(n-1), 1500000

const int milion_pp = 1500000;
int mod_fibo[milion_pp] = { 0,1 };

int main() {

	long long m;
	cin >> m;
	m = m % milion_pp;

	for (int i = 2; i < milion_pp; ++i) {
		mod_fibo[i] = (mod_fibo[i - 1] + mod_fibo[i - 2]) % 1000000;
	}

	cout << mod_fibo[m] << "\n";

	return 0;
}
*/
