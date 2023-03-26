#include <iostream>

int main()
{
	int	arr[9][9], max = -1, row = 0, column = 0;

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			std::cin >> arr[i][j];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] > max)
			{
				row = i + 1;
				column = j + 1;
				max = arr[i][j];
			}
		}
	}
	std::cout << max << std::endl << row << ' ' << column << std::endl;
	return (0);
}
