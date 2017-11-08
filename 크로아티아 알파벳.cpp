/*
#include <iostream>
#include <string.h>	// strlen()

#define N 100

using namespace std;

int main()
{
	// 'c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z='

	char input[100];
	int len, cnt = 0;

	cin >> input;

	len = strlen(input);

	for (int i = 0; i < len; i++) {
		if ((input[i] == 'c') && (input[i + 1] == '=')) {
			cnt++;
			i += 1;
		}
		else if ((input[i] == 'c') && (input[i + 1] == '-')) {
			cnt++;
			i += 1;
		}
		else if ((input[i] == 'd') && (input[i + 1] == 'z') && (input[i + 2] == '=')) {
			cnt++;
			i += 2;
		}
		else if ((input[i] == 'd') && (input[i + 1] == '-')) {
			cnt++;
			i += 1;
		}
		else if ((input[i] == 'l') && (input[i + 1] == 'j')) {
			cnt++;
			i += 1;
		}
		else if ((input[i] == 'n') && (input[i + 1] == 'j')) {
			cnt++;
			i += 1;
		}
		else if ((input[i] == 's') && (input[i + 1] == '=')) {
			cnt++;
			i += 1;
		}
		else if ((input[i] == 'z') && (input[i + 1] == '=')) {
			cnt++;
			i += 1;
		}
		else {
			cnt++;
		}
	}
	
	cout << cnt << endl;

	return 0;
}
*/