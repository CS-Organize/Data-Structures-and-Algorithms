#include <stdio.h>

int main(void)
{
	char	answer[1001];
	int		i;
	scanf("%s\n%d", answer, &i);
	printf("%c\n", answer[i - 1]);
	return (0);
}
