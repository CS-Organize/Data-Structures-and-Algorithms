#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

const int N = 10;
const int d = 3; // 자리수의 최댓값
int arr[N] = {5, 44, 1, 2, 3, 11, 33, 4, 133, 99};
int p10[d]; // 10의 지수를 저장할 배열

vector<int> l[10]; // 0 ~ 9번 리스트

// x에서 10^a 자리를 추출하는 함수
int	digitNum(int x, int a)
{
	return (x / p10[a]) % 10;
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	p10[0] = 1;
	// 정수형의 거듭제곱은 오차 발생 가능성이 있는 실수 반환 함수 pow를 사용하지 않아야함
	for (int i = 1; i < d; i++) p10[i] = p10[i - 1] * 10; 
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < 10; j++) l[j].clear();
		for (int j = 0; j < N; j++)
			l[digitNum(arr[j], i)].push_back(arr[j]);
		int aidx = 0;
		for (int j = 0; j < 10; j++)
			for (auto x : l[j]) arr[aidx++] = x;
	}
	for (int i = 0; i < N; i++) cout << arr[i] << ' ';
	return 0;
}
