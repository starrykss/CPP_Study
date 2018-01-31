/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n, num;
	string state;
	vector <int> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> state;

		if (state == "push") {
			cin >> num;
			v.push_back(num);
		}
		else if (state == "pop") {
			if (v.empty() == 1) {
				cout << "-1" << endl;
				continue;
			}
			else {
				cout << v.back() << endl;
				v.pop_back();
			}
		}
		else if (state == "size") {
			cout << v.size() << endl;
		}
		else if (state == "empty") {
			cout << v.empty() << endl;
		}
		else if (state == "top") {
			if (v.empty() == 1) {
				cout << "-1" << endl;
				continue;
			}
			else {
				cout << v.back() << endl;
			}
		}
	}

	return 0;
}
*/
