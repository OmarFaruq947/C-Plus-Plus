#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, Q;
    cin >> N >> Q;

    long long a[N];
    for (int i = 0; i < N; i++) // --------------- O( N )
    {
        cin >> a[i];
    }

    long long pre[N];
    pre[0] = a[0];
    for (int i = 1; i < N; i++) // --------------- O( N )
    {
        pre[i] = a[i] + pre[i - 1];
    }

    // ------simple prefix sum output------

    // for (int i = 0; i < N; i++)
    // {
    //     cout << pre[i] << " ";
    // }

    while (Q--) // --------------- O( q )
    {
        long long L, R;
        cin >> L >> R;

        L--;
        R--;
        long long sum;

        if (L == 0)
        {
            sum = pre[R];
        }
        else
        {
            sum = pre[R] - pre[L - 1];
        }
        cout << sum << endl;
    }

    return 0;
}

/*

time complexity calculation
-----------------------------

o(N) + O (N) + O(q)
=> o(N + N) + O(q)
=> O( N ) + O(q)  { o(N + N) == o(N) }
=> O( N + q )  { N == q }
=> o(N)
=> o(10^5) { N = 10^6 --> max_limit }
so, o(n) / O(10^5) is execution within 1 second , so, its very first


*/
