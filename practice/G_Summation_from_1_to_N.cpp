// 1+2+3 = 6
// 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if (n > 0)
    {
        long long int sum = n * (n + 1) / 2;
        cout << sum;
    }

    return 0;
}