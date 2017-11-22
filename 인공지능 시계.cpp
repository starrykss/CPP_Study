/*
#include <iostream>

using namespace std;

int main() {
	int hour, minute, second, time;
	cin >> hour >> minute >> second >> time;

	second += time;
	minute += second / 60;
	hour += minute / 60;

	cout << hour % 24 << " " << minute % 60 << " " << second % 60;
}
*/

// Æ²¸²
/*
#include <iostream>
#include <cmath>		// pow()

using namespace std;

int main()
{
	int A, B, C, D, hr, min, sec;

	cin >> A >> B >> C >> D;

	hr = D / pow(60, 3);
	min = (D - (hr * pow(60, 3))) / pow(60, 2);
	sec = (D - ((hr * pow(60, 3)) + (min * pow(60, 2))));

	A += hr;
	B += min;
	C += sec;

	if (C >= 60) {
		B += (C / 60);
		C = C - 60 * (C / 60);
	}
	if (B >= 60) {
		A += (B / 60);
		B = B - 60 * (B / 60);
	}
	if (A >= 24) {
		A = A - 24 * (A / 24);
	}

	cout << A << " " << B << " " << C << endl;

	return 0;
}
*/