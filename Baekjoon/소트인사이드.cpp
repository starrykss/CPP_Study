/*
#include <iostream>
#include <string.h>	// strlen()

using namespace std;

int main()
{
	char num[13] = " ";		// 1,000,000,000 ÀÌÇÏÀÎ ¼ö
	int len;

	cin >> num;

	len = strlen(num);

	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (num[i] < num[j]) {     // ³»¸²Â÷¼ø Á¤·Ä
				int tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}

	cout << num << endl;

	return 0;
}
*/
