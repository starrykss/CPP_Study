/*
#include <iostream>
#include <string.h>	// strlen()

#define N 1000000

using namespace std;

int main()
{
	int len, max = 0, flag = 0, isStrange = 0;
	char ary[N], C;

	cin >> ary;
	len = strlen(ary);

	for (char j = 'A'; j <= 'z'; j++) {
		for (int i = 0; i < len; i++) {
			if (ary[i] == j) flag++;
		}
		if (max < flag) {
			max = flag;
			C = j;
			isStrange = 0;
		}
		else if (max == flag) isStrange = 1;
		flag = 0;
	}
	if (isStrange == 0) {
		if ((C >= 'a') && (C <= 'z')) cout << char(C - 32) << endl;
		else cout << C << endl;
	}
	else cout << "?" << endl;
	
	return 0;
}
*/