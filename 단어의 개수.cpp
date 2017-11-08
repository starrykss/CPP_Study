/*
#include <iostream>
#include <string.h>		// strlen()

#define N 1000000

using namespace std;

int main()
{
	char sen[N];
	int len = 0, flag = 0;

	cin.getline(sen, N);	// 공백을 포함한 문장의 입력 받기.
	len = strlen(sen);

	if (sen[0] != ' ') flag++;	// 처음 부분에 공백이 없을 경우 
	for (int i = 1; i < len; i++) {
		if ((sen[i] != ' ') && (sen[i - 1] == ' ')) flag++;	// '_(단어)'인 경우
	}

	cout << flag << endl;
	return 0;
}
*/