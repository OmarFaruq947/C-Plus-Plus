#include <iostream>

using namespace std;

int power(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int calculateSum(int X, int N)
{
    int sum = 0;
    for (int i = 2; i <= N; i += 2)
    {
        if (i == 0)
        {
            sum += X - 1;
        }
        else
        {
            sum += power(X, i);
        }
    }
    return sum;
}

int main()
{
    int X, N;
    cin >> X >> N;

    int result = calculateSum(X, N);
    cout << result << endl;

    return 0;
}

// 111 no: test case is wrong 😁😂😍