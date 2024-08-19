#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;

#define ll      long long
#define f(i, n) for (int i = 0; i < n; i++)
#define INDEX   first
#define TYPE    second

typedef pair<int, int> P;

const int PARENTHESES = 2, BRACKETS = 3;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    string input; cin >> input;
    stack<P> st;
    size_t sz = input.length();
    int prev_value = 0;
    int sum = 0;

    for (size_t i = 0; i < sz; i++)
    {
        int value = 0;
        if (input[i] == '(')
        {
            st.push(make_pair(i, PARENTHESES));
        }
        else if (input[i] == ')')
        {
            value = PARENTHESES;
            if (input[i - 1] == '(')
            {
                st.pop();
            }
        }
        else if (input[i] == '[')
        {
            st.push(make_pair(i, BRACKETS));
        }
        else
        {
            value = BRACKETS;
            if (input[i - 1] == '[')
            {
                st.pop();
            }
        }
    }
    
    return 0;
}
