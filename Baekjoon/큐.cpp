/*
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
	int n, num;
	string state;
	queue <int> q;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> state;

		if (state == "push") {
			cin >> num;
			q.push(num);
		}
		else if (state == "pop") {
			if (q.empty() == 1) {
				cout << "-1" << endl;
				continue;
			}
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (state == "size") {
			cout << q.size() << endl;
		}
		else if (state == "empty") {
			cout << q.empty() << endl;
		}
		else if (state == "front") {
			if (q.empty() == 1) {
				cout << "-1" << endl;
				continue;
			}
			else {
				cout << q.front() << endl;
			}
		}
		else if (state == "back") {
			if (q.empty() == 1) {
				cout << "-1" << endl;
				continue;
			}
			else {
				cout << q.back() << endl;
			}
		}
	}

	return 0;
}
*/
