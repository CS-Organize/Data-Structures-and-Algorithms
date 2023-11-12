#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int N, L; cin >> N >> L;
	deque<int> DQ;

	return 0;
}

/*
시간 제한	메모리 제한
2.4 초 (하단 참고)	512 MB

문제
N개의 수 A1, A2, ..., AN과 L이 주어진다.
Di = A(i-L+1) ~ Ai 중의 최솟값이라고 할 때, D에 저장된 수를 출력하는 프로그램을 작성하시오.
이때, i ≤ 0 인 Ai는 무시하고 D를 구해야 한다.

입력
첫째 줄에 N과 L이 주어진다. (1 ≤ L ≤ N ≤ 5,000,000)

둘째 줄에는 N개의 수 Ai가 주어진다. (-10^9 ≤ Ai ≤ 10^9)

출력
첫째 줄에 Di를 공백으로 구분하여 순서대로 출력한다.

예제 입력 1
12 3
1 5 2 3 6 2 3 7 3 5 2 6

12개의 수 Di = A(i-3+1) ~ Ai
D1 = A-1 ~ A1
D2 = A0 ~ A2
D3 = A1 ~ A3
D4 = A2 ~ A4
D5 = A3 ~ A5
D6 = A4 ~ A6
D7 = A5 ~ A7
D8 = A6 ~ A8
D9 = A7 ~ A9
D10 = A8 ~ A10
D11 = A9 ~ A11
D12 = A10 ~ A12

예제 출력 1
1 1 1 2 2 2 2 2 3 3 2 2
*/
