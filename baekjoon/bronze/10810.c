#include <stdio.h>

int main(void)
{
	char	word[100];
	int		len = 0;
	scanf("%s", word);
	while (word[len] != '\0')
		++len;
	printf("%d\n", len);
	return (0);
}
