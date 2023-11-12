# Stack_Utilization

## Typical use cases for the stack

- 수식의 괄호쌍
- 전위, 중위, 후위 표기법
- 재귀 호출
- DFS
- Flood Fill

## 수식의 괄호쌍

1. 여는 괄호가 나오면 스택에 push
2. 닫는 괄호가 나왔을 경우
	2-1 스택이 비어있으면 올바르지 않은 괄호쌍
	2-2 스택의 top이 여는 괄호와 짝이 맞지 않으면 올바르지 않은 괄호쌍
	2-3 스택의 top이 여는 괄호와 짝이 맞으면 pop
3. 모든 과정을 마치고 스택이 비어있으면 올바른 괄호쌍
