# [7662](https://www.acmicpc.net/problem/7662)

solved on: 2024-07-22

## Solutions

42cursus의 cpp module08 `MutantStack` 에서 했던대로 container adapter 클래스를 받아서 내부 클래스의 메소드를 사용하여 해결하려고 했다

```cpp
template <typename T>
class MutantPQ : public priority_queue<T>
{
public:
    void pop_back(void)
    {
        if (!this->empty())
        {
            this->c.pop_back();
        }
    }
    T back(void)
    {
        return this->c.back();
    }
};
```

하지만 priority_queue는 내부적으로 heap 자료구조를 사용하기 때문에 가장 작은 원소를 back으로 접근하는 것은 불가능했다.

## References
- [[C++ STL] Heap 자료구조](https://yummy0102.tistory.com/218)
- [How to delete last element from a map in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/how-to-delete-last-element-from-a-map-in-c/)
