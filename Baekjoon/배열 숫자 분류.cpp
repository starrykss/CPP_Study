
/*
#include <iostream>
#define NUM 10

using namespace std;

int main()
{
	int tmp, mark = 0, count = 1;
	int ary[NUM];
	int a[NUM], b[NUM];

	cout << "Input " << NUM << " Numbers : ";
	for (int i = 0; i < NUM; i++) {
		cin >> ary[i];
	}

	// 1. 배열 정렬 (Sorting Array) 
	for (int i = 0; i < NUM - 1; i++) {
		for (int j = i + 1; j < NUM; j++) {
			if (ary[j] < ary[i]) {     // 오름차순 정렬 (Sorting with Increasing Order)
				tmp = ary[j];
				ary[j] = ary[i];
				ary[i] = tmp;
			}
		}
	}


	// 2. 숫자 분류 & 개수 파악 (Classification of the Numbers in Array & Grasping the Number of each Number in Array) 
	a[0] = ary[0];

	for (int i =1; i < NUM; i++) {
		if (ary[i - 1] != ary[i]) {
			a[count] = ary[i];
			b[count - 1] = i - mark;
			mark = i;
			count++;
		}
	}   // end of for

	b[count - 1] = NUM - mark;

	// 결과 출력 (Printing Out the Result) 
	cout << endl << "[RESULTS]" << endl << endl;
	cout << "mark : " << mark << endl;
	cout << "N : ";
	for (int i = 0; i < count; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "# : ";
	for (int i = 0; i < count; i++) {
		cout << b[i] << " ";
	}
	cout << endl;

	return 0;
}
*/
