#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    int ld_of_fn = (n % 10);
    int ld_of_sn = (m % 10);

    cout << ld_of_fn + ld_of_sn << endl;

    return 0;
}