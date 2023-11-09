#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	const int MX = 1000005;
	int dat[MX]; // i번째 원소의 값
	int pre[MX]; // i번째 원소 이전 원소의 인덱스, -1이라면 존재하지 않음
	int nxt[MX]; // i번째 원소 다음 원소의 인덱스, -1이라면 존재하지 않음
	int unused = 1; // 현재 사용되지 않는 인덱스, 0은 시작 원소로 고정되어 있음
	int len = 0; // 리스트의 길이

	fill(pre, pre + MX, -1);
	fill(nxt, nxt + MX, -1);
	return 0;
}
