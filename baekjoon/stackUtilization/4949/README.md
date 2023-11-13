# [4949](https://www.acmicpc.net/problem/4949)
Created on: 2023-11-13

C++에서 사용자로부터 입력을 받을 때, 특정 문자 (예: '.') 이전의 입력을 가져오고 싶다면 std::cin을 사용하여 입력을 읽은 후 해당 문자까지 문자열로 저장하는 방법을 사용할 수 있습니다. 아래는 간단한 예제입니다:

```cpp

#include <iostream>
#include <string>

int main() {
		std::string input; // 입력을 저장할 문자열 변수
		char delimiter = '.'; // 구분자로 사용할 문자

		std::cout << "문자열을 입력하세요: ";
		std::getline(std::cin, input, delimiter);

		std::cout << "입력 받은 문자열: " << input << std::endl;

		return 0;
}
```

위의 코드에서 std::getline 함수는 std::cin으로부터 입력을 읽으며, 두 번째 매개변수로 문자열을 저장하고, 세 번째 매개변수로 구분자로 사용할 문자를 지정합니다. 이 코드는 사용자로부터 입력을 받아서 '.' 문자 이전까지의 문자열을 input 변수에 저장합니다.

예를 들어, 사용자가 "Hello.World"라고 입력하면, input 변수에는 "Hello"가 저장됩니다.

## References


