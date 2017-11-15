/*
#include <iostream>
#include <algorithm>	// sort()

using namespace std;

int main()
{
	int num[3];

	while (1) {
		cin >> num[0] >> num[1] >> num[2];
		sort(num, num + 3);

		if ((num[0] != 0) && (num[1] != 0) && (num[2] != 0)) {
			if (num[2] >= num[0] + num[1]) {		// 삼각형 성립 조건 : 가장 큰 변의 길이 <= 다른 두 변의 길이의 합
				cout << "Invalid" << endl;
			}
			else {
				if ((num[0] == num[1]) && (num[1] == num[2]) && (num[0] == num[2])) {
					cout << "Equilateral" << endl;
				}
				else if ((num[0] == num[1]) || (num[1] == num[2])) {
					cout << "Isosceles" << endl;
				}
				else {
					cout << "Scalene" << endl;
				}
			}
		}
		else {
			break;
		}
	}
	

	return 0;
}
*/