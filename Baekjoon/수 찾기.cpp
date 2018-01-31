// 분할 정복 이용
/*
#define _CRT_SECURE_NO_WARNINGS
 
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <queue>
#include <math.h>
 
using namespace std;
 
int arr[100005];
 
int main()
{
    int n;
    cin >> n;
 
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
 
    sort(arr, arr + n);
 
    int k;
    cin >> k;
 
    for (int i = 0; i < k; i++)
    {
        int t;
        scanf("%d", &t);
 
        //분할 정복?
        if (t < arr[0])
        {
            cout << 0 << endl;
            continue;
        }
        else if (t > arr[n - 1])
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            int s = 0;
            int e = n - 1;
            int mid = (s + e) / 2;
            bool flag = true;
 
            while ((0 <= s && s <= (n - 1)) && (0 <= e && e <= (n - 1)) && e >= s)
            {
                mid = (s + e) / 2;
 
                if (arr[mid] > t)
                {
                    e = mid - 1;
                }
                else if (arr[mid] < t)
                {
                    s = mid + 1;
                }
                else if(arr[mid] == t)
                {
                    flag = false;
                    printf("1\n");
                    break;
                }
            }
 
            if (flag)
                printf("0\n");
        }
    }
 
    return 0;
}
*/

// 이진 탐색
/*
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
	int n, m;
	scanf("%d", &n);
	vector<int> map(n);
	for (int i = 0; i < n; i++)
		scanf("%d", &map[i]);
	sort(map.begin(), map.end());
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int tmp;
		scanf("%d", &tmp);
		printf("%d\n", binary_search(map.begin(), map.end(), tmp));
	}
}
*/

// 시간 초과
/*
#include <iostream>
#include <vector>

#define N 100000

using namespace std;

int main()
{
	int n, m, cnt = 0, ary1[N], ary2[N];
	vector <int> result;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ary1[i];
	}
	
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> ary2[i];
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (ary1[j] == ary2[i]) {		// 일치하는 수가 있을 경우
				cnt++;	// cnt 1 증가
				result.push_back(1);	// 벡터에 1 삽입
				break;		// ary2 반복문 종료
			}
		}
		if (cnt == 0) {	// cnt가 0일 경우. -> 일치하는 수가 없을 경우
			result.push_back(0);	// 벡터에 0 삽입
		}
		cnt = 0;
	}
	for (unsigned i = 0; i < result.size(); i++) {
		cout << result[i] << endl;
	}

	return 0;
}
*/
