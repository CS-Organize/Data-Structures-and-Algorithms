#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int arr[100001];
	int n; cin >> n;

	f(i, n) cin >> arr[i];
	sort(arr, arr + n);
	// f(i, n) cout << arr[i] << ' ';
	int m; cin >> m;
	f(i, m)
	{
		int num; cin >> num;

		// arr의 index l,r,m
		int left = 0;
		int right = n - 1;
		int mid;
		bool flag = 0;

		while (left <= right)
		{
			mid = (left + right) / 2;

			if (arr[mid] > num)
				right = mid - 1;
			else if (arr[mid] == num)
			{
				flag = 1;
				break;
			}
			else
				left = mid + 1;
		}
		if (flag) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}

/*
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초	128 MB	234486	71624	47606	29.816%

문제
N개의 정수 A[1], A[2], …, A[N]이 주어져 있을 때, 이 안에 X라는 정수가 존재하는지 알아내는 프로그램을 작성하시오.

입력
첫째 줄에 자연수 N(1 ≤ N ≤ 100,000)이 주어진다. 다음 줄에는 N개의 정수 A[1], A[2], …, A[N]이 주어진다.
다음 줄에는 M(1 ≤ M ≤ 100,000)이 주어진다. 다음 줄에는 M개의 수들이 주어지는데, 이 수들이 A안에 존재하는지 알아내면 된다.
모든 정수의 범위는 -231 보다 크거나 같고 231보다 작다.

출력
M개의 줄에 답을 출력한다. 존재하면 1을, 존재하지 않으면 0을 출력한다.

예제 입력 1
5
4 1 5 2 3
5
1 3 7 9 5
예제 출력 1
1
1
0
0
1
*/
