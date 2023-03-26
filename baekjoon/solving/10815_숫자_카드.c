#include <stdio.h>

int main(void)
{
	int	n, m, hash[20000000];
	scanf("%d", &n);
	int	arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n; i++)
		++hash[arr[i] - 10000000];

	scanf("%d", &m);
	int answer[m];
	for (int i = 0; i < m; i++)
		scanf("%d", &answer[i]);
	for (int i = 0; i < m; i++)
	{
		if (hash[arr[i] - 10000000])
			printf("1 ");
		else
			printf("0 ");
	}
	if (-1 == remove( "a.out") && -1 == remove("tempCodeRunnerFile.c"))
		printf( "File removal failed\n");
	return (0);
}
