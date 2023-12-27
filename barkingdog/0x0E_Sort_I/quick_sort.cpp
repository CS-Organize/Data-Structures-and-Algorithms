#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

const int	N = 10;
int			arr[N] = {5, -2, 1, 2, 3, 11, -3, 4, 133, -1};

void	quick_sort(int start, int end)
{
	if (start + 1 >= end) return ;
	int pivot = arr[start];
	int l = start + 1;
	int r = end - 1;
	while (true)
	{
		while (l <= r && arr[l] <= pivot) l++;
		while (l <= r && arr[r] >= pivot) r--;
		if (l > r) break;
		swap(arr[l], arr[r]);
	}
	swap(arr[start], arr[r]);
	quick_sort(start, r);
	quick_sort(r + 1, end);
}

int	main(void)
{
	quick_sort(0, N);
	f(i, N) cout << arr[i] << ' ';
	return 0;
}
