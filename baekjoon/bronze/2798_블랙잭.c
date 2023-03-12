#include <stdio.h>

int main(void)
{
	int	n, m, is_close = 300000;
	scanf("%d %d", &n, &m);
	int	arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (arr[i] + arr[j] + arr[k] <= m && is_close > m - (arr[i] + arr[j] + arr[k]))
					is_close = m - (arr[i] + arr[j] + arr[k]);
			}
		}
	}
	printf("%d\n", m - is_close);
	return (0);
}
