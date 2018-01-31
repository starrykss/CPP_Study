/*
#include <iostream>
#include <string.h>	// strcpy()

#define N 80

using namespace std;

int main()
{
	int num, sum = 0, cnt = 0, flag = 0;
	char ary[N][N];
	char tmp[N];

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> tmp;
		strcpy(ary[i], tmp);
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < N; j++) {
			if (ary[i][j] == 'O') {
				flag++;
				if ((ary[i][j] == 'O') && (ary[i][j + 1] != 'O')) {
					for (int k = 1; k <= flag; k++) {
						sum += k;
					}
					cnt = cnt + sum;
					flag = 0;
					sum = 0;
				}
			}
		}	// end of for
		cout << cnt << endl;
		cnt = 0;
	}

	return 0;
}
*/
/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int c;
	cin >> c;
	while (c--) {
		string str;
		cin >> str;
		int score = 0;
        // 연속되었던 O의 갯수를 count 한다
		int prev = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'O')
				score += ++prev;
			else
				prev = 0;
		}
		cout << score << endl;
	}
}
*/
