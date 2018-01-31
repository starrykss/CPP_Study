/*
#include <iostream>
#include <string.h>	// strlen()

#define N 20

using namespace std;

int main()
{
	int num, cnt, len;
	char ary[N];

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> cnt >> ary;
		len = strlen(ary);
		for (int j = 0; j < len; j++) {
			for (int k = 0; k < cnt; k++) {
				cout << ary[j];
			}
		}
		cout << endl;
	}
	return 0;
}
*/
/*
#include <iostream>
#include <string.h>	// strlen()

#define N 1000
#define L 20
#define C 18

using namespace std;

int main()
{
	int num, cnt[C], flag = 0;
	char ary[N][L];

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> cnt[i] >> ary[i];
	}

	// 예외 처리 (입력된 문장에 소문자 알파벳이 들어있을 경우 프로그램 종료)
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < strlen(ary[i]); j++) {
			if ((ary[i][j] >= 'a') && (ary[i][j] <= 'z')) return 0;
		}
	}

	for (int i = 0; i < num; i++) {
		while (1) {
			for (int j = 0; j < cnt[i]; j++) {	// cnt 만큼 반복
				cout << ary[i][flag];
			}
			flag++;
			if (flag == strlen(ary[i])) break;
		}
		cout << endl;
		flag = 0;
	}

	return 0;
}
*/
