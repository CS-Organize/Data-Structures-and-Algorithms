#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    string input;

    cin >> input;
    // cin.ignore(); // 
    getline(cin, input); // '\n'이 입력으로 들어감

    cout << input <<'\n';
    return 0;
}
