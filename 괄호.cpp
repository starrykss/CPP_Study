/*
#include <iostream>
#include <cstring>	// strlen()
#include <vector>

#define N 51

using namespace std;

void check_matching(char *ary) 
{
	int len, cnt = 0;
	vector <char> v;
	len = strlen(ary);

	for (int i = 0; i < len; i++) {
		v.push_back(ary[i]);
	}
	for (int i = 0; i < len; i++) {
		if (v[i] == '(') {	// "(" 문자가 나올 때
			cnt++;
		}
		else if ((v[i] == ')') && (cnt > 0)) {		// ")" 문자가 나오기 전에 "(" 문자의 수가 많을 때!
			cnt--;
		}
		else if ((v[i] == ')') && (cnt <= 0)) {	// ")" 문자가 나오기 전에 "(" 문자의 수 보다 ")" 문자의 수가 많을 때!
			cnt--;
			break;		// "(" 문자나 ")" 문자에 관계없이 조건을 성립하지 않으므로 검사할 필요가 없음.
		}
	}

	if (cnt == 0) {
		cout << "YES" << endl;
		v.erase(v.begin(), v.end());

	}
	else {
		cout << "NO" << endl;
		v.erase(v.begin(), v.end());
	}
}

int main()
{
	int n;
	char ary[N] = " ";

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ary;
		check_matching(ary);
	}

	return 0;
}
*/
// 참고 사이트 : http://jwprogramming.tistory.com/137