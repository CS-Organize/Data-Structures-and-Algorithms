#include <iostream>

int main()
{
	char	arr[5][15] = { { 0 } };
	for (int i = 0; i < 5; i++)
		std::cin >> arr[i];

	for (int j = 0; j < 15; j++)
		for (int i = 0; i < 5 ; i++)
			if (arr[i][j] != '\0')
				std::cout << arr[i][j];

	return (0);
}
