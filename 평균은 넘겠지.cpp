/*
#include <iostream>

#define LIMITS 1000

using namespace std;

int main()
{
	int ntc;
	double count = 0, n = 0, sum = 0, score[LIMITS][LIMITS], avg[LIMITS], result[LIMITS];

	cin >> ntc;

	for (int i = 0; i < ntc; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> score[i][j];
		}
		for (int k = 0; k < n; k++) {
			sum += score[i][k];
		}

		avg[i] = sum / n;

		for (int l = 0; l < n; l++) {
			if (avg[i] < score[i][l]) {
				count++;
			}
		}

		result[i] = (count / n) * 100;

		sum = 0;
		count = 0;
	}

	for (int i = 0; i < ntc; i++) {
		// cout.precision(5);
		printf("%.3lf%% \n", result[i]);
		// cout << result[i] << "%" << endl;
	}

	return 0;
}
*/