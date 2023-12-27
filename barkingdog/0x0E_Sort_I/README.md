# sort I

## Bubble Sort

- Time Complexity: $O(n^2)$

## Merge Sort

- Time Complexity: $O(nlogn)$
- 재귀적으로 배열을 분할하여 정렬하고, 정렬된 배열을 합치는 방식으로 동작한다.

## Quick Sort

- Time Complexity: 평균 $O(nlogn)$, 최악 $O(n^2)$
- 재귀적으로 pivot을 기준으로 배열을 분할하여 정렬하는 방식으로 동작한다. pivot을 기준으로 분할할 때, pivot을 제외한 나머지 원소들은 pivot보다 작은 원소들과 큰 원소들로 분할된다.
- quick sort의 장점은 pivot을 기준으로 분할할 때, 추가적인 메모리가 필요하지 않다는 것이다. => 배열 안에서만의 정렬이기 때문에 Cache hit rate가 높다.

## Introspective Sort

- quick sort와 heap sort를 합친 정렬 방식
- quick sort의 최악의 경우를 대비하여 heap sort를 사용한다.
- 거의 모든 정렬 알고리즘 중 가장 빠르기 때문에 각종 정렬 라이브러리의 기본 정렬 알고리즘으로 사용된다.
- 이러한 이유 때문에 STL을 사용하지 않고 직접 구현할 때는 quick sort 대신 merge sort를 사용하는 것이 좋다.

## Sort Priority 

### Stable Sort

- 우선순위가 같은 원소의 순서가 정렬 후에도 유지되는 정렬 방식
  - merge sort

### Unstable Sort

- 우선순위가 같은 원소의 순서가 정렬 후에 유지되지 않는 정렬 방식

### In-place Sort

- 추가적인 메모리 공간을 사용하지 않고 입력 배열 안에서 정렬하는 방식
	- quick sort

### Not In-place Sort

- 추가적인 메모리 공간을 사용하여 입력 배열을 복사한 후 정렬하는 방식
	- merge sort
