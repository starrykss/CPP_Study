/*
#include <iostream>
#include <cstring>	// strlen()

#define N 252	// 줄바꿈 문자를 생각해서 길이를 정해줘야 함.

using namespace std;

int main()
{
	int len, sum = 0, cnt = 0, isChecked = 0;
	char ary[N];

	while (1) {
		cin.getline(ary, N);
		len = strlen(ary);

		if (ary[0] == '#') {
			return 0;
		}
		
		for (int i = 65; i <= 90; i++) {
			for (int j = 0; j < len; j++) {
				if ((ary[j] == i) || (ary[j] == i + 32)) {
					if (isChecked == 0) {
						cnt++;
						isChecked = 1;
					}
				}
			}
			isChecked = 0;
			sum += cnt;
			cnt = 0;
		}
		cout << sum << endl;
		sum = 0;
	}

	return 0;
}
*/
