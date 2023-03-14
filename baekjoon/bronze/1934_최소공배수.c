#include <stdio.h>

int gcd(int a, int b)
{
	int tmp;
	if (b > a)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	while (b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return (a);
}

int main(void)
{
	int	t, a, b;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a * b / gcd(a, b));
	}
	return (0);
}
