/*
#include <iostream>
#include <string.h>	// strlen()

#define N 100

using namespace std;

int main()
{
	char ary[N];
	int len, check = -1, flag = 0;
	
	cin >> ary;

	len = strlen(ary);

	for (char i = 'a'; i <= 'z'; i++) {		
		for (int j = 0; j < len; j++) {
			if (ary[j] == i) {	
				if (flag == 0) {
					check = j;
					flag++;
				}
			}
		}
		cout << check << " ";
		flag = 0;
		check = -1;
	}
	cout << endl;

	return 0;
}
*/
