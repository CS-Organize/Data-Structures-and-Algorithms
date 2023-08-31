#include <stdio.h>

int main(void)
{
	int c, n;
	scanf("%d", &c);
	for (int i = 0; i < c; i++)
	{
		scanf("%d", &n);
		int students[n], sum = 0, cnt = 0;
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &students[j]); // 배열 만들기
			sum += students[j];		   // 학생들의 점수 총합 구하기
		}
		for (int k = 0; k < n; k++)
		{
			if (students[k] > (sum / n))
				cnt++; // 평균값보다 높은 점수 나올 때마다 cnt ++
		}
		printf("%.3f%%\n", ((float)cnt / (float)n) * 100);
	}
	return 0;
}
