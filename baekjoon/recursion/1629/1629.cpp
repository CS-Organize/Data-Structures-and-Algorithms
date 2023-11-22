#include <iostream>
#include <algorithm>
using namespace std;

// a^n * a^n = a^2n
// 12^58 === 4(mod 67) -> 12^116 === 16(mod 67)

// 1번 도미노가 쓰러진다.
// k번 도미노가 쓰러지면 k+1번 도미노도 쓰러진다.

// 1승을 계산할 수 있다.
// k승을 계산했으면 2k승과 2k+1승도 O(1)에 계산할 수 있다.

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

// a^b % m
// a^(b/2) * a^(b/2) % m
// (a^(b/4) * a^(b/4)) * (a^(b/4) * a^(b/4)) % m
ll	pow(ll a, ll b, ll m)
{
	if (b == 0) return 1;
	if (b == 1) return a % m;
	ll tmp = pow(a, b / 2, m);
	if (b % 2 == 0) // b가 짝수라면
		return tmp * tmp % m; //  b/2승을 제곱
	else // b가 홀수라면
		return (tmp * tmp % m) * a % m; // 한 번 더 a를 곱해준다.
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	ll a, b, m; cin >> a >> b >> m;
	cout << pow(a, b, m) << '\n';

	return 0;
}

/*
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
0.5 초 (추가 시간 없음)	128 MB	109411	30508	22264	26.855%

문제
자연수 A를 B번 곱한 수를 알고 싶다. 단 구하려는 수가 매우 커질 수 있으므로 이를 C로 나눈 나머지를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 A, B, C가 빈 칸을 사이에 두고 순서대로 주어진다. A, B, C는 모두 2,147,483,647 이하의 자연수이다.

출력
첫째 줄에 A를 B번 곱한 수를 C로 나눈 나머지를 출력한다.

예제 입력 1
10 11 12
예제 출력 1
4
*/



