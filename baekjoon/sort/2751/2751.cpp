#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int tmp[1000001];

void	merge(int start, int end, int arr[])
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

void	merge_sort(int start, int end, int arr[])
{
	if (start + 1 == end) return ;
	int mid = (start + end) / 2;
	merge_sort(start, mid, arr);
	merge_sort(mid, end, arr);
	merge(start, end, arr);
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;
	int arr[n];

	f(i, n) cin >> arr[i];
	merge_sort(0, n, arr);
	f(i, n) cout << arr[i] << '\n';
	return 0;
}
