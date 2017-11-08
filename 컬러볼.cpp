/*
#include <iostream>
#include <stdlib.h>	// malloc()

#define MAX 200000

using namespace std;

int main()
{
	int num, ball[MAX][2], *sum;
	
	cin >> num;

	sum = (int *)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		sum[i] = 0;
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> ball[i][j];
		}
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (i == j) {
				continue;
			}
			else {
				if ((ball[i][0] != ball[j][0]) && (ball[i][1] > ball[j][1])) {
					sum[i] += ball[j][1];
				}
			}
		}
	}

	for (int i = 0; i < num; i++) {
		cout << sum[i] << endl;
	}

	free(sum);

	return 0;
}
*/
/*
#include <stdio.h>

typedef struct
{
	int color;
	int size;
	int origin_index;
}BALL;

int N;
BALL ball[200002];
int color[200002];
int result[200002];

void qsort(int left, int right)
{
	int l = left, r = right, pivot = left;
	BALL temp;

	if (left < right)
	{
		while (l < r)
		{
			while ((ball[l].size <= ball[pivot].size) && (l < right)) l++;
			while (ball[pivot].size < ball[r].size) r--;
			if (l < r)
			{
				temp = ball[r];
				ball[r] = ball[l];
				ball[l] = temp;
			}
		}
		temp = ball[r];
		ball[r] = ball[pivot];
		ball[pivot] = temp;
		qsort(left, r - 1);
		qsort(r + 1, right);
	}
}

int main()
{
	int i, j = 0, subsum = 0;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d %d", &ball[i].color, &ball[i].size);
		ball[i].origin_index = i;
	}

	qsort(0, N - 1);

	for (i = 0; i < N; i++)
	{
		for (; ball[j].size < ball[i].size; j++)
		{
			subsum += ball[j].size;
			color[ball[j].color] += ball[j].size;
		}
		result[ball[i].origin_index] = subsum - color[ball[i].color];
	}

	for (i = 0; i < N; i++) printf("%d\n", result[i]);

	return 0;
}
*/