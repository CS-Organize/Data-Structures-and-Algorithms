#include <stdio.h>

int main(void)
{
	int	n, sum, icpy;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum = 0;
		icpy = i;
		while (icpy != 0)
		{
			sum += icpy % 10;
			icpy /= 10;
		}
		if (i + sum == n)
		{
			printf("%d\n", i);
			return (0);
		}
	}
	printf("0\n");
	return (0);
}
