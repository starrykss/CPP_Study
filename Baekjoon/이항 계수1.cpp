// ÀÌÇ× °è¼ö
// (n) 
// (  ) =nCk = n!/k!(n-k)!
// (k)
/*
#include <iostream>

using namespace std;

long long bicoeff(int n, int r)
{
	if (n == r || r == 0) {
		return 1;
	}
	else {
		return bicoeff(n - 1, r - 1) + bicoeff(n - 1, r);
	}
}

int main()
{
	int N, K; 

	cin >> N >> K;

	cout << bicoeff(N, K) << endl;
	
	return 0;
}
*/
