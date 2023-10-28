#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

void	print_bingo(int bingo[5][5])
{
	cout << "\n-------------------------------------\n";
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << bingo[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << "-------------------------------------\n";
}

int	main()
{
	int	bingo[5][5] = {{0}};
	int	num, is_bingo, bingo_cnt, cnt = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> num;
			bingo[i][j] = num;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// 숫자 부름
			cin >> num;
			for (int k = 0; k < 5; k++)
			{
				for (int l = 0; l < 5; l++)
				{
					if (num == bingo[k][l])
						bingo[k][l] = -1;
				}
			}
			// 가로 빙고 확인
			is_bingo = 0;
			for (int k = 0; k < 5; k++)
			{
				bingo_cnt = 0;
				for (int l = 0; l < 5; l++)
				{
					if (bingo[k][l] == -1)
						++bingo_cnt;
				}
				if (bingo_cnt == 5)
					++is_bingo;
			}
			// 세로 빙고 확인
			for (int k = 0; k < 5; k++)
			{
				bingo_cnt = 0;
				for (int l = 0; l < 5; l++)
				{
					if (bingo[l][k] == -1)
						++bingo_cnt;
				}
				if (bingo_cnt == 5)
					++is_bingo;
			}
			// 대각선 빙고 확인
			bingo_cnt = 0;
			for (int k = 0; k < 5; k++)
			{
				if (bingo[k][k] == -1)
					++bingo_cnt;
			}
			if (bingo_cnt == 5)
				++is_bingo;
			bingo_cnt = 0;
			for (int k = 0; k < 5; k++)
			{
				if (bingo[4 - k][k] == -1)
					++bingo_cnt;
			}
			if (bingo_cnt == 5)
				++is_bingo;
			if (is_bingo < 3)
				++cnt;
		}
	}
	cout << cnt + 1 << '\n';
	return (0);
}
