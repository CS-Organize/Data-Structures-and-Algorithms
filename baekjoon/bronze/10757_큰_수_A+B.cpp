#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[100001] = {0}, b[100001] = {0};
	cin >> a >> b;

	char *answer, *plus;
	int max, min, diff, flag = 0;
	if (strlen(a) > strlen(b))
	{
		answer = a;
		plus = b;
		max = strlen(a);
		min = strlen(b);
	}
	else
	{
		answer = b;
		plus = a;
		max = strlen(b);
		min = strlen(a);
	}
	diff = max - min;
	for (int i = max - 1; i >= 0; i--)
	{
		if (i >= diff)
		{
			if (answer[i] + plus[i - diff] >= 106)
			{
				answer[i] = answer[i] + plus[i - diff] - 106 + '0';
				if (i == 0)
				{
					cout << 1;
					flag = 1;
					break;
				}
				++answer[i - 1];
			}
			else
				answer[i] = answer[i] + plus[i - diff] - 96 + '0';
		}
		else
		{
			if (answer[i] > '9')
			{
				answer[i] = answer[i] - 58 + '0';
				if (i == 0)
				{
					cout << 1;
					flag = 1;
					break;
				}
				++answer[i - 1];
			}
		}
	}
	while (*answer == '0' && flag == 0)
		++answer;
	cout << answer;
	return (0);
}
