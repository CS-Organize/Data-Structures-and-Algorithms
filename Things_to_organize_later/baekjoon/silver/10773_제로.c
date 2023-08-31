#include <stdio.h>

int	stack[100000];
int	top = -1;

void	push(int x)
{
	stack[++top] = x;
}

void	pop()
{
	if (top < 0)
		return ;
	else
		--top;
}

int	main(void)
{
	int k, x, sum = 0;
	scanf("%d", &k);

	for (int i = 0; i < k; i++)
	{
		scanf("%d", &x);
		if (x == 0)
			pop();
		else
			push(x);
	}
	for (int i = 0; i <= top; i++)
		sum += stack[i];
	printf("%d\n", sum);
	return (0);
}
