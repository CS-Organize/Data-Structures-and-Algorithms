# Queue

## Properties of Queue

1. 원소의 추가 O(1)
2. 원소의 제거 O(1)
3. 제일 앞/뒤의 원소 확인 O(1)
4. 제일 앞/뒤가 아닌 나머지 원소들의 확인/변경이 원칙적으로 불가능

> 원소가 추가되는 곳을 `rear`, 제거되는 곳을 `front`라고 부른다.

## Implementation of Queue

1. Array
2. Linked List
3. Queue Library

## Queue Library

queue가 비어있다면 front(), back() 또는 pop()을 호출하면 런타임 에러가 발생한다.
