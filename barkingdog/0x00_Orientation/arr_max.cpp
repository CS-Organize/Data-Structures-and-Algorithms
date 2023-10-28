// https://blog.encrypted.gg/921

#include <iostream>
#include <algorithm>

using namespace std;

// 최댓값이 여러개일 경우, 가장 마지막 인덱스의 원소를 반환한다.
int	solution1(int arr[]) {
	if (arr[0] > arr[1] && arr[0] > arr[2] && arr[0] > arr[3])
		return (arr[0]);
	else if (arr[1] > arr[0] && arr[1] > arr[2] && arr[1] > arr[3])
		return (arr[1]);
	else if (arr[2] > arr[0] && arr[2] > arr[1] && arr[2] > arr[3])
		return (arr[2]);
	else
		return (arr[3]);
}

int	solution1_modify(int arr[]) {
	if (arr[0] >= arr[1] && arr[0] >= arr[2] && arr[0] >= arr[3])
		return (arr[0]);
	else if (arr[1] >= arr[0] && arr[1] >= arr[2] && arr[1] >= arr[3])
		return (arr[1]);
	else if (arr[2] >= arr[0] && arr[2] >= arr[1] && arr[2] >= arr[3])
		return (arr[2]);
	else
		return (arr[3]);
}

// max 변수를 사용하여 최댓값을 구한다.
int	solution2(int arr[]) {
	int	max = arr[0];
	for (int i = 1; i < 4; i++)
		if (arr[i] > max)
			max = arr[i];
	return (max);
}

// algorithm 헤더의 max_element 함수 사용
int	solution3(int arr[]) {
	return (*max_element(arr, arr + 4));
}

int	main()
{
	int	arr[4] = {9, 9, 3, 1};
	cout << solution1(arr) << '\n';
	cout << solution1_modify(arr) << '\n';
	cout << solution2(arr) << '\n';
	cout << solution3(arr) << '\n';

	return (0);
}
