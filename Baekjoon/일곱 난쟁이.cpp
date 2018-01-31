/*
//다 더해서 두개를 P을때 100이 되는 것 으로 바꾸면됨

#include<iostream>
#include<algorithm>
using namespace std;

#define N 9
#define MAX 100

//아홉 난쟁이 키 값의 합을 리턴하는 함수
int GetSum(const int *arr) {
	int sum = 0;
	for (int i = 0; i<N; i++) {
		sum += arr[i];
	}
	return sum;
}

//아홉 난쟁이 키 값에서 두명의 난쟁이의 키를 A 합이 100인 것을 판별
int Solution(int *arr) {
	int sum = GetSum(arr);

	for (int i = 0; i<N - 1; i++) {
		for (int j = i + 1; j<N; j++) {
			if (sum - (arr[i] + arr[j]) == MAX) {
				arr[i] = -1;
				arr[j] = -1;
				return 0;
			}
		}
	}

	return -1;
}

int main(void) {

	//입력
	int arr[N];
	for (int i = 0; i<N; i++) {
		cin >> arr[i];
	}


	Solution(arr);  //알고리즘

	sort(arr, arr + N); //오름차순으로 정렬

	//출력
	for (int i = 2; i<N; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}
*/
// 실패
/*
#include <iostream>
#include <algorithm>	// sort()

using namespace std;

#define N 10

int main()
{
	int p1 = -1, p2 = -1, height[N], tot = 0, sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> height[i];
	}

	sort(height, height + 9);		// 오름차순 정렬

	for (int i = 0; i < 9; i++) {
		tot += height[i];
	}

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; i < 9; i++) {
			if ((tot - height[i] + height[j]) == 100) {
				p1 = i;
				p2 = j;
				break;
			}
		}
		if ((p1 >= 0) && (p2 >= 0)) {
			break;
		}
	}

	for (int i = 0; i < 9; i++) {
		if ((i != p1) && (i != p2)) {
			cout << height[i] << endl;
		}
	}

	return 0;
}
*/
