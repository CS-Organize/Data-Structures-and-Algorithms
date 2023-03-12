#include <stdio.h>

int main(void)
{
	int		n;
	int		cnt = 0;
	char	word[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int	ascii[128] = { 0 };
		scanf("%s", word);
		for (int j = 0; word[j + 1] != '\0' ; j++)
		{
			++ascii[(int) word[j]];
			if (ascii[(int) word[j]] != ascii[(int) word[j + 1]] && ascii[(int) word[j + 1]] > 0)
			{
				--cnt;
				break;
			}
		}
		++cnt;
	}
	printf("%d\n", cnt);
	return (0);
}
