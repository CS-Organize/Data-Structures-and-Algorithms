#include <stdio.h>

int main(void)
{
	char	word[100];
	int		len = 0;

	scanf("%s", word);
	while (word[len] != '\0')
		++len;
	for (int i = 0; i < len / 2; i++)
	{
		if (word[i] != word[len -1 -i])
		{
			printf("0\n");
			return (0);
		}
	}
	printf("1\n");
	return (0);
}
