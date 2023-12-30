#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int channel;
int approximation = 0x7fffffff;
vector<int> button;
bool isIncludeZero = true;

int getDigit(int num)
{
	int cnt = 0;

	if (num == 0)
		return 1;
	while (num)
	{
		++cnt;
		num /= 10;
	}
	return cnt;
}

void	find_approximation(int num)
{
	if (abs(approximation - channel) >= abs(num - channel))
	{
		if (num == 0 && !isIncludeZero) ;
		else if (abs(approximation - channel) == abs(num - channel) && num > approximation) ;
		else approximation = num;
	}
	if (num > channel)
		return ;
	for (size_t i = 0; i < button.size(); i++)
	{
		int next = num * 10 + button[i];
		if (next != 0)
			find_approximation(next);
	}
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	cin >> channel;
	int m; cin >> m;

	// 버튼 고장
	vector<int> broken;
	f(i, m)
	{
		int x; cin >> x;
		broken.push_back(x);
		if (x == 0) isIncludeZero = false;
	}
	f(i, 10)
	{
		bool flag = false;
		f(j, m)
		{
			if (broken[j] == i)
				flag = true;
		}
		if (!flag) button.push_back(i);
	}
	
	// 주어진 button을 이용해 channel과 가장 근사한 값 찾기
	if (!button.empty())
		find_approximation(0);

	// 버튼 누른 횟수 계산
	ll cnt = 0;
	cnt += getDigit(approximation);
	cnt += abs(channel - approximation);

	if (abs(channel - 100) < cnt)
		cout << abs(channel - 100) << '\n';
	else
		cout << cnt << '\n';
	return 0;
}
