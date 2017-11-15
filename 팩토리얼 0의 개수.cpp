// N = [0,500]
// 팩토리얼을 구할 수가 없다.
// 팩토리얼 값의 0의 개수는 결국 2*5 의 수에 의해 결정된다.
// 2는 짝수마다 나타나므로 넘친다.
// 결국 이 문제는 1부터 N까지 범위에서 5의 배수의 수를 찾는 문제로 바뀐다.
// 그리고 그 답은 N을 5로 나눈 정수가 답이다.

/*
#include <iostream>

using namespace std;

int main()
{
	int n, count = 0;
	
	cin >> n;
	
	if (n == 0) { 
		cout << "1"; 
	}
	else {
		count += n / 5;
		count += n / 25;
		count += n / 125;
		cout << count << endl;
	}
	return 0;
}
*/
/*
#include <iostream>

using namespace std;

int main()
{
	int cnt = 0, n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 125 == 0) cnt += 3;
		else if (i % 25 == 0) cnt += 2;
		else if (i % 5 == 0) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
*/