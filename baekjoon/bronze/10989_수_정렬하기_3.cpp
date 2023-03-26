#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int count[10001] = { 0 }, n, num;;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		++count[num];
	}
	for (int i = 1; i < 10001; ++i)
		for (int j = 0; j < count[i]; ++j)
			cout << i << '\n';
	return (0);
}

// https://hongku.tistory.com/155
// https://www.acmicpc.net/board/view/104803
// endl은 버퍼를 flush하는 역할을 겸하기 때문에 매우 매우 매우 느립니다. '\n'을 사용하세요.
// https://www.acmicpc.net/board/view/99015
// 위 구문의 의미는 C와 c++간의 표준 스트림 동기화를 끊는다는 것과, 기본적으로 cout에 종속적인 cin을 cout으로부터 끊는다는 것입니다.
// https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull
