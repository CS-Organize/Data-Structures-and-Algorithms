#include <stdio.h>

int main(void)
{
	int		t;
	int		len;
	char	c[1000];
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%s", c);
		len = 0;
		while (c[len] != '\0')
			++len;
		printf("%c", c[0]);
		printf("%c\n", c[len - 1]);
	}

	return (0);
}
