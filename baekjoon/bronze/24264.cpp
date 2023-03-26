/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            sum <- sum + A[i] × A[j]; # 코드1
    return sum;
}
*/

#include <iostream>
using namespace std;

int main()
{
	long long n;

	cin >> n;
	cout << n * n << "\n2";
	return (0);
}
