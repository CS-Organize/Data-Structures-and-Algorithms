#include <iostream>
#include <algorithm>
using namespace std;

const int MX = 1000005;
int dat[MX]; // i번째 원소의 값
int pre[MX]; // 이전 원소의 인덱스, -1이라면 존재하지 않음
int nxt[MX]; // 다음 원소의 인덱스, -1이라면 존재하지 않음
int unused = 1; // 현재 사용되지 않는 인덱스, 0은 시작 원소로 고정되어 있음
int len = 0; // 리스트의 길이

void	traverse()
{
	int cur = nxt[0];
	while (cur != -1)
	{
		cout << dat[cur]  << ' ';
		cur = nxt[cur];
	}
	cout << '\n';
}

void	insert(int addr, int data)
{
	dat[unused] = data;
	pre[unused] = addr;
	nxt[unused] = nxt[addr];
	if (nxt[addr] != -1)
		pre[nxt[addr]] = unused;
	nxt[addr] = unused;
	++unused;
}

void	erase(int addr)
{
	nxt[pre[addr]] = nxt[addr];
	if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

int	main()
{
	fill(pre, pre + MX, -1);
	fill(nxt, nxt + MX, -1);
	insert(0, 2);
	insert(1, 3);
	insert(2, 4);
	erase(3);
	traverse();
	return 0;
}
