/*
#include <iostream>
#include <algorithm>	// sort()

using namespace std;

int main()
{
	int num[3];

	while (1) {
		cin >> num[0] >> num[1] >> num[2];
		if ((num[0] != 0) && (num[1] != 0) && (num[2] != 0)) {
			sort(num, num + 3);
			if ((num[2] * num[2]) == (num[0] * num[0]) + (num[1] * num[1])) cout << "right" << endl;
			else cout << "wrong" << endl;
		}
		else {
			break;
		}
	}

	return 0;
}
*/