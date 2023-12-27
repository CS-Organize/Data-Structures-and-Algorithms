#include <iostream>
#include <algorithm>
using namespace std;

const int	N = 10;
int			arr[N] = {5, -2, 1, 2, 3, 11, -3, 4, 133, -1};
int			tmp[N];

// arr[start:end](arr[start] ~ arr[end - 1])를 정렬하는 함수 
void	merge(int start, int end)
{
	int	mid = (start + end) / 2;
	int	lidx = start;
	int	ridx = mid;

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
	if (start + 1 == end) return ; // base condition:배열의 사이즈가 1개일 경우
	int	mid = (start + end) / 2;
	merge_sort(start, mid); //
	merge_sort(mid, end); //
	merge(start, end);
}

int	main(void)
{
	merge_sort(0, N);
	for (int i = 0; i < N; i++)
		cout << arr[i] << ' ';		
	return 0;
}
