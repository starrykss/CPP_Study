/*
#include <iostream>
#include <string.h>	// strlen()

#define N 101

using namespace std;

int main()
{
	char input[N];
	int len;

	cin >> input;

	len = strlen(input);
	
	for (int i = 0; i < len; i++) {
		if (input[i] >= 97) {	// 소문자이면
			input[i] = input[i] - 32;	// 대문자로 변환
		}
		else {		// 대문자이면
			input[i] = input[i] + 32;	// 소문자로 변환
		}
	}

	for (int i = 0; i < len; i++) {
		cout << input[i];
	}
	
	cout << endl;

	return 0;
}
*/