#include <stdio.h>

int main(void)
{
	int	a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a | b);
	remove("a.out");
	remove("tempCodeRunnerFile.c");
	return (0);
}
