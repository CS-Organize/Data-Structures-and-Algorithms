#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int n;
int arr[1001];
int tmp[1001];

void	merge(int start, int end)
{
	int mid = (start + end) / 2;
	int lidx = start;
	int ridx = mid;

	for (int i = start; i < end; i++)
	{
		if (ridx == end) tmp[i] = arr[lidx++];
		else if (lidx == mid) tmp[i] = arr[ridx++];
		else if (arr[lidx] <= arr[ridx]) tmp[i] = arr[lidx++];
		else tmp[i] = arr[ridx++];
	}
	for (int i = start; i < end; i++) arr[i] = tmp[i];
}

void	merge_sort(int start, int end)
{
	if (start + 1 == end) return ; // base condition: 배열의 사이즈가 1개일 경우
	int mid = (start + end) / 2;
	merge_sort(start, mid);
	merge_sort(mid, end);
	merge(start, end);
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	cin >> n;

	f(i, n) cin >> arr[i];
	merge_sort(0, n);

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int prevSum = 0;
		for (int j = 0; j < i; j++)
			prevSum += arr[j];
		sum += arr[i] + prevSum;
		// sum += (n - i) * arr[i]
	}
	cout << sum << '\n';
	return 0;
}
