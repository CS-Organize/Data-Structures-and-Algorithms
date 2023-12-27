#include <iostream>
#include <algorithm>
using namespace std;

const int	N = 10;
int			arr[N] = {5, -2, 1, 2, 3, 11, -3, 4, 133, -1};

int	main(void)
{
	for (int i = 0; i < N; i++)
		for (int j = i + 1; j < N; j++)
			if (arr[i] > arr[j])
				swap(arr[i], arr[j]);
	for (int i = 0; i < N; i++)
		cout << arr[i] << ' ';		
	return 0;
}
