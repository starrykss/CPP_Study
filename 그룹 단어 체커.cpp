/*
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int n;
	string str;
	scanf("%d", &n);

	int cnt = 0, ret = 0;

	for (int i = 0; i<n; i++) {
		cin >> str;
		int len = str.length();
		cnt = 0;
		for (int j = 1; j<len; j++) {
			//현재글자와 이전글자가 다를 때 
			if (str[j] != str[j - 1]) {
				//현재글자와 같은 것이 이전에도 있었으면 cnt증가 
				for (int k = 0; k<j - 1; k++) {
					if (str[j] == str[k]) {
						cnt++;
					}
				}
			}
		}
		//cnt가 0이라면 그룹 단어 
		if (cnt == 0) {
			ret++;
		}
	}

	printf("%d", ret);
}
*/