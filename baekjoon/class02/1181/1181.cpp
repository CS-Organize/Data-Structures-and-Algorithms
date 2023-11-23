#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

bool cmp(string a, string b)
{
	// 1. 길이가 같다면, 사전순으로
	if (a.length() == b.length())
		return a < b;
	// 2. 길이가 다르다면, 짧은 순으로
	else
		return a.length() < b.length();
}

// 범위가 크기때문에 전역변수로 설정
string word[20000];

int main() {
	int n;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> word[i];

	// 세 번째 매개변수인 사용자 정의 함수의 반환값은 a가 b보다 먼저 오는 것으로 간주되는 지의 여부를 나타낸다.
	sort(word, word + n, cmp);

	for (int i = 0; i < n; i++)
	{
		// 중복된 경우 한번만 출력
		if (word[i] == word[i - 1])
			continue;
		cout << word[i] << "\n";
	}

	return 0;
}

/* 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
2 초	256 MB	164307	68743	51532	40.324%

문제
알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.

길이가 짧은 것부터
길이가 같으면 사전 순으로
단, 중복된 단어는 하나만 남기고 제거해야 한다.

입력
첫째 줄에 단어의 개수 N이 주어진다. (1 ≤ N ≤ 20,000) 둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 한 줄에 하나씩 주어진다.
주어지는 문자열의 길이는 50을 넘지 않는다.

출력
조건에 따라 정렬하여 단어들을 출력한다.

예제 입력 1
13
but
i
wont
hesitate
no
more
no
more
it
cannot
wait
im
yours
예제 출력 1
i
im
it
no
but
more
wait
wont
yours
cannot
hesitate
*/
