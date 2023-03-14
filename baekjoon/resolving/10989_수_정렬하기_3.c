#include <stdio.h>

int main(void)
{
	int n, max, tmp, idx;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n; i++)
	{
		max = 0;
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] > max)
			{
				max = arr[j];
				idx = j;
			}
		}
		tmp = arr[n - i - 1];
		arr[n - i - 1] = arr[idx];
		arr[idx] = tmp;
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
	if (-1 == remove( "a.out") && -1 == remove("tempCodeRunnerFile.c"))
		printf( "File removal failed\n");
	return (0);
}
