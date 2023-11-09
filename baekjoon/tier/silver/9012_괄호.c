#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	t, top, i, j;
	char	ps[51];

	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		bzero(ps, 51);
		scanf("%s", ps);
		top = -1;
		for (j = 0; j < strlen(ps); j++)
		{
			if (ps[j] == '(')
				++top;
			else if (ps[j] == ')')
				if (top-- == -1)
					break;
		}
		if (strlen(ps) == j && top == -1)
				printf("YES\n");
		else
			printf("NO\n");
	}
	return (0);
}
