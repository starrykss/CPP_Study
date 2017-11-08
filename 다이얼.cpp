/*
#include <iostream>
#include <string.h>	// strlen()

#define N 15

using namespace std;

int main()
{
	char ary1[3] = { 'A', 'B', 'C' };		// +3
	char ary2[3] = { 'D', 'E', 'F' };			// +4
	char ary3[3] = { 'G', 'H', 'I' };			// +5
	char ary4[3] = { 'J', 'K', 'L' };			// +6
	char ary5[3] = { 'M', 'N', 'O' };		// +7
	char ary6[4] = { 'P', 'Q', 'R', 'S' };	// +8
	char ary7[3] = { 'T', 'U', 'V' };		// +9
	char ary8[4] = { 'W', 'X', 'Y', 'Z' };	// +10

	char input[N];
	int len, cnt = 0;

	cin >> input;
	
	len = strlen(input);

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 3; j++) {
			if (input[i] == ary1[j]) {
				cnt += 3;
			}
			else if (input[i] == ary2[j]) {
				cnt += 4;
			}
			else if (input[i] == ary3[j]) {
				cnt += 5;
			}
			else if (input[i] == ary4[j]) {
				cnt += 6;
			}
			else if (input[i] == ary5[j]) {
				cnt += 7;
			}
			else if (input[i] == ary7[j]) {
				cnt += 9;
			}
		}

		for (int j = 0; j < 4; j++) {
			if (input[i] == ary6[j]) {
				cnt += 8;
			}
			else if (input[i] == ary8[j]) {
				cnt += 10;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}
*/