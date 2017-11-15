/*
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
int n, k;
struct p {
	int num;
	int age;
	string name;
};
vector<p> table;
bool cmp(const p &u, const p &v)
{
	if (u.age < v.age)
		return true;
	else if (u.age == v.age)
	{
		if (u.num < v.num)
			return true;
		else
			return false;
	}
	else
		return false;
}
int main()
{
	scanf("%d", &n);
	table.resize(n);
	for (int i = 0; i < n; i++)
	{
		int _age;
		string _name = "";
		cin >> _age >> _name;
		table[i].age = _age;
		table[i].name = _name;
		table[i].num = i;
	}
	sort(table.begin(), table.end(), cmp);
	for (int i = 0; i < n; i++)
	{
		cout << table[i].age << " " << table[i].name << '\n';
	}
}
*/

// 시간 초과
/*
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
struct User {
	int age;
	string name;
};
bool cmp(const User & u, const User &v) {
	return u.age < v.age;
}
int main() {
	int num;
	cin >> num;
	vector<User> a(num);
	for (int i = 0; i < num; i++) {
		cin >> a[i].age >> a[i].name;
	}
	stable_sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < num; i++) {
		cout << a[i].age << ' ' << a[i].name << endl;
	}
	return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include <string>		// string을 cin으로 받기 위해 필요함.
#include <algorithm>	// sort()

using namespace std;

int main()
{
	vector<pair<int, string>> input;
	vector<pair<int, string>>::iterator iter;

	int n, age;
	string name;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> age;
		cin >> name;
		input.push_back(pair<int, string>(age, name));
	}
	
	// sort(input.begin(), input.end());
	
	for (iter = input.begin(); iter != input.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}

	return 0;
}
*/

// Bubble Sort : unstable sort
/*	
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (input[j].first < input[i].first) {
				int tmp = input[j].first;
				string temp = input[j].second;
				input[j].first = input[i].first;
				input[j].second = input[i].second;
				input[i].first = tmp;
				input[i].second = temp;
			}
		}
	}
	*/

// 시간 초과
/*
#include <iostream>

#define N 100
#define S 100000

using namespace std;

typedef struct person
{
	int age;
	char name[N];
} person;

int main()
{
	int n;
	person P[100000];
	person tmp;		// 정렬할 때 옮길 값 저장해 줄 구조체 선언.

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> P[i].age >> P[i].name;
	}

	// 구조체 내용 오름차순 정렬
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (P[j].age > P[j + 1].age) {		// 오름차순 정렬
				tmp = P[j];
				P[j] = P[j + 1];
				P[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << P[i].age << " " << P[i].name << endl;
	}

	return 0;
}
*/