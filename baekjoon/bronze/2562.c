#include <stdio.h>

int main(void)
{
	int numbers[9];
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &numbers[i]);
	}
	int max = 0;
	int idx;
	for (int j = 0; j < 9; j++)
	{
		if (numbers[j] > max)
		{
			max = numbers[j];
			idx = j + 1;
		}
	}
	printf("%d\n%d\n", max, idx);
	return 0;
}
