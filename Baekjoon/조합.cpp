//
// nCr = nPr/r! = n!/r!(n-r)!
//

// ±¸Çö ¼Óµµ ³Ê¹« ´À¸²!
/*
#include <iostream>

using namespace std;


int main()
{
	int n, m, result;
	int fac_n = 1, fac_r = 1, fac_nr = 1;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		fac_n = i * fac_n;
	}
	for (int i = 1; i <= m; i++) {
		fac_r = i * fac_r;
	}
	for (int i = 1; i <= (n - m); i++) {
		fac_nr = i * fac_nr;
	}

	result = fac_n / (fac_r * fac_nr);

	cout << result << endl;

	return 0;
}
*/
