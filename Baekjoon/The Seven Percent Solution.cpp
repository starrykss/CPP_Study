/*
#include <iostream>
#include <cstring>
#define N 80

using namespace std;

int main()
{
	char input[N];
	int len;

	while (1) {
		cin.getline(input, N);
		len = strlen(input);

		if (input[0] == '#') {
			return 0;
		}

		for (int i = 0; i < len; i++) {
			if (input[i] == ' ') cout << "%20";
			else if (input[i] == '!') cout << "%21";
			else if (input[i] == '$') cout << "%24";
			else if (input[i] == '%') cout << "%25";
			else if (input[i] == '(') cout << "%28";
			else if (input[i] == ')') cout << "%29";
			else if (input[i] == '*') cout << "%2a";
			else cout << input[i];
		}
		cout << endl;
	}

	return 0;
}
*/
