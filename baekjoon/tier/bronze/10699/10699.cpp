#include <iostream>
#include <ctime>
#include <chrono>
#include <iomanip>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	time_t t = time(NULL);
	struct tm *cur = localtime(&t);

	cout << setfill('0') << setw(4) << cur->tm_year + 1900 << '-';
	cout << setfill('0') << setw(2) << cur->tm_mon + 1 << '-';
	cout << setfill('0') << setw(2) << cur->tm_mday << '\n';
	
	return 0;
}
