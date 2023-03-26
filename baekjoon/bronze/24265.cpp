/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 1
        for j <- i + 1 to n
            sum <- sum + A[i] × A[j]; # 코드1
    return sum;
}
*/

#include <iostream>
using namespace std;

int main()
{
	unsigned long long n;

	cin >> n;
	cout << (n * (n - 1)) / 2 << "\n2";
	return (0);
}
