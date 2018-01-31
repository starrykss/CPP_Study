/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	char arr[15][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 15; j++) {
			arr[j][i] = '\0';
		}
	}

	for (int i = 0; i < 5; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			arr[j][i] = s[j];
		}
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] == '\0') {

			}
			else {
				cout << arr[i][j];
			}
		}
	}
}
*/
/*
#include <iostream>

using namespace std;

int main()
{
	char ary1[15] = " ";
	char ary2[15] = " ";
	char ary3[15] = " ";
	char ary4[15] = " ";
	char ary5[15] = " ";

	cout << endl;

	cin >> ary1 >> ary2 >> ary3 >> ary4 >> ary5;

	for (int i = 0; i < 15; i++) {
		if (ary1[i] != NULL) {
			cout << ary1[i];
		}
		if (ary2[i] != NULL) {
			cout << ary2[i];
		}
		if (ary3[i] != NULL) {
			cout << ary3[i];
		}
		if (ary4[i] != NULL) {
			cout << ary4[i];
		}
		if (ary5[i] != NULL) {
			cout << ary5[i];
		}
	}
	cout << endl;

	return 0;
}
*/
