#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n, m; cin >> n >> m;
	int classmate[n + 1][n + 1];
	int is_join[n + 1], sum = 0;

	// 0으로 초기화
	for (int i = 0; i < n + 1; i++)
	{
		for (int j = 0; j < n + 1; j++)
			classmate[i][j] = 0;
		is_join[i] = 0;
	}

	// 친구관계표에 표시하기
	for (int i = 0; i < m; i++)
	{
		int a, b; cin >> a >> b;
		classmate[a][b] = 1;
		classmate[b][a] = 1;
	}

	// 자신의 친구
	for (int i = 2; i < n + 1; i++)
	{
		if (classmate[1][i] == 1)
		{
			is_join[i] = 1;
			// 친구의 친구
			for (int j = 2; j < n + 1; j++)
			{
				if (classmate[i][j] == 1)
					is_join[j] = 1;
			}
		}
	}

	for (int i = 1; i < n + 1; i++)
		sum += is_join[i];

	cout << sum << '\n';

	return 0;
}

/*
문제
상근이는 자신의 결혼식에 학교 동기 중 자신의 친구와 친구의 친구를 초대하기로 했다.
상근이의 동기는 모두 N명이고, 이 학생들의 학번은 모두 1부터 N까지이다. 상근이의 학번은 1이다.

상근이는 동기들의 친구 관계를 모두 조사한 리스트를 가지고 있다. 이 리스트를 바탕으로 결혼식에 초대할 사람의 수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 상근이의 동기의 수 n (2 ≤ n ≤ 500)이 주어진다. 둘째 줄에는 리스트의 길이 m (1 ≤ m ≤ 10000)이 주어진다.
다음 줄부터 m개 줄에는 친구 관계 ai bi가 주어진다. (1 ≤ ai < bi ≤ n) ai와 bi가 친구라는 뜻이며, bi와 ai도 친구관계이다.

출력
첫째 줄에 상근이의 결혼식에 초대하는 동기의 수를 출력한다.

내 친구랑 친구의 친구만 초대할 거임(나는 1)
예제 입력 1
동기 6명
5개의 친구관계 리스트 보여줄거임
1와 2가 친구 사이
1와 3가 친구 사이
3와 4가 친구 사이
2와 3가 친구 사이
4와 5가 친구 사이
예제 출력 1
3
*/
