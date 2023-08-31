#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int	n, idx = 0, max;
	cin >> n;

	char str[n][51], *sort_str[n], *tmp;

	for (int i = 0; i < n; i++)
		cin >> str[i];

	for (int i = 1; i <= 50; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (strlen(str[j]) == (size_t) i)
			{
				sort_str[idx++] = str[j];
				max = strlen(str[j]);
			}
		}
	}

	for (int i = 1; i <= max; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (strlen(sort_str[j]) == (size_t) i && strlen(sort_str[k]) == (size_t) i)
				{
					if (strcmp(sort_str[j], sort_str[k]) == 0)
						sort_str[k][0] = '\0';
					else if (strcmp(sort_str[j], sort_str[k]) > 0)
					{
						tmp = sort_str[j];
						sort_str[j] = sort_str[k];
						sort_str[k] = tmp;
					}
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
		if (sort_str[i][0] != '\0')
			cout << sort_str[i] << '\n';

	return (0);
}

// 시간 초과
